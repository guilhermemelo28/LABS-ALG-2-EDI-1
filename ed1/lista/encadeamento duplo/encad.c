#include <stdio.h>
#include <stdlib.h>
#include "encad.h"

struct no{
    int info;
    struct no *ant; //temos o anterior pois agora temos uma ligação com todos da lista
    struct np *prox;
};

Lista crialista(){https://dadosabertos.saude.gov.br/dataset/pesquisa_saude
    return NULL;
}

int listavazia(Lista lst){
    if(lst == NULL){
        return 1;
    }
    return 0;
}

int insere(Lista *lst, int elem){
    Lista n = (Lista) malloc(sizeof(struct no));//aloca novo no
    if(n == NULL){return 0;} //verifica se o no foi alocado

    n->info = elem; //preencher campo info do novo no
    n->ant = NULL; //nao tem antecessor no novo no
    n->prox = *lst; //sucessor do novo no recebe o mesmo endereço da lista

    if(listavazia(*lst) == 0){ //ver se a lista NAO esta vazia
        (*lst)->ant = n; //fazer o antecessor do primeiro no apontar para o novo no
    }
    *lst = n; //faz a lista apontar para o novo no
    return 1; //SUCESSO
}

int remove(Lista *lst, int elem){
    if(listavazia(*lst)){return 0;}

    Lista aux = *lst;

    while(aux->prox != NULL && aux->info != elem)
    {

        if(aux->info != elem){return 0;}
        if(aux->prox != NULL){(aux)->prox->ant = aux->ant;}
        if(aux->ant != NULL){(aux)->ant->prox = aux->prox;}
        if(aux == *lst){*lst = aux->prox}
        free(aux);
        return 1;
    }

}
