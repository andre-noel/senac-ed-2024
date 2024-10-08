public class Dados {
    private int dados[];

    public Dados() {
        this.dados = new int[10];
        for (int i = 0; i < 10; i++) {
            this.dados[i] = (int) (Math.random() * 100);
        }
    }

    @Override
    public String toString() {
        String out = "";
        for (int i = 0; i < 10; i++) {
            out = out + this.dados[i] + " ";
        }
        return out;
    }

    public void bubbleSort() {
        for (int i = 0; i < this.dados.length; i++) {
            boolean troca = false;
            for (int j = 0; j < this.dados.length - i - 1; j++) {
                if (this.dados[j] > this.dados[j + 1]) {
                    troca = true;
                    int tmp = this.dados[j];
                    this.dados[j] = this.dados[j + 1];
                    this.dados[j + 1] = tmp;
                }
            }
            if (!troca) break;
            System.out.println(this);
        }
    }
}
