typedef struct pilha *Pilha;
Pilha cria_lista();
int lista_vazia(Pilha p);
int lista_cheia(Pilha p);
int push(Pilha p, int elem);
int pop(Pilha p,int *elem);
int le_topo(Pilha p, int *elem);