#include <stdio.h>
#include <stdlib.h>

int main()
{
        // ACESSAR UM VALOR EM UM ENDEREÇO DE MEMÓRIA

    int x = 10;

    // Obtem-se o endereço de memória de 'x'

    printf("%x\n", &x);

    // Primeiro, faz-se o casting do endereço para um ponteiro do tipo que se quer acessar
    // (int*)ENDEREÇO
    // Depois, se acessa o valor que está armazenado naquele endereço
    // *(int*)ENDEREÇO

    printf("%d", *((int*)0x61ff14));

    // A função 'malloc' retorna um endereço de memória e geralmente é utilizada com ponteiros,/ assim:

    int *u = malloc(sizeof(int));
    *u = 5;
    printf("\n%d", *u);
    free(u);

    // Nesse último caso, não foi necessário usar casting para o endereço hexadecimal retornado por 'malloc',
    // pois o tipo de dado do ponteiro foi definido na declaração. Entretanto, se o ponteiro for genérico:

    void *p = malloc(sizeof(int));
    *(int*)p = 18;
    printf("\n%d", *(int*)p);
    free(p);

    // Ponteiros armazenam endereços de memória.

    int *g, *h, l = 3;

    g = &l;
    h = g;

    printf("\n%p", g);
    printf("\n%p", h);

}
