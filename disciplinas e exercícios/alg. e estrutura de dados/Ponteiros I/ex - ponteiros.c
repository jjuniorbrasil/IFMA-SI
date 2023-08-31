/*

1) Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e exiba o
maior endere�o.

2) Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do teclado. Em
seguida, compare seus endere�os e exiba o conte�do do maior endere�o.

3) Crie uma fun��o que receba dois par�metros: um vetor e um valor do mesmo tipo do vetor. A
fun��o dever� preencher os elementos de vetor com esse valor. N�o utilize �ndices para
percorrer o vetor, apenas aritm�tica de ponteiros.

4) Crie uma fun��o que receba como par�metro um vetor e o imprima. N�o utilize �ndices para
percorrer o vetor, apenas aritm�tica de ponteiros.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void function1(st, v)
{
    char *p = st;

        for (int x = 0; x < 10; x++)
    {
                do {v = rand()%91;} while (v < 65);
                *p = v;
                printf("%c", *p);
                p++;
    }
    printf("\n\n");

}

void ex1()
{
    int x, y, *p1, *p2;

    srand(time(0));

    x = rand();
    y = rand();
    p1 = &x;
    p2 = &y;

        if (p1 > p2)
        {
            printf("Endere�o de p1: %p. (valor em *p1: %d)", p1, x);
        }
        else
        {
            printf("Endere�o de p2: %p. (valor em *p2: %d)", p2, y);
        }

    printf("\n\n");
    main();
}

void ex2()
{
    int x, y, *p1 = &x, *p2 = &y, resp;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    if (p1 > p2)
    {
        printf("\nO ponteiro 'p1' est� numa posi��o acima de 'p2' e seu conte�do � '%d'. (endere�o de mem�ria: %p)\n", *p1, p1);
    }
    else if (p1 == p2)
    {
        printf("\nO ponteiro 'p1' est� apontando para a posi��o de 'p2' e seu conte�do � '%d'. (endere�o de mem�ria: %p)\n", *p2, p2);
    }
    else
    {
        printf("\nO ponteiro 'p2' est� numa posi��o acima de 'p1' e seu conte�do � '%d'. (endere�o de mem�ria: %p)\n", *p2, p2);
    }

    printf("\n\n");
    main();
}

void ex3()
{
    char string[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};


        function1(string, 'x'); // 'x' usado apenas pra cumprir com o enunciado.

    main();
}

void ex4()
{
        // � o exerc�cio 3.

    ex3();

    printf("\n\n");
    main();
}

void main()
{
    int op;
    setlocale(LC_ALL, "Portuguese");

    printf("Selecione o exerc�cio: ");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
            printf("\n");
            printf("Exerc�cio 1: \n\n");
            ex1();
        break;

        case 2:
            printf("\n");
            printf("Exerc�cio 2: \n\n");
            ex2();
        break;

        case 3:
            printf("\n");
            printf("Exerc�cio 3: \n\n");
            ex3();
        break;

        case 4:
            printf("\n");
            printf("Exerc�cio 4: \n\n");
            ex4();
        break;

        default:
            printf("\n");
            printf("Exerc�cio inexistente, escolha novamente. (1-4)\n");
            main();
        break;
    }
}
