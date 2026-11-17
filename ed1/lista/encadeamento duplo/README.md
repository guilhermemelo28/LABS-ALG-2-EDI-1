## Encadamento Duplo

Exemplo:
P       no1                 no2             no3
L--> |ant|info|prox| -> |ant|info|prox|-> |ant|info|prox|-> NULL
       |         |__ <____|        |__ <____|       
       |->NULL

no encad.c:
struct no{
    int info;
    struct no *ant; //temos o anterior pois agora temos uma ligação com todos da lista
    struct np *prox;
};

no encad.h:
typedef struct no *Lista;


# Vantagens:
    -A constrição das operações que necessitam percorrer a lista nas duas direções

    -Procurar por um elemento determinado elemento:
        -Analisa o campo INFO do no atual e nao do sucessor

    -Remoção utiliza UM UNICO PONTEIRO AUXILIAR(AUX)


# Desvantagens:
    -Usa muita memoria




# Funções

    1- Cria lista:

        Lista crialista()
        {
            return NULL;
        }
    
    2- Lista vazia:
     int listavazia(Lista lst)
    {
        if(lst == NULL){
            return 1;
        }
        else{
            return 0;
        }
    }

    3- Inserir elemento

        3A) TAD NAO ORDENADO:
            -Colocar no começo da lista para evitar percorrimento        
            Passos para lista vazia:
                I)Aloca novo no
                II)Preenche o campo info com a informação
                III)Faz n->aux e n->prox apontarem para NULL
                IV)Faz o ponteiro principal apontar para o novo no
            
            Passos para lista com elementos:
            I) ALoco novo no
            II) Preenche o campo info com a informação
            III) campo prox apontar para o primeiro no (n->prox = L)
            IV) Campo ant com NULL(n->ant = L->ant)
            V) Fazer o campo ant do primeiro no da lista apontar para o novo no (L->ant = n)
            VI) Fazer a Lista apontar para o novo no(L = n)




    4-Remover elemento:
        4A) TAD NAO ORDENADO:
            Li


