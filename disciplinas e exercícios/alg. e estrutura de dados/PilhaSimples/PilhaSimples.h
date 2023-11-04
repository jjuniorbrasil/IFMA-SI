#ifndef PILHASIMPLES_H_INCLUDED
#define PILHASIMPLES_H_INCLUDED
#include "ListaSequencial.h"

typedef Lista Pilha;
Pilha* criar_pilha();
int remover_pilha(Pilha *pi);
int pilha_palindromo(Pilha *pi);
int inserir_pilha(Pilha *pi, struct aluno al);
int liberar_pilha(Pilha *pi);
void copiar_pilha(Pilha* pi, Pilha* pi2);
void imprimir_pilha (Pilha* pi);

#endif // PILHASIMPLES_H_INCLUDED
