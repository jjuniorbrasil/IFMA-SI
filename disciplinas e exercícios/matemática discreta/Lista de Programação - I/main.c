/*

Disciplina: Matem�tica Discreta
Professor: Raimundo Osvaldo Vieira
Conte�do: Endorrela��es, Rela��es de Equival�ncia e Ordena��o Parcial

Aluno: Jos� Carlos Chaves Brasil J�nior

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include "conjuntos.h"

void exercicio6() {
    int n = 0;

    printf("N�mero de elementos em 'S': ");
    scanf("%d", &n);
    limpaTela();

    Conjunto *con = criarConjunto(n);
    MatrizR *m = criarMatrizR(con);
    relacionarPares(con, m);

    limpaTela();
    exibirMatrizR(m);
    printf("\n");
    ordenarPoset(m);

    // Liberar mem�ria.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void exercicio5() {
    int n = 0;

    printf("N�mero de elementos em 'S': ");
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

    // Liberar mem�ria.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void exercicio4() {
    int n = 0;

    printf("N�mero de elementos em 'S': ");
    scanf("%d", &n);
    limpaTela();

    Conjunto *con = criarConjunto(n);
    MatrizR *m = criarMatrizR(con);
    relacionarPares(con, m);

    limpaTela();
    exibirMatrizR(m);
    printf("\n");

    printf("\n\nConsultar classe de equival�ncia do elemento: ");
    scanf("%d", &n);
    printf("\n");
    classeEquivalenciaMatrizR(n, m);
    printf("\n");

    // Liberar mem�ria.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void exercicio3() {
    int n = 0;

    printf("N�mero de elementos em 'S': ");
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

    // Liberar mem�ria.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void exercicio2() {
    int n = 0;

    printf("N�mero de elementos em 'S': ");
    scanf("%d", &n);
    limpaTela();

    Conjunto *con = criarConjunto(n);
    MatrizR *m = criarMatrizR(con);
    relacionarPares(con, m);

    limpaTela();
    exibirMatrizR(m);
    printf("\n");
    reflexivaMatrizR(m);                    // Exibe se a matriz rela��o � reflexiva ou irreflexiva.
    printf("\n");

    // Liberar mem�ria.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void exercicio1() {
    int n = 0;

    printf("N�mero de elementos em 'S': ");
    scanf("%d", &n);
    limpaTela();

    Conjunto *con = criarConjunto(n);    // Conjunto com n�mero de elementos especificado.
    MatrizR *m = criarMatrizR(con);       // Matriz de rela��es entre elementos criada a partir de um conjunto.
    relacionarPares(con, m);               // Relaciona pares de elementos utilizando um conjunto e uma matriz criada.

    limpaTela();
    exibirMatrizR(m);                      // Exibe a matriz no console.
    relacaoMatrizR(m);                      // Exibe a rela��o da matriz relacional bin�ria.
    printf("\n");

    // Liberar mem�ria.
    liberarConjunto(con);
    liberarMatrizR(m);
    finalizacao();
}

void limpaTela() {
    system("cls");
}

void menuPrincipal() {
    printf("Lista de Programa��o I - Matem�tica Discreta - 2� Per�odo S.I. - IFMA-MTC\n"
           "Endorrela��es, Rela��es de Equival�ncia e Ordena��o Parcial\n"
           "Jos� Carlos Chaves Brasil J�nior - Matr�cula 20231SI0003 - Prof. Raimundo Osvaldo Vieira\n"
           "\n [1] Determinar tipo de rela��o"
           "\n [2] Determinar se a rela��o � reflexiva e/ou irreflexiva."
           "\n [3] Determinar se a rela��o � sim�trica e/ou antissim�trica."
           "\n [4] Encontrar a respectiva classe de equival�ncia."
           "\n [5] Determinar seus elementos minimais e maximais."
           "\n [6] Encontre uma ordem total compat�vel, usando ordena��o topol�gica."
           "\n\nSelecione o exerc�cio: ");
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
