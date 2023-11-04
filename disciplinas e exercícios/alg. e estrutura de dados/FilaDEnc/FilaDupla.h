#include "ListaDupla.h"

typedef Lista Fila;

Fila* criar_fila();
Fila* intercalar_filas();
void liberar_fila(Fila* fi);
void inverter_fila(Fila* fi);
int tamanho_fila(Fila *fi);
int fila_vazia(Fila* fi);
int inserir_fila(Fila *fi, struct aluno al);
int remover_fila(Fila* fi);
int remover_fila_mat(Fila* fi, int mat);
int busca_fila_mat(Fila* fi, int mat, struct aluno *al);
void imprimir_fila(Fila* fi);
