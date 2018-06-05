// cs5::chat::servidor::Servidor::
import java.io.IOException;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.HashMap;
import java.util.Map;


public class Servidor { // <--
    // cs5::chat::servidor::Servidor::
    Servidor() {
        participanteMap = new HashMap<>();
    }

    Map<String, PrintWriter> participanteMap;
    
        // cs5::chat::servidor::Servidor::
    boolean receber(String nome, PrintWriter fs) {
        // Condição de corrida?
        if (!participanteMap.containsKey(nome)) {
            participanteMap.put(nome, fs);
            System.out.println(nome + " entrou na sala.");
            return true;
        }
        return false;
    }
      // cs5::chat::servidor::Servidor::
    void difundir(String cmd, String nome, String texto) {
        participanteMap.forEach((p, fs) -> {
            String dado = cmd + " " + nome + ": " + texto;
            fs.println(dado);
        });
    }
        // cs5::chat::servidor::Servidor::
    void remover(String nome) {
        if (nome != null) {
            participanteMap.remove(nome);
            System.out.println(nome + " saiu da sala.");
        }
    }
        // cs5::chat::servidor::Servidor::
    void run() throws IOException {
        int PORT = 9001;
        try (ServerSocket ss = new ServerSocket(PORT)) { // (1)
            while (true) {
                Socket cliente = ss.accept();   // (2)
                Tarefa t = new Tarefa(this, cliente); // (3)
                Executor e = new Executor(t);   // (4)
                e.start();
            }
        }
    }
    
}