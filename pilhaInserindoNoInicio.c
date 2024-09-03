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
        printf("%d\n", atual->dado);
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
        
        // Cria um nó novo
        Tpilha *novo;
        novo = (Tpilha *) malloc(sizeof(Tpilha));
        novo->dado = el;
        
        // o próximo do novo aponta para o primeiro da lista
        novo->prox = p1;
        
        // Pilha passa a apontar para o novo
        p1 = novo;
    }
}

int removeDaPilha() {
    if (p1 == NULL) {
        printf("A pilha já está vazia!\n");
        return -1;
    }
    
    // marca o primeiro elemento
    Tpilha *atual = p1;
    
    // armazena o valor para retornar
    int elemento = atual->dado;
    
    // aponta pilha para o segundo elemento
    p1 = p1->prox;
    
    // libera a memória do elemento
    free(atual);
    
    // retorna o valor
    return elemento;
}

int main()
{
    
    insereNaPilha(10);
    insereNaPilha(11);
    //insereNaPilha(13);
    //insereNaPilha(14);
    mostrarPilha();
    
    printf("Removendo %d\n", removeDaPilha());
    printf("Removendo %d\n", removeDaPilha());
    printf("Removendo %d\n", removeDaPilha());
    mostrarPilha();
    return 0;
}