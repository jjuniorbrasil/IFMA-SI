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
    Conjunto* conj;
};

Conjunto* criarConjunto (int nE) {

    int c[nE], cond = 1;
    if (nE > 500 || nE < 0) {
        printf("A operação falhou! ");
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

MatrizR* criarMatrizR(Conjunto* c) {
    if (c != NULL) {
    MatrizR* m = (MatrizR*)malloc(sizeof(MatrizR));
    m->l = tamanhoConjunto(c);
    m->c = m->l;
    m->conj = c;

        m->r = (int**)malloc(sizeof(int*)*tamanhoConjunto(c));
        for (int x = 0; x < m->l; x++)
        {
        m->r[x] = (int*)malloc(sizeof(int)*tamanhoConjunto(c));
        }

        for (int x = 0; x < tamanhoConjunto(c); x++)
        {
            for (int y = 0; y < tamanhoConjunto(c); y++)
            {
                m->r[x][y] = 0;
            }
        }

    return m;
    } else {printf("Conjunto inválido ou inexistente."); return NULL;}
}

void exibirMatrizR(MatrizR* m) {
    printf("\n  ");
    for (int x = 0; x < m->c; x++)
        {
        printf("%3d", (m->conj)->elem[x]);
        }
                printf("\n%3---");
            for (int x = 0; x< m->c; x++){
                printf("---");
            }
                printf("\n");

    for (int x = 0; x < m->l; x++)
        {
            printf("%d | %1", (m->conj)->elem[x]);
            for (int y = 0; y < m->c; y++)
            {
                printf("%-3d", m->r[x][y]);
            }
            printf("\n");
        }
}

void relacionarPares(Conjunto* con, MatrizR* m) {
    int ta, tb, a, b, l, c, nP = 0, cond = 1;
    char q;
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

                if (((ta > 0 && tb > 0) || ((a == b) && (ta > 0))) && (m->r[l][c] < 1))
                {
                    q = NULL;
                    m->r[l][c] = 1;

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
}

void relacaoMatrizR(MatrizR* m) {

    int sL[m->l], sC[m->c], contz = 0;

                for (int x = 0; x < m->l; x++)
                {
                    sL[x] = 0;
                        for (int y = 0; y < m->c; y++)
                        {
                            if (m->r[x][y] >= 1)
                            {
                            sL[x]++;
                            } else {
                            contz++;
                            }
                        }
                }

                for (int x = 0; x < m->l; x++)
                {
                    sC[x] = 0;
                        for (int y = 0; y < m->c; y++)
                        {
                            if (m->r[y][x] >= 1)
                            {
                            sC[x]++;
                            }
                        }
                }

            printf("\n\nA relação é: ");
            int upn = 0, npu = 0;

                for (int x = 0; x < m->l; x++)
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

                if (contz < (m->l*m->c))
                {
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
                }
                else
                {
                printf(" inexistente.");
                }

                printf("\n");
}

int reflexivaMatrizR(MatrizR* m) {
    int cont = 0;
    if ((m->l == m->c) && (m->l > 0)) {
        for (int x = 0; x < m->l; x++){
            if (m->r[x][x] == 1)
            {
            cont++;
            }
        }
        if (cont == m->l){
            printf("A matriz é reflexiva!\n");
            return 1;
        }
        else if (cont == 0)
        {
            printf("A matriz é irreflexiva.\n");
            return -1;
        } else
        {
            printf("A matriz não é reflexiva e nem irreflexiva.\n");
            return 0;
        }
    }
    else
    {
    printf("Matriz inválida: utilize uma matriz quadrática.");
    return -2;
    }
}

int simetricaMatrizR(MatrizR* m) {
    int cont = 0;
    if ((m->l == m->c) && (m->l > 0)) {
        for (int x = 0; x < m->l; x++){
            for (int y = 0; y < m->c; y++) {
                if (m->r[x][y] != m->r[y][x])
                {
                    cont++;
                }
            }
        }
        if (cont == ((m->l*m->c)-(m->l))){
            printf("A matriz é antissimétrica!\n");
            return -1;
        }
        else if (cont == 0)
        {
            printf("A matriz é simétrica!\n");
            return 1;
        } else
        {
            printf("Não é simétrica, apesar de possuir simetrias em certos pares (Assimétrica).\n");
            return 0;
        }
    }
    else
    {
    printf("Matriz inválida: utilize uma matriz quadrática para essa função.");
    return -2;
    }
}

int transitividadeMatrizR(MatrizR* m) {

    if (m != NULL)
    {
        int cont = 0;

            for (int x = 0; x < m->l; x++){
                for (int y = 0; y < m->c; y++) {
                    if (m->r[x][y] > 0) {
                        for (int z = 0; z < m->l; z++) {

                            if ((m->r[y][z] > 0)) {

                                    if (!(m->r[x][z] > 0) && !(m->r[z][x] > 0)) {
                                    printf("A matriz não é transitiva.\n");
                                    return 0;
                                    }

                            }

                        }
                    }
                }
            }
                printf("A matriz é transitiva!\n");
                return 1;
    }
    else
    {
        printf("Matriz inválida! Impossível determinar transitividade.\n");
        return -1;
    }
}

int relacaoEquivalenciaMatrizR(MatrizR* m) {
    if (m != NULL)
    {
        if ((reflexivaMatrizR(m) == 1) && (simetricaMatrizR(m) == 1) && (transitividadeMatrizR(m) == 1))
        {
        printf("A matriz é uma relação de equivalência!\n");
        return 1;
        } else {
        printf("A matriz não representa uma relação de equivalência!\n");
        return 0;
        }
    }
    else
    {
    printf("Matriz inválida!\n");
    return -1;
    }
}

int posetMatrizR(MatrizR* m) {
        if (m != NULL)
    {
        if ((reflexivaMatrizR(m) == 1) && (simetricaMatrizR(m) == -1) && (transitividadeMatrizR(m) == 1))
        {
        printf("A matriz é uma ordenação parcial!\n");
        return 1;
        } else {
        printf("A matriz não é uma ordenação parcial!\n");
        return 0;
        }
    }
    else
    {
    printf("Matriz inválida!\n");
    return -1;
    }
}

void posetMaximais(MatrizR* m) {
    if (m != NULL) {
        if (posetMatrizR(m) == 1) {
            int s[m->l];

            for (int x = 0; x < m->l; x++) {
                s[x] = 0;
            }

            for (int x = 0; x < m->l; x++)
            {
                for (int y = 0; y < m->c; y++)
                {
                    if ((m->r[x][y] > 0) && (x != y)) {
                        s[x]++;
                    }
                }
            }

            printf("Elementos maximais:");

            for (int x = 0; x < m->l; x++) {
                if (s[x] == 0)
                {printf(" '%d'", (m->conj)->elem[x]);}
            }

            printf(".\n");

        } else {

        printf("A matriz não é uma ordenação parcial.");

        }
    } else {
    printf("Matriz inválida!\n");
    }
}

void posetMinimais(MatrizR* m) {
    if (m != NULL) {
        if (posetMatrizR(m) == 1) {
            int a[m->l], mA = 0;

            for (int x = 0; x < m->l; x++) {
                a[x] = 0;
            }

            for (int x = m->l-1; x >= 0; x--)
            {
                for (int y = m->l-1; y >= 0; y--)
                {
                    if ((m->r[x][y] > 0)) {
                        a[x]++;
                    }
                }
            }

            printf("Elementos minimais:");

            for (int x = 0; x < m->l; x++) {
                if (a[x] > mA)
                {mA = a[x];}
            }

            for (int x = m->l-1; x >= 0; x--) {
                //printf("a[%d]: %d (elemento: %d)\n", x, a[x], (m->conj)->elem[x]);
                if (a[x] == mA)
                {
                printf(" '%d'", (m->conj)->elem[x]);
                }
            }

            printf(".\n");

        } else {

        printf("A matriz não é uma ordenação parcial.");

        }
    } else {
    printf("Matriz inválida!\n");
    }
}

void ordenarPoset(MatrizR* m) {
        if (m != NULL) {
        if (posetMatrizR(m) == 1) {

            int sL[m->l], cont = m->l;

            for (int x = 0; x < m->l; x++) {
                sL[x] = 0;
            }

            for (int x = 0; x < m->l; x++) {
                for (int y = 0; y < m->c; y++) {
                    if (m->r[x][y] == 1) {
                        sL[x]++;
                    }
                }
            }

            printf("Ordenação topológica proposta: ");

            while (cont > 0) {
             for (int x = 0; x < m->l; x++) {
                if (sL[x] == cont)
                {
                    printf(" '%d'", (m->conj)->elem[x]);
                }
             }
             cont--;
            }

            printf(".\n");

            /*printf("SOMA DAS LINHAS DO [0] %d\n", sL[0]);
            printf("SOMA DAS LINHAS DO [1] %d\n", sL[1]);
            printf("SOMA DAS LINHAS DO [2] %d\n", sL[2]);
            printf("SOMA DAS LINHAS DO [3] %d\n", sL[3]);*/

        } else {
        printf("A matriz não é uma ordenação parcial.");
        }
    } else {
    printf("Matriz inválida!\n");
    }
}

void classeEquivalenciaMatrizR(int n, MatrizR* m) {
    int cont = 0;
    for (int x = 0; x < m->l; x++) {
        if (n == (m->conj)->elem[x]) {cont++;}
    }

    if ((m != NULL) || (cont < 1)) {

        if ((relacaoEquivalenciaMatrizR(m) == 1)) {
            for (int x = 0; x < m->l; x++)
            {
                if (n == (m->conj)->elem[x]) {
                    printf("Classe de equivalência: [%d]", (m->conj)->elem[x]);
                }
            }
        }
        else
        {
        printf("Erro.");
        }

    }
    else
    {
        printf("Matriz ou elemento inválidos!\n");
    }
}

void liberarMatrizR(MatrizR* m) {
    if (m != NULL)
    {
    for (int x = 0; x < m->l; x++)
    {free(m->r[x]);}
    free(m->r);
    free(m);
    } else {printf("Falha na liberação de memória da matriz.");}
}

void testeMatrizR(MatrizR* m) {

    //testes quanto aos endereços

    int x = 0;
    printf("X = 0\n");

    printf("(m) = %x\n", m);
    printf("(m->r) = %x\n", m->r);

    printf("(*m->r) = %x\n", (*m->r));
    printf("(**m->r) = %x\n", (**m->r));

    printf("*(m->r+1) = %x\n", *(m->r+1));
    printf("**(m->r+1) = %x\n", **(m->r+1));

    printf("*(*m->r) = %x\n", *(*m->r));
    printf("**(*m->r) = %x\n", **(m->r));

    printf("(m->r[0]) = %x\n", m->r[1]);
    printf("(m->r[0][0]) = %d\n", m->r[x][x]);
}

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
