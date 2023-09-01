#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include "conjuntos.h"

int elevado(num, num2) {        // Calcula um termo elevado a outro.
    int elev = 0;
        if (num2 != 0) {
            elev = num;
            for (int i = 1; i < num2; i++) {
            elev *= num;
            }
        } else {
            elev = 1;
        }
    return elev;
}

void exercicio2() {

}

void exercicio1() {

    int nE = 0, nP = 0, a, b, cond = 1, ta, tb, l, c;
    char q;

    printf("Número de elementos em 'S': ");
    scanf("%d", &nE);
    limpaTela();

    Conjunto *con = criarConjunto(nE);    // Conjunto com número de elementos especificado.
    int mb[nE][nE]; // Matriz quadrática que representará a relação
        for (int x = 0; x < nE; x++)
        {
            for (int y = 0; y < nE; y++)
            {
                mb[x][y] = 0;
            }
        }

    printf("\nListe os pares ordenados: \n");

        while ((nP < elevado(tamanhoConjunto(con), 2)) && (cond == 1)) // 'nE' ao quadrado é o número máximo de pares válidos possíveis dentro do conjunto de elementos.
            {
            ta = 0;
            tb = 0;
            printf("Par '%d': ", nP+1);
            scanf("%d %d", &a, &b);

            // Verifica se os elementos do par pertencem ao conjunto de elementos.

                for (int x = 0; x < tamanhoConjunto(con); x++)
                {

                    if (a == acessarElemento(x, con))
                    {
                    ta = 1;
                    l = x;
                    }

                    if (b == acessarElemento(x, con))
                    {
                    tb = 1;
                    c = x;
                    }

                }

            // Caso os elementos sejam válidos e já não houverem sido relacionados, o par é considerado na matriz.

                if (((ta > 0 && tb > 0) || ((a == b) && (ta > 0))) && (mb[l][c] < 1))
                {
                    q = NULL;
                    mb[l][c] = 1;

                    printf("\n\nPar adicionado! Adicionar outro par?"
                           "\n[S]/[Qualquer outra tecla para encerrar]\n\n");
                        q = getch();

                        if (!(q == 'S') && !(q == 's'))
                        {
                            cond = 0;
                        }
                    nP++;
                }
                else
                {
                    printf("\nPar inválido ou já utilizado!\n");
                }
            }

            int sL[nE], sC[nE];
            limpaTela();
            printf("\n");
                for (int x = 0; x < nE; x++)
                {
                    sL[x] = 0;
                        for (int y = 0; y < nE; y++)
                        {
                            printf("%3d ", mb[x][y]);
                            if (mb[x][y] >= 1)
                            {
                            sL[x]++;
                            }
                        }
                    printf("\n");
                }

                for (int x = 0; x < nE; x++)
                {
                    sC[x] = 0;
                        for (int y = 0; y < nE; y++)
                        {
                            if (mb[y][x] >= 1)
                            {
                            sC[x]++;
                            }
                        }
                    printf("\n");
                }

            printf("\n\nA relação é: ");
            int upn = 0, npu = 0;

                for (int x = 0; x < nE; x++)
                {
                    if (sL[x] > 1)
                    {
                    upn = 1;
                    }
                    if (sC[x] > 1)
                    {
                    npu = 1;
                    }
                }

                if (upn == 0 && npu == 0) {
                    printf(" um-para-um.");
                } else
                if (upn == 1 && npu == 0) {
                    printf(" um-para-vários.");
                } else
                if (upn == 0 && npu == 1) {
                    printf(" vários-para-um.");
                } else
                if (upn == 1 && npu == 1) {
                    printf(" vários-para-vários.");
                }


    printf("\n");
    liberarConjunto(con);
    getch();
    limpaTela();
    main();
}

void limpaTela() {
    system("cls");
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int c;

    printf("Lista de Programação I - Matemática Discreta - 2º Período S.I. - IFMA-MTC\n"
           "\n [1] Determinar tipo de relação"
           "\n [2] "
           "\n [3] "
           "\n [4] "
           "\n [5] "
           "\n [6] "
           "\n\nSelecione o exercício: ");
    scanf("%d", &c);
    limpaTela();

        switch (c)
        {
            case 1:
            exercicio1();
            break;

            default:
            main();
            break;
        };
}
