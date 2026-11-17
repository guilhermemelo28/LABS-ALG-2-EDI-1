#include "lista.h"
#include <stdio.h>
#include <stdlib.h>


#define MAX 100

struct lista{
    int dados[MAX];
    int qtd;
};

Lista criarLista(){
    Lista lst;
    lst = (Lista) malloc(sizeof(struct lista));

    if(lst != NULL){
        lst->qtd = 0;
    }
    return lst;
}

int listaVazia(Lista lst){
    if(lst->qtd == 0){
        return 1;
    }
    else
    return 0;
}

int listacheia(Lista lst){
    if(lst->qtd == MAX){
        return 1;
    }
    else{
        return 0;
    }
}

int inserord(Lista lst, int elem){

    if(lst == NULL || listacheia(lst)){
        return 0;
    }
    if(listaVazia(lst) == 1|| elem >= lst->dados[lst->qtd - 1]){
        lst->dados[lst->qtd] = elem;
    }
    else{
        int i, aux = 0;

        while(elem >= lst->dados[aux]){
            aux++;
        }

        for( i = lst->qtd; i > aux; i--){
            lst->dados[i] = lst->dados[i-1]; 
        }
        lst->dados[aux] = elem;
        
    }
    lst->qtd++;
    return 1;
    
}



int aux = 0;
int elem;
while(!lista_vazia(lst)){
    lista_menor_elemento(lst,&elem);
    
    lista_inserir_posicao(&ord,aux,elem);
    aux++;
    
        lista_inserir_fim(&ord,elem);
    
    lista_remover_elemento(&lst,elem);
}




 