typedef struct posicoes posicao;
posicao* criar_ponto(double *xis, double *yi);
double distancia_pto(posicao *p1, posicao *p2);
void liberar_ponto(posicao **p);


