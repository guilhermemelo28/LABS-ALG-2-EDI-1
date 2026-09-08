#include <stdio.h>
#include "posicao.h"

int main()
{
    ponto *p1, *p2;
    double x,y;

    printf("Digite as coordenadas x e y do primeiro ponto:\n");
    scanf("%lf %lf",&x, &y);

    p1 = criar_ponto(&x,&y);

    printf("Digite as coordenadas x e y do segundo ponto:\n");
    scanf("%lf %lf",&x, &y);

    p2 = criar_ponto(&x,&y);

    if(p1 == NULL || p2 == NULL) //Verificando se foi possivel alocar a memoria
    {
        printf("Nao foi possivel alocar memoria");
        return 1;
    }

    printf("A distancia total entre os pontos eh de: %.2lf",distancia_pto(p1,p2));
    liberar_ponto(&p1);
    liberar_ponto(&p2);

    return 0;
}