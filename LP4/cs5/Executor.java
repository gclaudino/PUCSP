// cs5::chat::servidor::Executor::
class Executor extends Thread{

    Executor(Tarefa t) {
        super();
        tarefa = t;
    }

    Tarefa tarefa;

    @Override
    public void run() {
        tarefa.run(); // <--(1)
    }
}