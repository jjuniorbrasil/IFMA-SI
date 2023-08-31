/*
        Aluno: Jos� Carlos Chaves Brasil J�nior - Matr�cula: 20231SI0003
            Curso: Sistemas de Informa��o - Per�odo: 2� - IFMA Monte Castelo
                Disciplina: Algoritmos e Estruturas de Dados
                    Professor: Dr. Omar Andres Carmona Cortes
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define EXT 3

float menorv(vetor) {     // Fun��o que retorna o menor valor de um vetor

        float *p = vetor, menor = 999999;

            for (int x = 0; x < EXT; x++)
                {
                    if (*p < menor)
                    {
                    menor = *p;
                    }
                    p++;
                }

        return menor;

}

void ex1() {            // Exerc�cio 1

    printf("Dado o programa a seguir, verifique qual seu erro e corrija:\n\n");

    printf("    int main ( void )       \n"
           "    {                       \n"
           "     int a, b, *p;          \n"
           "     a = 2;                  \n"
           "     *p = 3;                 \n"
           "     b = a + (*p);           \n"
           "     printf(\" %%d \", b);    \n"
           "     return 0;               \n"
           "    }                       \n\n");

    printf("Nesse caso, o ponteiro '*p', de tipo 'int', n�o foi inicializado com um endere�o e o valor '3'\n"
           "foi atribu�do � vari�vel inexistente no local de mem�ria que '*p' deveria apontar. \n"
           "Uma solu��o seria apont�-lo para a vari�vel 'b' ou atribuir um valor NULL ao endere�o armazenado.\n\n");

    printf("    int main ( void )       \n"
           "    {                       \n"
           "     int a, b, *p = &b;      \n"
           "     a = 2;                  \n"
           "     *p = 3;                 \n"
           "     b = a + (*p);           \n"
           "     printf(\" %%d \", b);   \n"
           "     return 0;               \n"
           "    }                       \n\n");

           int a, b, *p = &b;
           a = 2;
           *p = 3;
           b = a + (*p);
           printf("Fazendo com que '*p' aponte para 'b', nesse �ltimo caso, o valor printado seria '%d'.\n\n", b);

           retornalista();
}

void ex2() {            // Exerc�cio 2

    printf("Fa�a uma fun��o que receba um vetor e devolva o menor valor. O vetor deve ser\npercorrido usando opera��es aritm�ticas nos endere�os.\n\n");

    float V[EXT], menor;

    for (int i = 0; i < EXT; i++) // Loop para atribuir valores ao vetor e apresent�-lo no console.
        {
            V[i] = rand()%51; printf("V[%d] = %.f\n", i, V[i]);
        }

    menor = menorv(V);
    printf("\n\n Menor valor: '%.f'.\n\n", menor);

    retornalista();
}

void ex3() {            // Exerc�cio 3

    printf("Crie um programa que use a fun��o anterior, armazene seu valor em um ponteiro\ngen�rico e imprima o valor devolvido.\n\n");

    float V2[EXT], menor;
    void *p = &menor;

    for (int i = 0; i < EXT; i++) // Loop para atribuir valores ao vetor e apresent�-lo no console.
        {
            V2[i] = rand()%51; printf("V[%d] = %.f\n", i, V2[i]);
        }


    *(float *)p = menorv(V2);
    printf("\n\n Menor valor: '%.f'.\n\n", *(float *)p);

    retornalista();
}

void ex4() {            // Exerc�cio 4
    printf("Usando a fun��o criada na quest�o 2, crie um programa que receba tr�s notas de um\naluno e se a menor delas for inferior a 5.0, imprima que o aluno precisa fazer reposi��o,\ncaso contr�rio imprima �Aprovado�. Todas as vari�veis devem ser ponteiros.\n\n");

    float N[EXT] = {10.0, 7.8, 4.4}, menor[1], *n = menor;

    *n = menorv(N);

    printf("Notas: %.2f - %.2f - %.2f | Menor nota: %.2f\n\n", N[0], N[1], N[2], *n);

    if (*n < 5.0) {printf("\n Aluno precisa fazer reposi��o. \n\n");} else {printf("\n\nAprovado!\n\n");}

    retornalista();

}

void retornalista() {   // D� a op��o de retornar � lista de exerc�cios ou finalizar o programa

    int opl;

    printf("[1] Retornar para lista de exerc�cios.\n"
           "[2] Finalizar.\n");

    scanf("%d", &opl);

    switch (opl)
        {
        case 1:
            system("cls");
            main();
        break;

        case 2:
            system("cls");
            exit(0);
        break;

        default:
            system("cls");
            printf("Op��o inv�lida.\n\n");
            retornalista();
        break;
        }

}

void selop() {          // Switch para escolher qual exerc�cio dever� ser exibido

    int op;

    scanf("%d", &op);

    switch(op) {

        case 1:
            system("cls");
            ex1();
        break;

        case 2:
            system("cls");
            ex2();
        break;

        case 3:
            system("cls");
            ex3();
        break;

        case 4:
            system("cls");
            ex4();
        break;

        default:
            system("cls");
            printf("Op��o inv�lida, escolha novamente.\n");
            selop();
        break;

    }

}

void cabecalho() {      // Menu inicial

    printf("Aluno: Jos� Carlos Chaves Brasil J�nior - Matr�cula: 20231SI0003\n");
    printf("Curso: Sistemas de Informa��o - 2� Per�odo - IFMA Monte Castelo\n");
    printf("Disciplina: Algoritmos e Estruturas de Dados\n");
    printf("Professor: Dr. Omar Andres Carmona Cortes\n\n");
    printf("======= Exerc�cios de Ponteiros 09/08 ======\n\n");
    printf("[1] Dado o programa a seguir, verifique qual seu erro e corrija.\n\n");
    printf("[2] Fa�a uma fun��o que receba um vetor e devolva o menor valor. O vetor deve ser \npercorrido usando opera��es aritm�ticas nos endere�os.\n\n");
    printf("[3] Crie um programa que use a fun��o anterior, armazene seu valor em um ponteiro\ngen�rico e imprima o valor devolvido.\n\n");
    printf("[4] Usando a fun��o criada na quest�o 2, crie um programa que receba tr�s notas de um\naluno e se a menor delas for inferior a 5.0, imprima que o aluno precisa fazer reposi��o, \ncaso contr�rio imprima �Aprovado�. Todas as vari�veis devem ser ponteiros.\n\n");
    printf("Escolha a op��o: ");
    selop();

}

int main() {

    srand(time(0));
    setlocale(LC_ALL, "Portuguese");
    cabecalho();

}
