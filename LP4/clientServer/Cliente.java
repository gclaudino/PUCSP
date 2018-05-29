// cs1::mf::Cliente::
import java.io.IOException;
import java.net.Socket;

class Cliente {

    public void run() throws IOException {
        System.out.println("Conectando com o servidor de notas LP4...");
        try (Socket servidor = new Socket("172.17.31.8", 9001)) {
            TarefaCliente t = new TarefaCliente(servidor);
            t.run();
        } // servidor.close()
    }
}