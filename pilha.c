#define TAMANHO 10

#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int fim;
    int dados[TAMANHO];
} TPilha;

TPilha pilha; 

int tamanhoDaPilha() {
    return pilha.fim;
}

void insereNaPilha(int el) {
    if (tamanhoDaPilha() >= TAMANHO) {
        printf("Pilha cheia!\n");
        return;
    }
    
    pilha.dados[pilha.fim] = el;
    pilha.fim++;
}

int removeDaPilha() {
    if (tamanhoDaPilha() <= 0) {
        printf("Pilha vazia!\n");
        return -1;
    }

    int el = pilha.dados[pilha.fim - 1];
    pilha.fim--;
    return el;
}

void mostrarPilha() {
    int i;
    printf("\n\n");
    for (i = pilha.fim - 1; i >= 0; i--) {
        printf("| %d |\n", pilha.dados[i]);
    }
    printf("\n\n");
}


int main() {
    while (1 == 1) {
        printf("--- BEM-VINDO AO SISTEMA SUPIMPA ---\n\n");
        printf("O que você deseja fazer hoje?\n\n");
        printf("1 - Exibir a pilha\n");
        printf("2 - Inserir na pilha\n");
        printf("3 - Remover da pilha\n");
        printf("0 - Sair\n\n: ");
        int opcao, add;
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                mostrarPilha();
                system("pause");
                break;
            case 2:
                printf("Escolha um número para adicionar: ");
                scanf("%d", &add);
                insereNaPilha(add);
                break;
            case 3:
                add = removeDaPilha();
                printf("%d saiu da pilha\n", add);
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
