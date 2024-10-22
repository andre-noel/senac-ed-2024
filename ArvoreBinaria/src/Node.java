public class Node {
    private int dado;
    private Node left;
    private Node right;

    public Node(int dado) {
        this.dado = dado;
        this.left = null;
        this.right = null;
    }

    public void inserir(int newDado) {
        if (newDado > this.dado) {
            // Insere à direita
            if (this.right == null) {
                this.right = new Node(newDado);
            } else {
                this.right.inserir(newDado);
            }
        } else {
            // Insere à esquerda
            if (this.left == null) {
                this.left = new Node(newDado);
            } else {
                this.left.inserir(newDado);
            }
        }
    }

    public void emOrdem() {
        if (this.left != null) {
            this.left.emOrdem();
        }
        System.out.print(this.dado + " ");
        if (this.right != null) {
            this.right.emOrdem();
        }
    }

    public void preOrdem() {

    }

    public void posOrdem() {

    }

}
