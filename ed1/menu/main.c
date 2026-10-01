#include<stdio.h>
#include "menu.h"

int main(){
    Lista L;
    int elemento;
    L = cria_lista;

    if(lista_vazia(L) == 1){
        printf("Sua lista esta vazia!");
    }
    // aqui esta recebendo uma copia de L, e L nao conhece oq esta dentro da struct lista, ou seja
    //L nao consegue acessar fim, apenas lst!

    if(lista_cheia(L) == 1){
        printf("Sua lista esta cheia");
    }
    scanf("%d",&elemento); 
    
    if(insere_elem(L,elemento) == 1)
    {
        printf("Elemento inserido com sucesso!");
    }
    
    

    
}
