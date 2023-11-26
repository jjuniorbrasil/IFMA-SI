#include <stdio.h>
#include <stdlib.h>

typedef struct no* Lista;

Lista* criar_lista();
void liberar_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_vazia(Lista* li);
int remover_lista_inicio(Lista* li);
int iterar_lista(Lista* li);
int remover_lista_final(Lista* li);
void imprimir_lista(Lista* li);
int remover_repetidos(Lista* li);
int remover_lista_pos(Lista* li, int pos);

// MODIFICADO

int inserir_lista_inicio(Lista *li, int info);
int inserir_lista_final(Lista* li, int info);
int inserir_lista_ordenada(Lista *li, int info);
int busca_lista_mat(Lista* li, int mat);
