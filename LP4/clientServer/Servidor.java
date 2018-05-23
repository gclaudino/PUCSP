// cs1::mf::Servidor::
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

public class Servidor {

    public void run() throws IOException {
        ServerSocket ss = new ServerSocket(9001);
        int n = 0;
        while (true) {
            String nomeFluxo = Thread.currentThread().getName();
            String s = String.format("Aguardando conexões (%s)...", nomeFluxo);
            System.out.println(s);
            Socket cliente = ss.accept(); // <--(1) WAIT
            System.out.println("Atendendo cliente " + ++n); // <--(2)
            TarefaServidor t = new TarefaServidor(cliente);
            t.run();
        }
    }
}