#include<stdio.h>
#include<stdlib.h>
#include "racional.h"

struct racionais{
    int numerador,denomiandor;
};
//Criando um ponteiro de racional
racional *  generate(){
    racional *p;
    p = (racional*)  malloc(sizeof(racional));
    return p;
}

int set_value(racional * p, int n, int d){
    if(p == NULL || d == 0)
    {
        return 0;// Nao foi possivel setar o valor
    }
    p->numerador = n; //Atribuindo o valor do numerador
    p->denomiandor = d; //Atribuindo o valor do denominador

    return 1; // Foi possivel setar o valor
}

int get_value(racional * p, int *n,int *d){
    if(p == NULL)
    {
        return 0;
    }
    *n = p->numerador; //Pegando o valor do numerador
    *d = p->denomiandor;// Pegando o valor do denominador
    return 1;
}

racional * sum(racional *r1, racional *r2)
{
    racional *r3;
    r3 = generate();

    if(r3 != NULL)
    {
        r3->numerador = (r1->numerador * r2->denomiandor) + (r2->numerador * r1->denomiandor);
        r3->denomiandor = (r1->denomiandor * r2->denomiandor); 
    }

    return r3; 
}

void delete( racional **p){
    free(*p); //Libera a memoria
    *p = NULL; //Limpa o ponteiro para racional

}