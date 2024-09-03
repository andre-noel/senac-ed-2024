#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int dado;
    struct pilha *prox;
} Tpilha;

Tpilha*p1;

void mostrarPilha(){
    if (p1 == NULL){
        printf("Pilha vazia\n");
        return ;
    }
    
    Tpilha *atual;
    atual = p1;
    
    do {
        printf("%d ", atual->dado);
        atual = atual->prox;
    } while (atual != NULL);
}

void insereNaPilha (int el) {
    if (p1 == NULL) {
        // Se pilha estiver vazia
        Tpilha *no;
        no= (Tpilha *) malloc(sizeof(Tpilha));
        no->dado = el;
        no->prox = NULL;
        p1 = no;
    } else {
        // Se não estiver vazia
        // Encontre o último elemento
        
        // Cria um ponteiro temporario
        Tpilha *atual;
        atual = p1;
        
        // percorre a pilha até o final
        
        // enquanto o atual não for o último
        while (atual->prox != NULL) {
            // passa o atual para o próximo
            atual = atual->prox;
        }
        
        // Insere o elemento no final da pilha
        
        // Cria um nó novo e aponta o prox do atual para ele
        Tpilha *no;
        no = (Tpilha *) malloc(sizeof(Tpilha));
        no->dado = el;
        no->prox = NULL;
        atual->prox = no;
    }
}

int main()
{
    mostrarPilha();
    insereNaPilha(10);
    insereNaPilha(11);
    insereNaPilha(13);
    insereNaPilha(14);
    mostrarPilha();
    return 0;
}