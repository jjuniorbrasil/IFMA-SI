#include <stdio.h>
#include <stdlib.h>
#include "PilhaDinamica.h"

struct no{
    struct aluno dados;
    struct no *prox;
};
typedef struct no No;

Pilha* criar_pilha(){
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL)
        *pi = NULL;
    return pi;
}

void liberar_pilha(Pilha *pi){
    if(pi != NULL){
        No* no;
        while((*pi) != NULL){
            no = *pi;
            *pi = (*pi)->prox;
            free(no);
        }
        free(pi);
    }
}

int tamanho_pilha(Pilha *pi){
    if (pi == NULL)
        return 0;
    int cont = 0;
    No* no = *pi;
    while(no != NULL)
    {
        cont++;
        no = no->prox;
    }
    return cont;
}

int pilha_cheia(Pilha *pi){
    return 0;
}

int pilha_vazia(Pilha* pi){
    if (pi == NULL)
        return 1;
    if(*pi == NULL)
        return 1;
    return 0;
}

int inserir_pilha(Pilha* pi, struct aluno al){
    if(pi==NULL)
        return 0;
    No* no;
    no = (No*) malloc(sizeof(No));
    if (no == NULL)
        return 0;
    no->dados = al;
    no->prox = (*pi);
    *pi = no;
    return 1;
}

int remover_pilha(Pilha* pi){
    if (pi == NULL)
        return 0;
    if((*pi) == NULL)
        return 0;
    No *no = *pi;
    *pi = no->prox;
    free(no);
    return 1;
}

int acessar_topo_pilha(Pilha *pi, struct aluno *al){
    if(pi == NULL)
        return 0;
    if((*pi) == NULL)
        return 0;
    *al = (*pi)->dados;
    return 1;
}
