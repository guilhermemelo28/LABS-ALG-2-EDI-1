#include "pilha.h"
#include<stdlib.h>


struct pilha{
    int info;
    struct pilha* prox;
};


Pilha cria_pilha (){
    return NULL;
}


int pilha_vazia(Pilha p){
    if(p == NULL){
        return 1;
    }
    return 0;
}


int push(Pilha *p, int elem){
    
    Pilha n = (Pilha) malloc(sizeof(struct pilha));
    if(n == NULL) return 0;

    n->info = elem;
    n->prox = *p;
    *p = n ;
    return 1;
}


int pop(Pilha *p,int *elem){
    if(pilha_vazia(*p)) return 0;
    Pilha aux = *p;
    *elem = aux->info;
    *p = aux->prox;
    free(aux);
    return 1;
}

int le_topo(Pilha p,int *elem){

    if(pilha_vazia(p)) return 0;
    
    *elem = p->info;
    return 1;
}
