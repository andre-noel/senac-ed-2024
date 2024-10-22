//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Node arvore = new Node(11);
        arvore.inserir(7);
        arvore.inserir(8);
        arvore.inserir(18);
        arvore.inserir(15);
        arvore.inserir(12);
        arvore.inserir(30);
        arvore.inserir(6);
        // dontpad.com/ArvoreJava

        arvore.emOrdem();
        System.out.println();
        arvore.preOrdem();
        System.out.println();
        arvore.posOrdem();
        System.out.println();
    }
}