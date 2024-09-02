#define TAMANHO 10

#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int inicio;
    int fim;
    int dados[TAMANHO];
} TFila;

TFila fila; 

int tamanhoDaFila() {
    if (fila.fim - fila.inicio < 0) {
        return (fila.fim + TAMANHO) - fila.inicio;
    }
    return fila.fim - fila.inicio;
}

void insereNaFila(int el) {
    if (tamanhoDaFila() >= TAMANHO) {
        printf("Fila cheia!\n");
        return;
    }
    
    fila.dados[fila.fim] = el;
    fila.fim++;
}

int removeDaFila() {
    if (tamanhoDaFila() <= 0) {
        printf("Fila vazia!\n");
        return -1;
    }

    int el = fila.dados[fila.inicio];
    fila.inicio++;
    return el;
}

void mostrarFila() {
    for (int i = fila.inicio; i < fila.fim; i++) {
        printf("%d ", fila.dados[i]);
    }
    printf("\n");
}


int main() {
    while (1 == 1) {
        printf("--- BEM-VINDO AO SISTEMA SUPIMPA ---\n\n");
        printf("O que você deseja fazer hoje?\n\n");
        printf("1 - Exibir a fila\n");
        printf("2 - Inserir na fila\n");
        printf("3 - Remover da fila\n");
        printf("0 - Sair\n\n: ");
        int opcao, add;
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                mostrarFila();
                system("pause");
                break;
            case 2:
                printf("Escolha um número para adicionar: ");
                scanf("%d", &add);
                insereNaFila(add);
                break;
            case 3:
                add = removeDaFila();
                printf("%d saiu da fila\n", add);
                system("pause");
                break;
            case 0:
                return 0;
            default:
                break;
        }

    }

    return 0;
}