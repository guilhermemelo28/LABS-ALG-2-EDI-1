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

int verificaOrdenacao(Lista lst)
{

    int i;
    for(i = 0; i < (lst->vet[lst->fim] - 1) ; i++)
    {
            if(lst->vet[i] > lst->vet[i + 1])
            {
                return 0;
            }     
    }
    return 1;
}

int insere_ord(Lista lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1 ){
        return 0; //falha
    }

    int xi = 0;
    
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
    xi++;

    if( xi > 2 && (verificaOrdenacao(lst) == 0)){
        Bubblesort(lst);
    }
    return 1; //sucesso
}

void Bubblesort (Lista lst)
{
    for(int i = 0; i < (lst->vet[lst->fim] - 1); i++)// Quantas passagens vao ser feitas pelo vetor 
    {
        int trade = 0; // Indica se ocorreu alguma troca durante a passagem i 

        for(int j = 0; j < (lst->vet[lst->fim] - 1);j++) //Percorre o vetor comparando os elementos vizinhos , tam - 1 ignora os elementos 
        // que ja foram colocados corretamente no final 
        {
            if(lst->vet[j] > lst->vet[j + 1]) // compara o elemento atual com o proximo
            {
                //Como eles estao na ordem errada
                troca(lst->vet,j,j+1);//Aqui faz a troca 
                trade = 1; //Houve a troca 
            }
            
        }
        if(trade == 0) // Verifica se o vetor esta ordenado 
        {
            break;//Encerra o algoritmo 
        }
    }
}
void troca(int *vet,int j, int x)
{
    int aux = vet[j]; //Auxiliar criado para armezar o primeiro valor que queremos guardar 
    vet[j] = vet[x];//Troque entre O primeiro valor e o segundo valor, ou seja, O primeiro valor == segundo valor, mas perdemos o primeiro valor
    vet[x] = aux;//Agora aqui acontece a troca do Segundo valor com o primeiro valor(armezado pelo o auxiliar).
}


int remove_ord(Lista lst, int elem){
    if(lst == NULL || lista_vazia(lst) == 1||elem < lst->vet[0] || elem > lst->vet[lst->fim-1]){
        return 0;
    }
    int i, aux = 0;

    while(aux < lst->fim && lst->vet[aux] < elem){
        aux++;  
    }
    if(aux == lst->fim || lst->vet[aux] > elem){
        return -1; //O elemento nao esta na lista
    }

    for(i = aux + 1; i < lst->fim;i++){
        lst->vet[i-1] = lst->vet[i];
    }
        lst->fim--;
        return 1;
    
}

void imprimeLista(Lista lst){

    for(int i = 0; i < lst->fim; i++){
        printf("%d\n",lst->vet[i]);
    }
    printf("\n");
}

void libera_lista(Lista *lst)
{
    free(*lst);
    *lst = NULL; 
}
