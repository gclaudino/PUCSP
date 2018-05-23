// cs1::mf::TarefaCliente::
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.net.Socket;


 class TarefaCliente {
      // cs1::mf::TarefaCliente::
    TarefaCliente(Socket servidor) throws IOException {
        fluxoEntrada = definirFluxoEntrada(servidor);
        fluxoSaida = definirFluxoSaida(servidor);
    }
    BufferedReader fluxoEntrada;
    PrintWriter fluxoSaida;
      // cs1::mf::TarefaCliente
    public BufferedReader definirFluxoEntrada(Socket socket) throws IOException {
        InputStream is = socket.getInputStream();
        InputStreamReader istream = new InputStreamReader(is);
        return new BufferedReader(istream);
    }
     // cs1::mf::TarefaCliente
    public PrintWriter definirFluxoSaida(Socket socket) throws IOException {
        OutputStream os = socket.getOutputStream();
        BufferedOutputStream ostream = new BufferedOutputStream(os);
        // flush por write
        return new PrintWriter(ostream, true);
    }
     // cs1::mf::TarefaCliente::
    public void run() throws IOException {
        String comando = "mf";
        fluxoSaida.println(comando);
        //long x = System.currentTimeMillis();
        String mf = fluxoEntrada.readLine();
        //long y = System.currentTimeMillis();
        //System.out.println("Ping médio= " + (y - x) / 10 + "ms");
        System.out.println("Média final (LP4)= " + mf);
    }
    }