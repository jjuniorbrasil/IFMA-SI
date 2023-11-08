#include <stdio.h>
#include <stdlib.h>

int aleatorio(int *n) {
    // As variáveis 'a' e 'c' não são inicializadas. É utilizado lixo de memória em formato de inteiro.

    int a, c, r = 0;

    while (a > 100) a = a/10;
    while (c > 100) c = c/10;

    r = (a * (*n)) + c;

    if (r < 0) r = r*(-1);

    (*n) = r;

    return r;
}

int main()
{
    int seed = 987654321;

    printf("Sequência: \n");

    for (int c = 0; c < 9; c++)
    {
    printf("%d - ", aleatorio(&seed)%11); // Imprime um número aleatório de 0 a 10
    } printf("%d.", aleatorio(&seed)%11);
}
