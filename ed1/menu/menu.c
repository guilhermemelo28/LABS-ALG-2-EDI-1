//Nesse arquivo esta a implementação das funções
#include<stdio.h>
#include<stdlib.h>
#include "menu.h"

#define max 10
struct lista
{
    int vet[max];
    int fim;
};

Lista cria_lista(){
    Lista lst;
    lst = (Lista) malloc(sizeof(struct lista));

    if(lst != NULL){
        lst->fim = 0; //FIM EH A PRIMEIRA POSICAO LIVRE!
    }

    return lst;
}
//Recebe ponteiro para lista
int lista_vazia(Lista lst){
    if(lst->fim == 0){
        return 1; // lista vazia
    }
    else 
        return 0; // lista nao vazia
}

//Recebe ponteiro para lista
int lista_cheia(Lista lst){
    if(lst->fim == max){ //Fim chegou no final do vetor, logo a lista esta cheia 
        return 1; // lista cheia
    }

    else
        return 0; // lista nao cheia
}

int insere_elem(Lista lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1){
        return 0;
    }
    lst->vet[lst->fim] = elem;
    lst->fim++;
    return 1;
}

int insere_ord(Lista lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1 ){
        return 0; //falha
    }

    if(lista_vazia(lst) == 1 || elem >= lst->vet[lst->fim-1]){
        lst->vet[lst->fim] = elem;
    }

    else{
        int i, aux = 0;

        while(elem >= lst->vet[aux]){ //Percorre
            aux++;
        }
        for(i = lst->fim; i > aux; i--){ // Descoloca
            lst->vet[i] =  lst->vet[i-1];
        }
        lst->vet[aux] = elem; // Insere o elemento;
        
    }

    lst->fim++;
    return 1; //sucesso
}


