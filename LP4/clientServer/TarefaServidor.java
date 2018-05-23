// cs1::mf::TarefaServidor::
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.net.Socket;


 class TarefaServidor {

    
    // cs1::mf::TarefaServidor::
    TarefaServidor(Socket c) throws IOException {
        fluxoEntrada = definirFluxoEntrada(c);
        fluxoSaida = definirFluxoSaida(c);
    }
    BufferedReader fluxoEntrada;
    PrintWriter fluxoSaida;
    
      // cs1::mf::TarefaServidor::
    BufferedReader definirFluxoEntrada(Socket cliente) throws IOException {
        InputStream is = cliente.getInputStream();
        InputStreamReader istream = new InputStreamReader(is);
        return new BufferedReader(istream);
    }
    
    // cs1::mf::TarefaServidor::
    PrintWriter definirFluxoSaida(Socket cliente) throws IOException {
        OutputStream os = cliente.getOutputStream();
        BufferedOutputStream ostream = new BufferedOutputStream(os);
        // flush por write
        return new PrintWriter(os, true);
    }
     // cs1::mf::TarefaServidor::
    public void run() throws IOException {
        String cmd = fluxoEntrada.readLine();
        if (cmd != null) {
            System.out.println(cmd);
            switch (cmd) {
                case "mf":
                    double mf = Math.random() * 10.0;
                    String resultado = String.format("%.1f", mf);
                    fluxoSaida.println(resultado);
                    break;
                default:
                    fluxoSaida.println("Não sei....");
            }
        }
    }
}
