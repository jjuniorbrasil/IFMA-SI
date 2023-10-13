#include <stdio.h>
#include <stdlib.h>
#include "ListaDescritor.h"

struct no{
    struct aluno dados;
    struct no *prox;
};

typedef struct no No;

struct descritor{
    struct no *inicio;
    struct no *fim;
    int tamanho;
};

Lista* criar_lista(){
    Lista * li = (Lista*) malloc (sizeof(Lista));
    if (li != NULL){
        li->inicio = NULL;
        li->fim = NULL;
        li->tamanho = 0;
    }
    return li;
}

void liberar_lista(Lista *li){
    if(li != NULL){
        No *no;
        while((li->inicio) != NULL){
            no = li->inicio;
            li->inicio = li->inicio->prox;
            free(no);
        }
        free(li);
    }
}

int tamanho_lista(Lista* li){
    if(li == NULL)
        return 0;
    return li->tamanho;
}

int inserir_lista_inicio(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    No* no = (No*) malloc(sizeof(No));
    if(no == NULL)
        return 0;
    no->dados = al;
    no->prox = li->inicio;
    if(li->inicio == NULL)
        li->fim = no;
    li->inicio = no;
    li->tamanho++;
    return 1;
}

int inserir_lista_final(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL)
        return 0;
    no->dados = al;
    no->prox = NULL;
    if(li->inicio == NULL)
        li->inicio = no;
    else
        li->fim->prox = no;
    li->fim = no;
    li->tamanho++;
    return 1;
}

int inserir_lista_ordenada(Lista* li, struct aluno al){
    if (li == NULL)
        return 0;
    No* novo_no;
    novo_no = (No*) malloc(sizeof(No));
    if (novo_no == NULL)
        return 0;
    novo_no->dados = al;
    novo_no->prox = NULL;
    if(li->inicio == NULL){
        li->inicio = novo_no;
        return 1;
    } else{
        No *ant, *atual = li->inicio;
        while (atual != NULL && atual->dados.matricula < al.matricula){
            ant = atual;
            atual = atual->prox;
        }
        if(atual == li->inicio){
            novo_no->prox = li->inicio;
            li->inicio = novo_no;
        } else {
            novo_no->prox = atual;
            ant->prox = novo_no;
        }
        li->tamanho++;
        return 1;
    }
}

int remover_lista_inicio(Lista *li){
    if (li == NULL)
        return 0;
    if(li->inicio == NULL)
        return 0;
    No *no = li->inicio;
    li->inicio = no->prox;
    free(no);
    if(li->inicio == NULL)
        li->fim = NULL;
    li->tamanho--;
    return 1;
}

int remover_lista_final(Lista *li) {
    if (li == NULL)
        return 0;
    if (li->inicio == NULL)
        return 0;

    No *atual = li->inicio;
    No *ant = NULL;

        while (atual->prox != NULL) {
            ant = atual;
            atual = atual->prox;
        }

    li->fim = ant;

        if (ant == NULL) {
            li->fim = li->inicio;
        } else {
            li->fim->prox = NULL;
        }

    free(atual);
    li->tamanho--;
    return 1;
}

int remover_lista(Lista* li, int mat) {
    if (li == NULL)
        return 0;
    if (li->inicio == NULL)
        return 0;

    No *no = li->inicio;

    while (no->dados.matricula != mat)
    {
        no = no->prox;
        if (no == NULL)
            return 0;
    }

    if (no == li->fim)
        {
            remover_lista_final(li);
            return 1;
        }
    else if (no == li->inicio)
        {
            remover_lista_inicio(li);
            return 1;
        }
    else
        {
            No *ant = li->inicio, *atual = no;
            while (ant->prox != no)
                ant = ant->prox;
            ant->prox = no->prox;
            free(no);
        }

    li->tamanho--;
    return 1;
}

int remover_repetidos(Lista* li){
   if (li == NULL)
      return 0;
  if (li->inicio == NULL || li->inicio->prox == NULL)
      return 0;

    No *no = li->inicio;
    No *busca = no->prox;
    No *ant, *atual;

    while (no->prox != NULL) {

        while (busca != NULL) {
            if ((no->dados.matricula == busca->dados.matricula) && (no != busca))
            {
                no->prox = busca->prox;
                free(busca);
                li->tamanho--;
            }
            else
            {
                busca = busca->prox;
            }
        }

        no = no->prox;
    }

  return 1;
}

void imprimir_lista(Lista* li){
    if (li->inicio == NULL)
       printf("Lista vazia\n");
    No* ler_no = li->inicio;
    printf("-------------\n");
    while(ler_no != NULL){
        printf("Matricula: %d\n", ler_no->dados.matricula);
        printf("Nome: %s\n", ler_no->dados.nome);
        printf("Notas: %2.1f %2.1f %2.1f\n", ler_no->dados.n1, ler_no->dados.n2, ler_no->dados.n3);
        printf("-------------\n");
        ler_no = ler_no->prox;
    }
}

void imprimir_nos(Lista* li) {
    if (li == NULL)
        return 0;
    if (li->inicio == NULL)
        return 0;

    No *no = li->inicio;

    while (no != NULL) {
        printf("ENDEREÇO %x\n", no);
        no = no->prox;
    }
}
