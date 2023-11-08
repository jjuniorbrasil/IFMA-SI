#ifndef CONJUNTOS_H_INCLUDED
#define CONJUNTOS_H_INCLUDED

typedef struct conjunto Conjunto;   // CONJUNTOS E MÉTODOS

Conjunto* criarConjunto (int nE);
int tamanhoConjunto(Conjunto *c);
int acessarElemento(int pos, Conjunto *c);
void liberarConjunto (Conjunto* c);

typedef struct matriz MatrizR;  // MATRIZES E MÉTODOS

MatrizR* criarMatrizR(Conjunto* c);
void relacionarPares(Conjunto* con, MatrizR* m);
void exibirMatrizR(MatrizR* m);
void relacaoMatrizR(MatrizR* m);
int reflexivaMatrizR(MatrizR* m);
int simetricaMatrizR(MatrizR* m);
int transitividadeMatrizR(MatrizR* m);
int relacaoEquivalenciaMatrizR(MatrizR* m);
void classeEquivalenciaMatrizR(int n, MatrizR* m);
void liberarMatrizR(MatrizR* m);
void testeMatrizR(MatrizR* m); // testa alguns parâmetros

int posetMatrizR(MatrizR* m);
void ordenarPoset(MatrizR* m);
void posetMaximais(MatrizR* m);
void posetMinimais(MatrizR* m);

int elevado(num, num2); // "pow()", praticamente

#endif // CONJUNTOS_H_INCLUDED
