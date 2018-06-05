// cs5::chat::servidor::Main::
public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("O servidor da sala de conversas está rodando...");
        Servidor s = new Servidor();
        s.run();
    }
}