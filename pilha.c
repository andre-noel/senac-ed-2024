#define TAMANHO 10

#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int fim;
    int dados[TAMANHO];
} TPilha;

TPilha pilha;

int tamanhoDaPilha(TPilha *p) {
    return p->fim;
}

void insereNaPilha(TPilha *p, int el) {
    if (tamanhoDaPilha(p) >= TAMANHO) {
        printf("Pilha cheia!\n");
        return;
    }
    
    p->dados[p->fim] = el;
    p->fim++;
}

int removeDaPilha(TPilha *p) {
    if (tamanhoDaPilha(p) <= 0) {
        printf("Pilha vazia!\n");
        return -1;
    }

    int el = p->dados[p->fim - 1];
    p->fim--;
    return el;
}

void mostrarPilha(TPilha p) {
    int i;
    printf("\n\n");
    for (i = p.fim - 1; i >= 0; i--) {
        printf("| %d |\n", p.dados[i]);
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
                mostrarPilha(pilha);
                system("pause");
                break;
            case 2:
                printf("Escolha um número para adicionar: ");
                scanf("%d", &add);
                insereNaPilha(&pilha, add);
                break;
            case 3:
                add = removeDaPilha(&pilha);
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
