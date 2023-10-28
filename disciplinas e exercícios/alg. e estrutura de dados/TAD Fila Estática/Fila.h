#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#define MAX 100

// J. Júnior

struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct fila Fila;

Fila* criar_fila();
int inserir_fila(Fila* fi, struct aluno al);
int tamanho_fila(Fila* fi);
int remover_fila(Fila* fi);
int consultar_fila(Fila* fi, struct aluno* al);
int remover_fila(Fila* fi);
void liberar_fila(Fila* fi);

#endif // FILA_H_INCLUDED
