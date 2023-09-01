#ifndef CONJUNTOS_H_INCLUDED
#define CONJUNTOS_H_INCLUDED

typedef struct conjunto Conjunto;

Conjunto* criarConjunto (int nE);
int tamanhoConjunto(Conjunto *c);
int acessarElemento(int pos, Conjunto *c);
void liberarConjunto (Conjunto* c);

/*typedef struct matriz MatrizBin;
MatrizBin* criarMatrizBin(Conjunto* c);*/

#endif // CONJUNTOS_H_INCLUDED
