#include "ListaSequencial.h"
#include <stdlib.h>
#include <stdio.h>

typedef Lista Pilha;

Pilha* criar_pilha(){
   return criar_lista();
}

int remover_pilha(Pilha *pi){
    return remover_lista_inicio(pi);
}

int inserir_pilha(Pilha *pi, struct aluno al){
    return inserir_lista_inicio(pi, al);
}

void liberar_pilha(Pilha *pi) {
    return liberar_lista(pi);
}

int pilha_palindromo(Pilha *pi) {
    return lista_palindromo(pi);
}

void copiar_pilha(Pilha* pi, Pilha* pi2) {
    copiar_lista(pi, pi2);
}

void imprimir_pilha (Pilha* pi) {
    imprimir_lista(pi);
}
