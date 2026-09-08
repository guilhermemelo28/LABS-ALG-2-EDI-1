#include<stdio.h>
#include "racional.h"


int main()
{
    int num, den;
    racional *n1, *n2, *n3;

    n1 = generate(); n2 = generate(); // Estamos gerando dois numeros racionais

    if(n1 == NULL || n2 == NULL) //Verificando se foi possivel alocar a memoria
    {
        printf("Nao foi possivel alocar memoria");
        return 1;
    }

    printf("Digite o valor do numerador e do denominador do primeiro racional:\n");
    scanf("%d",&num); 
    scanf("%d",&den); //Atribuindo os valores 

    if(set_value(n1,num,den) == 0) 
    {
        printf("\n Falha ao preencher o primeiro racional\n");
        return -1; //Falha ao atribuir o valor
    }

    printf("Digite o valor do numerador e do denominador do segundo racional:\n");
    scanf("%d",&num); 
    scanf("%d",&den); //Atribuindo os valores 

    if(set_value(n2,num,den) == 0) 
    {
        printf("\n Falha ao preencher o segundo racional\n");
        return -1;//Falha ao atribuir o valor
    }

    n3 = sum(n1,n2); // Fazendo a soma

    if(n3 == NULL) //nao foi possivel fazer a soma
    {
        printf("\n Falha ao somar os dois valores\n");
        return -1;

    }

    if(get_value(n3,&num,&den) == 0)
    {
        printf("\nFalha ao recuperar o numerador e o denominador\n ");
        return -1;
    }

    printf("O resultado da soma eh:  Numeradores:%d. Denominadores: %d",num,den);
    delete(&n1); delete(&n2); delete(&n3);

    return 0;
}