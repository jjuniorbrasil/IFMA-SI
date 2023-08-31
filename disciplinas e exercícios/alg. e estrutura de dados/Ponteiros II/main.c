/*
        Aluno: José Carlos Chaves Brasil Júnior - Matrícula: 20231SI0003
            Curso: Sistemas de Informação - Período: 2º - IFMA Monte Castelo
                Disciplina: Algoritmos e Estruturas de Dados
                    Professor: Dr. Omar Andres Carmona Cortes
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define EXT 3

float menorv(vetor) {     // Função que retorna o menor valor de um vetor

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

void ex1() {            // Exercício 1

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

    printf("Nesse caso, o ponteiro '*p', de tipo 'int', não foi inicializado com um endereço e o valor '3'\n"
           "foi atribuído à variável inexistente no local de memória que '*p' deveria apontar. \n"
           "Uma solução seria apontá-lo para a variável 'b' ou atribuir um valor NULL ao endereço armazenado.\n\n");

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
           printf("Fazendo com que '*p' aponte para 'b', nesse último caso, o valor printado seria '%d'.\n\n", b);

           retornalista();
}

void ex2() {            // Exercício 2

    printf("Faça uma função que receba um vetor e devolva o menor valor. O vetor deve ser\npercorrido usando operações aritméticas nos endereços.\n\n");

    float V[EXT], menor;

    for (int i = 0; i < EXT; i++) // Loop para atribuir valores ao vetor e apresentá-lo no console.
        {
            V[i] = rand()%51; printf("V[%d] = %.f\n", i, V[i]);
        }

    menor = menorv(V);
    printf("\n\n Menor valor: '%.f'.\n\n", menor);

    retornalista();
}

void ex3() {            // Exercício 3

    printf("Crie um programa que use a função anterior, armazene seu valor em um ponteiro\ngenérico e imprima o valor devolvido.\n\n");

    float V2[EXT], menor;
    void *p = &menor;

    for (int i = 0; i < EXT; i++) // Loop para atribuir valores ao vetor e apresentá-lo no console.
        {
            V2[i] = rand()%51; printf("V[%d] = %.f\n", i, V2[i]);
        }


    *(float *)p = menorv(V2);
    printf("\n\n Menor valor: '%.f'.\n\n", *(float *)p);

    retornalista();
}

void ex4() {            // Exercício 4
    printf("Usando a função criada na questão 2, crie um programa que receba três notas de um\naluno e se a menor delas for inferior a 5.0, imprima que o aluno precisa fazer reposição,\ncaso contrário imprima “Aprovado”. Todas as variáveis devem ser ponteiros.\n\n");

    float N[EXT] = {10.0, 7.8, 4.4}, menor[1], *n = menor;

    *n = menorv(N);

    printf("Notas: %.2f - %.2f - %.2f | Menor nota: %.2f\n\n", N[0], N[1], N[2], *n);

    if (*n < 5.0) {printf("\n Aluno precisa fazer reposição. \n\n");} else {printf("\n\nAprovado!\n\n");}

    retornalista();

}

void retornalista() {   // Dá a opção de retornar à lista de exercícios ou finalizar o programa

    int opl;

    printf("[1] Retornar para lista de exercícios.\n"
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
            printf("Opção inválida.\n\n");
            retornalista();
        break;
        }

}

void selop() {          // Switch para escolher qual exercício deverá ser exibido

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
            printf("Opção inválida, escolha novamente.\n");
            selop();
        break;

    }

}

void cabecalho() {      // Menu inicial

    printf("Aluno: José Carlos Chaves Brasil Júnior - Matrícula: 20231SI0003\n");
    printf("Curso: Sistemas de Informação - 2º Período - IFMA Monte Castelo\n");
    printf("Disciplina: Algoritmos e Estruturas de Dados\n");
    printf("Professor: Dr. Omar Andres Carmona Cortes\n\n");
    printf("======= Exercícios de Ponteiros 09/08 ======\n\n");
    printf("[1] Dado o programa a seguir, verifique qual seu erro e corrija.\n\n");
    printf("[2] Faça uma função que receba um vetor e devolva o menor valor. O vetor deve ser \npercorrido usando operações aritméticas nos endereços.\n\n");
    printf("[3] Crie um programa que use a função anterior, armazene seu valor em um ponteiro\ngenérico e imprima o valor devolvido.\n\n");
    printf("[4] Usando a função criada na questão 2, crie um programa que receba três notas de um\naluno e se a menor delas for inferior a 5.0, imprima que o aluno precisa fazer reposição, \ncaso contrário imprima “Aprovado”. Todas as variáveis devem ser ponteiros.\n\n");
    printf("Escolha a opção: ");
    selop();

}

int main() {

    srand(time(0));
    setlocale(LC_ALL, "Portuguese");
    cabecalho();

}
