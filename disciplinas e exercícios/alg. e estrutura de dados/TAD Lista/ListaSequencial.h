#ifndef LISTASEQUENCIAL_H_INCLUDED
#define LISTASEQUENCIAL_H_INCLUDED

#define MAX 100
struct aluno{
   int matricula;
   char nome[30];
   float n1, n2, n3;
};

typedef struct lista Lista;

Lista* criar_lista();
void liberar_lista(Lista* li);
int buscar_lista_pos(Lista* li, int pos, struct aluno *al);
int inserir_lista_final(Lista* li, struct aluno al);
int inserir_lista_inicio(Lista* li, struct aluno al);
int inserir_lista_ordenada(Lista* li, struct aluno al);
int remover_lista_inicio(Lista* li);
int remover_lista_final(Lista* li);
int remover_lista(Lista* li, int mat);
int tamanho_lista(Lista* li);
int lista_cheia(Lista *li);
int lista_vazia(Lista *li);
void verificar_aprovacao(Lista *li, int m);
int busca_lista_mat(Lista* li, char m[]);
int inserir_lista_nome(Lista* li, char m[]);

void imprimir_lista(Lista *li);

#endif // LISTASEQUENCIAL_H_INCLUDED
