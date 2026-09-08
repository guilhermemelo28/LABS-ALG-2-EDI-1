#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"posicao.h"

struct pontos{
    double x;
    double y;
};

ponto* criar_ponto(double *xis, double *yi)
{
    ponto *p;
    p = (ponto*)  malloc(sizeof(ponto));
    if(p == NULL)
    {
        return NULL;
    }
    p->x = *xis; //pega o valor que esta guardado em xis
    p->y = *yi; // pega o valor que esta guardado em yi

    return p; //retorna o ponteiro para um ponto
}

double distancia_pto(ponto *p1, ponto *p2)
{
    
    double disx, disy, distotal;

    //temos que verificar qual eh o maior, pois nao existe medida negativa
    if(p1->x >= p2->x)
        {
            disx = p1->x - p2->x;
        }
    else
        {
            disx = p2->x - p1->x;
        }

        if(p1->y >= p2->y)
        {
            disy = p1->y - p2->y;
        }
    else
        {
            disy = p2->y - p1->y;
        }
    
        distotal = sqrt((pow(disx,2)) +(pow(disy,2))); //calcula a distancia 
        return distotal;
}

void liberar_ponto(ponto **p){
    free(p); //libera memoria alocada
    p = NULL;//limpa o ponteiro para ponto
}


