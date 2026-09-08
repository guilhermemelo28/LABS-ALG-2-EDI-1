typedef struct racionais racional;
racional *  generate();
int set_value(racional * p, int n, int d);
int get_value(racional * p, int *n,int *d);
racional * sum(racional *r1, racional *r2);
void delete( racional **p);