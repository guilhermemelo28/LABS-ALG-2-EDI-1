//Nesse arquivo esta os prototipos das funções, e na main.c o arquivo vai apenas utilizar, ou seja
//a main(main eh o arquivo cliente) nao entende como o codigo esta implementado, porem ele sabe q as funções existem 
//por causa do menu.c
typedef struct lista *Lista; //tipo Lista eh um ponteiro para lista 
Lista cria_lista();
int lista_vazia(Lista lst);
int lista_cheia(Lista lst);
int insere_ord(Lista lst, int elem);
int remove_ord(Lista lst, int elem);
void imprimeLista(Lista lst);
int verificaOrdenacao(Lista lst);
void Bubblesort (Lista lst);
void troca(int *vet,int j, int x);