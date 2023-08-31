#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <unistd.h>

cabecalho() {
    printf("Fundamentos da Programação de Computadores\n");
    printf("Professora: Salete\n");
    printf("Lista de Exercícios Extra\n\n");
    printf("[1] Número é divisível por '7' ou não.\n");
    printf("[2] Campeonato de futebol.\n");
    printf("[3] Área de um trapézio.\n");
    printf("[4] Aumento de preço de produto.\n");
    printf("[5] Aumento de salário.\n");
    printf("[6] Números pares entre '1000' e '2000'.\n");
    printf("[7] Programa que conta de '50' a '0'.\n");
    printf("[8] Quantas pessoas são +18.\n");
    printf("[9] Solicita um valor entre '0' e '10'.\n");
    printf("[10] Lê notas, dá a maior nota e a média da turma.\n");
    printf("[11] Tabuada de 'n'.\n");
    printf("[12] Pares, médias e ímpares.\n");
    printf("[13] /////////////.\n");
    printf("[14] /////////////.\n");
    printf("[15] Maior e menor valor apresentado.\n");
    printf("[16] Matriz simétrica.\n");
    printf("[17] Matriz 3x3 diagonal.\n");
    printf("[18] Soma das linhas de uma matriz.\n");
    printf("[19] Somando matrizes.\n");
    printf("[20] \n");
    printf("[21] \n");
    printf("[22] \n");
    printf("[23] \n");
    printf("[24] \n");
    printf("\n");
    printf("Escolha um exercício: ");
}

int main() {
    int op;

    setlocale(LC_ALL, "Portuguese");
    cabecalho();
    scanf("%d", &op);
    system("cls");

        switch (op) {
            case 1:
                ex1();
            break;

            case 2:
                ex2();
            break;

            case 3:
                ex3();
            break;

            case 4:
                ex4();
            break;

            case 5:
                ex5();
            break;

            case 6:
                ex6();
            break;

            case 7:
                ex7();
            break;

            case 8:
                ex8();
            break;

            case 9:
                ex9();
            break;

            case 10:
                ex10();
            break;

            case 11:
                ex11();
            break;

            case 12:
                ex12();
            break;

            case 15:
                ex15();
            break;

            case 16:
                ex16();
            break;

            case 17:
                ex17();
            break;

            case 18:
                ex18();
            break;

            case 19:
                ex19();
            break;

            case 20:
                ex20();
            break;
        }

    printf("\n");
    getch();
}
