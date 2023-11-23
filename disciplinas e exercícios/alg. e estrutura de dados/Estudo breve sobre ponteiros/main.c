#include <stdio.h>
#include <stdlib.h>

int main()
{
        // ACESSAR UM VALOR EM UM ENDERE�O DE MEM�RIA

    int x = 10;

    // Obtem-se o endere�o de mem�ria de 'x'

    printf("%x\n", &x);

    // Primeiro, faz-se o casting do endere�o para um ponteiro do tipo que se quer acessar
    // (int*)ENDERE�O
    // Depois, se acessa o valor que est� armazenado naquele endere�o
    // *(int*)ENDERE�O

    printf("%d", *((int*)0x61ff14));

    // A fun��o 'malloc' retorna um endere�o de mem�ria e geralmente � utilizada com ponteiros,/ assim:

    int *u = malloc(sizeof(int));
    *u = 5;
    printf("\n%d", *u);
    free(u);

    // Nesse �ltimo caso, n�o foi necess�rio usar casting para o endere�o hexadecimal retornado por 'malloc',
    // pois o tipo de dado do ponteiro foi definido na declara��o. Entretanto, se o ponteiro for gen�rico:

    void *p = malloc(sizeof(int));
    *(int*)p = 18;
    printf("\n%d", *(int*)p);
    free(p);

    // Ponteiros armazenam endere�os de mem�ria.

    int *g, *h, l = 3;

    g = &l;
    h = g;

    printf("\n%p", g);
    printf("\n%p", h);

}
