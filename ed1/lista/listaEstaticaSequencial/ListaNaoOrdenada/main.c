#include<stdio.h>
#include "menu.h"

int main(){
    Lista L;
    int elem,opcao;
    do{
    printf("Escolha a opção que voce deseja realizar:\n");
    printf("1- Criar Lista\n");
    printf("2- Adicionar Elemento\n");
    printf("3- Remover Elemento\n");
    printf("4- Imprimir Lista\n");
    printf("5- Sair\n");
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        L = cria_lista();
        if(L == NULL)
        {
            printf("Nao foi possivel criar a lista!\n");
        }
        else{
            printf("Lista criada com sucesso!\n");
        }
        break;
    
        case 2:
            printf("Digite o elemento que voce deseja adicionar:");
            scanf("%d",&elem);
            insere_elem(L,elem);
            if(insere_elem == 0){
                printf("Erro ao adicionar o elemento !\n");
            }
            else{
                printf("Elemento adicionado com sucesso!\n");
            }
            break;
        
        case 3:
            printf("Digite o elemento que voce deseja remover:");
            scanf("%d",&elem);
            remove_elem(L,elem);
            break;

            case 4:
                printf("A lista eh:\n");
                imprimeLista(L);
                break;

    default:
        break;
    }    
    
    }while(opcao != 5);

}