#include "FilaDupla.h"

Fila* criar_fila(){
    return criar_lista();
}

void liberar_fila(Fila* fi){
    liberar_lista(fi);
}

int tamanho_fila(Fila *fi){
    return tamanho_lista(fi);
}

int fila_vazia(Fila* fi){
    return lista_vazia(fi);
}

int inserir_fila(Fila *fi, struct aluno al){
    return inserir_lista_final(fi, al);
}

int remover_fila(Fila* fi){
    return remover_lista_inicio(fi);
}

int remover_fila_mat(Fila* fi, int mat){
    return remover_lista(fi, mat);
}

int busca_fila_mat(Fila* fi, int mat, struct aluno *al){
    return busca_lista_mat(fi, mat, al);
}

void imprimir_fila(Fila* fi){
    imprimir_lista(fi);
 }

 void inverter_fila(Fila* fi) {
    inverter_lista(fi);
 }

Fila* intercalar_filas(Fila* fi, Fila* fi2) {
    return intercalar_listas(fi, fi2);
}
