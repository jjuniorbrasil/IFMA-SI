/*

1) Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o
maior endereço.

2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em
seguida, compare seus endereços e exiba o conteúdo do maior endereço.

3) Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor. A
função deverá preencher os elementos de vetor com esse valor. Não utilize índices para
percorrer o vetor, apenas aritmética de ponteiros.

4) Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize índices para
percorrer o vetor, apenas aritmética de ponteiros.

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
            printf("Endereço de p1: %p. (valor em *p1: %d)", p1, x);
        }
        else
        {
            printf("Endereço de p2: %p. (valor em *p2: %d)", p2, y);
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
        printf("\nO ponteiro 'p1' está numa posição acima de 'p2' e seu conteúdo é '%d'. (endereço de memória: %p)\n", *p1, p1);
    }
    else if (p1 == p2)
    {
        printf("\nO ponteiro 'p1' está apontando para a posição de 'p2' e seu conteúdo é '%d'. (endereço de memória: %p)\n", *p2, p2);
    }
    else
    {
        printf("\nO ponteiro 'p2' está numa posição acima de 'p1' e seu conteúdo é '%d'. (endereço de memória: %p)\n", *p2, p2);
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
        // É o exercício 3.

    ex3();

    printf("\n\n");
    main();
}

void main()
{
    int op;
    setlocale(LC_ALL, "Portuguese");

    printf("Selecione o exercício: ");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
            printf("\n");
            printf("Exercício 1: \n\n");
            ex1();
        break;

        case 2:
            printf("\n");
            printf("Exercício 2: \n\n");
            ex2();
        break;

        case 3:
            printf("\n");
            printf("Exercício 3: \n\n");
            ex3();
        break;

        case 4:
            printf("\n");
            printf("Exercício 4: \n\n");
            ex4();
        break;

        default:
            printf("\n");
            printf("Exercício inexistente, escolha novamente. (1-4)\n");
            main();
        break;
    }
}
