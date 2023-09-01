#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include "conjuntos.h"

typedef struct conjunto {
    int* elem;
    int tamarray;
};

typedef struct matriz {
    int l;
    int c;
    int **r;
};

Conjunto* criarConjunto (int nE) {

    int c[nE], cond = 1;
    if (nE > 500 || nE < 0) {
        printf("A operação falhou!");
        return NULL;
    } else {

    Conjunto* conj = (Conjunto*)malloc(sizeof(Conjunto));

    conj->elem = (int*)malloc(sizeof(int)*nE);
    conj->tamarray = nE;

        for (int x = 0; x < nE; x++)                // Loop que armazena elementos na lista de conjunto.
            {
                if (cond == 0)
                {
                x--;
                cond = 1;
                }

            printf("Leia o elemento '%d': ", x+1);
            scanf("%d", &(conj->elem[x]));
            c[x] = conj->elem[x];

                for (int y = 0; y < nE; y++)
                {
                    if ((conj->elem[x] == c[y]) && (x != y))
                    {
                    printf("Elemento inválido ou repetido!\n");
                    cond = 0;
                    }
                }

            }
        return conj;
    }
}

int tamanhoConjunto(Conjunto *c) {
    return (int)c->tamarray;
}

int acessarElemento(int pos, Conjunto *c) {
    if (pos >= 0) {
    return (int)c->elem[pos];
    } else {
    return 0;
    }
}

void liberarConjunto (Conjunto* c) {
    if (c != NULL)
        {
        free(c->elem);
        free(c);
    } else {
        printf("Falha na liberação do conjunto.");
    }
}

/*MatrizBin* criarMatrizBin(Conjunto* c) {
    if (c != NULL) {
    MatrizBin* m = (MatrizBin*)malloc(sizeof(MatrizBin));
    m->l = tamanhoConjunto(c);
    m->c = m->l;

        m->r = (int**)malloc(sizeof(int*)*tamanhoConjunto(c));
        for (int x = 0; x < m->l; x++)
        {
        m->r[x] = (int*)malloc(sizeof(int)*tamanhoConjunto(c));
        }
    return m;
    } else {printf("Conjunto inválido ou inexistente"); return NULL;}
}

void liberarMatrizBin(MatrizBin* m) {
    if (m != NULL)
    {
    for (int x = 0; x < m->l; x++)
    {free(m->r[x]);}
    free(m->r);
    free(m);
    } else {printf("Falha na liberação de memória da matriz.");}
}*/
