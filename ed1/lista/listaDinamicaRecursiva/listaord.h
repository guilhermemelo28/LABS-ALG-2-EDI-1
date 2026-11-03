typedef struct no *lista;
lista crialista();
int listavazia(lista lst);
int insereord(lista *lst, int elem);
int removeord(lista *lst, int elem);
void imprimelista(lista lst);
void liberalista(lista *lst);