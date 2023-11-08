/*

Disciplina: Matemática Discreta
Professor: Raimundo Osvaldo Vieira
Conteúdo: Endorrelações, Relações de Equivalência e Ordenação Parcial

Aluno: José Carlos Chaves Brasil Júnior

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include "conjuntos.h"

void exercicio6() {
    int n = 0;

    printf("Número de elementos em 'S': ");
    scanf("%d", &n);
    limpaTela();

    Conjunto *con = criarConjunto(n);
    MatrizR *m = criarMatrizR(con);
    relacionarPares(con, m);

    limpaTela();
    exibirMatrizR(m);
    printf("\n");
    ordenarPoset(m);

    // Liberar memória.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void exercicio5() {
    int n = 0;

    printf("Número de elementos em 'S': ");
    scanf("%d", &n);
    limpaTela();

    Conjunto *con = criarConjunto(n);
    MatrizR *m = criarMatrizR(con);
    relacionarPares(con, m);

    limpaTela();
    exibirMatrizR(m);
    printf("\n");
    posetMaximais(m);
    printf("\n");
    posetMinimais(m);
    printf("\n");

    // Liberar memória.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void exercicio4() {
    int n = 0;

    printf("Número de elementos em 'S': ");
    scanf("%d", &n);
    limpaTela();

    Conjunto *con = criarConjunto(n);
    MatrizR *m = criarMatrizR(con);
    relacionarPares(con, m);

    limpaTela();
    exibirMatrizR(m);
    printf("\n");

    printf("\n\nConsultar classe de equivalência do elemento: ");
    scanf("%d", &n);
    printf("\n");
    classeEquivalenciaMatrizR(n, m);
    printf("\n");

    // Liberar memória.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void exercicio3() {
    int n = 0;

    printf("Número de elementos em 'S': ");
    scanf("%d", &n);
    limpaTela();

    Conjunto *con = criarConjunto(n);
    MatrizR *m = criarMatrizR(con);
    relacionarPares(con, m);

    limpaTela();
    exibirMatrizR(m);
    printf("\n");
    simetricaMatrizR(m);
    printf("\n");

    // Liberar memória.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void exercicio2() {
    int n = 0;

    printf("Número de elementos em 'S': ");
    scanf("%d", &n);
    limpaTela();

    Conjunto *con = criarConjunto(n);
    MatrizR *m = criarMatrizR(con);
    relacionarPares(con, m);

    limpaTela();
    exibirMatrizR(m);
    printf("\n");
    reflexivaMatrizR(m);                    // Exibe se a matriz relação é reflexiva ou irreflexiva.
    printf("\n");

    // Liberar memória.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void exercicio1() {
    int n = 0;

    printf("Número de elementos em 'S': ");
    scanf("%d", &n);
    limpaTela();

    Conjunto *con = criarConjunto(n);    // Conjunto com número de elementos especificado.
    MatrizR *m = criarMatrizR(con);       // Matriz de relações entre elementos criada a partir de um conjunto.
    relacionarPares(con, m);               // Relaciona pares de elementos utilizando um conjunto e uma matriz criada.

    limpaTela();
    exibirMatrizR(m);                      // Exibe a matriz no console.
    relacaoMatrizR(m);                      // Exibe a relação da matriz relacional binária.
    printf("\n");

    // Liberar memória.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void limpaTela() {
    system("cls");
}

void menuPrincipal() {
    printf("Lista de Programação I - Matemática Discreta - 2º Período S.I. - IFMA-MTC\n"
           "Endorrelações, Relações de Equivalência e Ordenação Parcial\n"
           "José Carlos Chaves Brasil Júnior - Matrícula 20231SI0003 - Prof. Raimundo Osvaldo Vieira\n"
           "\n [1] Determinar tipo de relação"
           "\n [2] Determinar se a relação é reflexiva e/ou irreflexiva."
           "\n [3] Determinar se a relação é simétrica e/ou antissimétrica."
           "\n [4] Encontrar a respectiva classe de equivalência."
           "\n [5] Determinar seus elementos minimais e maximais."
           "\n [6] Encontre uma ordem total compatível, usando ordenação topológica."
           "\n\nSelecione o exercício: ");
}

void finalizacao() {
    int x;
    printf("\nPressione qualquer tecla para sair.");
    x = getch();
};

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int c;

    menuPrincipal();
    scanf("%d", &c);
    limpaTela();

        switch (c)
        {
            case 1:
            exercicio1();
            break;

            case 2:
            exercicio2();
            break;

            case 3:
            exercicio3();
            break;

            case 4:
            exercicio4();
            break;

            case 5:
            exercicio5();
            break;

            case 6:
            exercicio6();
            break;

            default:
            main();
            break;
        };
}
