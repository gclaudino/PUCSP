import java.io.IOException;
import java.net.Socket;
import java.awt.event.ActionEvent;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;

import javax.swing.JTextField;
import javax.swing.JTextArea;
public class TarefaCliente
{
    TarefaCliente(Socket servidor) throws IOException {
        fluxoEntrada = definirFluxoEntrada(servidor);
        fluxoSaida = definirFluxoSaida(servidor);
    }
    BufferedReader fluxoEntrada;
    PrintWriter fluxoSaida;
    Cliente cliente;

    public BufferedReader definirFluxoEntrada(Socket servidor)throws IOException{
        InputStream is = servidor.getInputStream();
        InputStreamReader istream = new InputStreamReader(is);
        return new BufferedReader(istream);

    }
    
    public PrintWriter definirFluxoSaida(Socket servidor)throws IOException{
        OutputStream os = servidor.getOutputStream();
        BufferedOutputStream ostream = new BufferedOutputStream(os);
        return new PrintWriter(ostream,true);

    }

    void associar(JTextField texto){
        texto.addActionListener((ActionEvent e) ->{
                fluxoSaida.println(texto.getText());
                texto.setText(" ");
            });
    }

    void associar(Cliente c){
        cliente = c;
        associar(cliente.entrada);
    }

    void run() throws IOException{
        while(true){
            String texto = fluxoEntrada.readLine();
            if (texto.startsWith("REGISTRO")){
                fluxoSaida.println(cliente.obterParticipante());
            }else if(texto.startsWith("ACEITO")){

            }else if (texto.startsWith("MENSAGEM")){
                cliente.sala.append(texto.substring(9) + "\n");
            }
        }
    }
}
