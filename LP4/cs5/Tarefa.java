// cs5::chat::servidor::Tarefa::
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;
class Tarefa { // <--

    // cs5::chat::servidor::Tarefa::
    Tarefa(Servidor s, Socket c) {
        servidor = s;
        cliente = c;
    }
    Servidor servidor;
    Socket cliente;
        // cs5::chat::servidor::Tarefa::
    void run() {
        try {
            if (registrarParticipante()) {      // (1)
                // ciclo perpétuo...
                difundir();                     // (2) 
                servidor.remover(participante); // (3)
            }
        } catch (IOException e) {
        } finally {
            try {
                cliente.close();                // (4)
            } catch (IOException e) {
            }
        }
    }
      // cs5::chat::servidor::Tarefa::
    boolean registrarParticipante() throws IOException {
        fluxoEntrada = new BufferedReader(new InputStreamReader(cliente.getInputStream()));
        PrintWriter fluxoSaida = new PrintWriter(cliente.getOutputStream(), true);
        while (true) {
            String cmd = "REGISTRO";
            fluxoSaida.println(cmd);
            participante = fluxoEntrada.readLine();
            if (participante == null) {
                return false;
            }
            if (servidor.receber(participante, fluxoSaida)) {
                cmd = "ACEITO";
                fluxoSaida.println(cmd);
                break;
            }
        }
        return true;
    }
    String participante;
    BufferedReader fluxoEntrada;
       // cs5::chat::servidor::Tarefa::
    void difundir() throws IOException {
        while (true) {
            String texto = fluxoEntrada.readLine();
            if (texto == null) {
                return;
            }
            String cmd = "MENSAGEM";
            servidor.difundir(cmd, participante, texto);
        }
    }
}