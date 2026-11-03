#include "listaord.h"
#include <stdio.h>
#include <stdlib.h>

struct no
{
    int info;
    struct no *prox;
};

lista crialista()
{
    return NULL;
}

int listavazia(lista lst)
{

    if (lst == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int insereord(lista *lst, int elem)
{
    if (listavazia(*lst) == 1 || elem <= (*lst)->info)
    {
        lista n = (lista)malloc(sizeof(struct no));

        if (lst == NULL)
        {
            return 0;
        }
        n->info = elem ;
        n->prox = *lst;
        *lst = n;
        return 1;
    }
    else
    {
        int r = insereord(&((*lst)->prox), elem);
        return r;
    }
}

int removeord(lista *lst, int elem){
     if (listavazia(*lst) == 1 || elem < (*lst)->info){
        return 0;
     }
     else{
        if(elem == (*lst)->info){
            lista aux =*lst;
            *lst =aux->prox;
            free (aux);
            return 1;
        }
        else{
            int r = removeord(&((*lst)->prox),elem);
            return r;
        }
     }
}
void imprimelista(lista lst)
{
    if (listavazia(lst) == 1)
    {
        return;
    }
    else
    {
        printf("%d -> ", lst->info);
        imprimelista(lst->prox);
    }
}

void liberalista(lista *lst)
{
    if (listavazia(*lst) == 1)
    {
        printf("Lista ta vazia");
    }
    else
    {
        lista aux = *lst;
        *lst = (*lst)->prox;
        free(aux);
        liberalista(lst);
    }
}
