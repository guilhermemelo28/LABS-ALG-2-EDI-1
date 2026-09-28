#include<stdio.h>
#include "prod.h"

#define max 11
struct lista
{
    int vet[max];
    int fim;
    char nome[20];
    float preco;
    int volume;
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

int insere_nome(Lista lst, int elem){
    if(lst == NULL)
    {
        return 0;
    }
    if(lista_cheia(lst) == 1)
    {
        return -1;
    }
    lst->vet[lst->fim] = elem;
    lst->fim++;
    return 1;
}
int insere_volume(Lista lst, int elem){
    if(lst == NULL)
    {
        return 0;
    }
    if(lista_cheia(lst) == 1)
    {
        return -1;
    }
    lst->vet[lst->fim] = elem;
    lst->fim++;
    return 1;
}

int insere_preco(Lista lst, int elem){
    if(lst == NULL)
    {
        return 0;
    }
    if(lista_cheia(lst) == 1)
    {
        return -1;
    }
    lst->vet[lst->fim] = elem;
    lst->fim++;
    return 1;
}

int remove_elem(Lista lst, int elem){
    if(lst == NULL){
        return 0;
    }
    if(lista_vazia(lst) == 1){
        return -1;
    }

    int i, aux = 0;
    while(aux < lst->fim && lst->vet[aux] != elem){ //procurando o elemento 
        aux++;
    }
    if(aux == lst->fim){ //final da lista 
        return 0;
    }

    //Achou o elemento, agora vamos deslocar
    for(i = aux + 1; i < lst->fim; i++){
        lst->vet[i-1] = lst->vet[i];
        lst->fim--; //removemos o elemento e deixamos a posicao do elemento como a primeira posicao livre
        return 1;// elemento removido com sucesso     
    }
}

void imprimeLista(Lista lst){

    for(int i = 0; i < lst->fim; i++){
        printf("%d\n",lst->vet[i]);
    }
    printf("\n");
}