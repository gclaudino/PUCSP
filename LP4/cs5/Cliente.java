import java.io.IOException;
import java.net.Socket;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JScrollPane;
import javax.swing.JTextField;
import javax.swing.JTextArea;

public class Cliente
{
    JFrame painel;
    JTextField entrada;
    JTextArea sala;
    TarefaCliente t;
    
    Cliente(){
        painel = new JFrame("Conversa (V0.1)");
        entrada = new JTextField(40);
        sala = new JTextArea(8,40);
        entrada.setEditable(false);
        sala.setEditable(false);
        
        painel.getContentPane().add(entrada, "North");
        painel.getContentPane().add(new JScrollPane(sala),"Center");
        painel.pack();
        painel.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       
        painel.setVisible(false);
    }
   
    String obterIpServidor(){
        //return JOptionPane.showInputdialog(
        //painel,
        //"Endereço IP do servidor:",
        // "Recepçaõ da sala de conversa",
        //JOptionPane.QUESTION_MESSAGE);
        return "127.0.0.1";
    }
    
    String obterParticipante(){
        return JOptionPane.showInputDialog(painel,
        "Qual o seu nome?",
        "Escolha de nome",
        JOptionPane.PLAIN_MESSAGE);
    }
    
    
    void run() throws IOException {
        String ipServidor = obterIpServidor();
        int PORTA = 9001;
        Socket servidor = new Socket(ipServidor, PORTA);
        t = new TarefaCliente(servidor);
        t.associar(this);
        t.run();
    }
}
