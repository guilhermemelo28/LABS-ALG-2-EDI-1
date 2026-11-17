#include "pilha.h"
#include <stdio.h>
#include<stdlib.h>
#define max 20

struct pilha{
    int vetor[max];
    int topo;
};

Pilha cria_lista(){
    Pilha p =  (Pilha) malloc (sizeof(struct pilha));
    
    if(p != NULL){
        p->topo = -1;
    }

    return p;
}


int lista_vazia(Pilha p){

    if(p->topo == -1){
        return 1;
    }

    else{
        return 0;
    }
}

int lista_cheia(Pilha p){

    if(p->topo == max - 1){
        return 1;
    }

    else{
        return 0;
    }
}


int push(Pilha p, int elem){

    if(p == NULL || lista_cheia(p) == 1){
        return 0;
    }

    p->topo++;
    p->vetor[p->topo] = elem;
    return 1;
}


int pop(Pilha p,int *elem){

    if(p == NULL || lista_vazia(p) == 1){
        return 0;
    }

    *elem = p->vetor[p->topo];
    p->topo--;
    return 1;
}


int le_topo(Pilha p, int *elem){
    if(p == NULL || lista_vazia(p) == 1){
        return 0;
    }
    
    *elem = p->vetor[p->topo];
    return 1;

}