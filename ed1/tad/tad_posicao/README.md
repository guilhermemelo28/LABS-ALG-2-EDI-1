# Especificação do TAD:
## TAD: PONTO

Dados: Ponto refere-se a um ponto no espaço bi-dimensional, onde o ponto possui duas coordenadas
x (eixo das abscissas) e y (eixo das ordenadas) no espaço do conjunto dos números reais a quadrado.
Lista de operações: criar_ponto, distancia_pto e liberar_ponto.

### OPERAÇÕES:

1- criar_ponto:

Entrada: Recebe dois endereços de números inteiros;
Pré-Condição: Necessário verificar se a alocação de memória foi executada com sucesso;
Processo: Cria um ponteiro do tipo ponto, verifica se é possível alocar a memória, e atribui o valor das coordenadas x e y de acordo com a entrada.
Saída: Nenhuma.
Pós-Condição: Retorna um ponteiro para uma variável do tipo ponto.

2- distancia_pto:

Entrada: Recebe dois ponteiros do tipo ponto.
Pré-Condição: Necessário verificar qual dos ponteiros possuem o maior valor para x e para y.
Processo:Faz a distância entre a maior posição x/y menos a menor posição x/y. Depois disso calcula a distância entre os pontos
usando a fórmula: distância = raiz quadradade de ((distância entre x do ponto1 e ponto2) ao quadrado + (distância entre o y do ponto 1 e ponto 2)).
Saída: Retorna a distância entre os pontos.
Pós-Condição: Nenhuma.

3- liberar_ponto:
Entrada: Recebe ponteiro de ponteiro para uma variável do tipo ponto.
Pré-Condição: Nenhuma.
Processo: Libera a memória alocada e limpa o ponteiro para ponto.
Saída: Nenhuma.
Pós-Condição:Libera a memória alocada e limpa o ponteiro para ponto.