#define TAMANHO 10

#include <stdio.h>

typedef struct fila {
    int inicio;
    int fim;
    int arrayFila[TAMANHO];
} TFila;

TFila fila;

int tamanhoDaFila() {
    if (fila.fim - fila.inicio < 0) {
        return (fila.fim + TAMANHO) - fila.inicio;
    }
    return fila.fim - fila.inicio;
}

void insereNaFila(int el) {
    // Testar:
    // Só posso inserir se o tamanho da fila for menor que o tamanho do vetor

    fila.arrayFila[fila.fim] = el;
    fila.fim++;
}

int removeDaFila() {
    // Testar:
    // Só posso remover da fila se o tamanho da fila for maior que zero
    int el = fila.arrayFila[fila.inicio];
    fila.inicio++;
    return el;
}

void mostrarFila() {
    for (int i = fila.inicio; i < fila.fim; i++) {
        printf("%d ", fila.arrayFila[i]);
    }
    printf("\n");
}


int main() {
    insereNaFila(8);
    insereNaFila(3);
    insereNaFila(4);
    printf("Tamanho da fila: %d\n", tamanhoDaFila());
    mostrarFila();
    printf("Atendimento: %d\n", removeDaFila());
    mostrarFila();
    printf("Início da fila: %d\n", fila.inicio);
    printf("Fim da fila: %d\n", fila.fim);

    
    return 0;
}