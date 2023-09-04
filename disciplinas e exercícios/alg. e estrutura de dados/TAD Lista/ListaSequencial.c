#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

struct lista{
   int qtd;
   struct aluno dados[MAX];
};

Lista* criar_lista(){
   Lista* li;
   li = (Lista*)malloc(sizeof(Lista));
   if (li != NULL)
      li->qtd = 0;
   return li;
}

void liberar_lista(Lista* li){
   free(li);
}

int tamanho_lista(Lista *li){
    if (li == NULL)
        return -1;
    else
        return li->qtd;
}

int lista_vazia(Lista *li){
    if(li == NULL)
        return -1;
    else
        return (li->qtd == 0);
}

int lista_cheia(Lista *li){
    if(li == NULL)
        return -1;
    else
        return (li->qtd == MAX);
}

int inserir_lista_inicio(Lista *li, struct aluno al){
    if (li == NULL)
        return 0;
    if(li->qtd == MAX)
        return 0;
    int i;
    for(i=li->qtd-1; i>=0; i--)
        li->dados[i+1] = li->dados[i];
    li->dados[0] = al;
    li->qtd++;
    return 1;
}

int inserir_lista_final(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    if(li->qtd == MAX)
        return 0;
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}

int inserir_lista_ordenada(Lista* li, struct aluno al){

    if ((li == NULL) || (li->qtd == MAX))
        {return 0;} else {

    int i = 0,k = 0;

        while((i < li->qtd) && (li->dados[i].matricula < al.matricula)) {
            for(k=li->qtd-1; k>=0; k--)
                {
                    li->dados[k+1] = li->dados[k];
                    li->dados[i] = al;
                }
                li->qtd++;
                i++;
            }
    return 1;

        }
}

int busca_lista_mat(Lista* li, char m[]) {

        for (int i = 0; i<li->qtd; i++)
        {
            if ((strcmp(m, li->dados[i].nome)) == 0) {
            return li->dados[i].matricula;
            }
        }
}

int inserir_lista_nome(Lista* li, char m[]) {
        int n = 0;
        printf("\n");
        for (int x = li->qtd; x >= 0; x--)
        {
            if (strcmp(m, li->dados[x].nome) == 0) {
                printf("Nova nota 1 de '%s': ", m);
                scanf("%f", &li->dados[x].n1);
                printf("Nova nota 2 de '%s': ", m);
                scanf("%f", &li->dados[x].n2);
                printf("Nova nota 3 de '%s': ", m);
                scanf("%f", &li->dados[x].n3);
                return 1;
            }
        }
}

void imprimir_lista(Lista *li){
   int i;
   printf("-------------\n");
   for(i=0;i < li->qtd; i++){
      printf("Matricula: %d\n", li->dados[i].matricula);
      printf("Nome: %s\n",li->dados[i].nome);
      printf("-------------\n");
   }
}

void verificar_aprovacao(Lista *li, int m) {

    int me = 0;

    for (int i = 0; i<(li->qtd); i++)
    {
        if (m == (li->dados[i].matricula)) {

            me = (li->dados[i].n1 + li->dados[i].n2 + li->dados[i].n3)/3;

            if (me >= 7) {
                printf("\n%s está aprovado!\n", li->dados[i].nome);
            } else if (me >= 5) {
                printf("\n%s terá que realizar a prova final.\n", li->dados[i].nome);
            } else {
                printf("\n%s está reprovado.\n", li->dados[i].nome);
            }

        }
    }
}

int remover_lista_inicio(Lista *li){
    if (li == NULL)
        return 0;
    if(li->qtd == 0)
        return 0;
    int k = 0;
    for(k=0;k < li->qtd-1; k++)
        li->dados[k] = li->dados[k+1];
    li->qtd--;
    return 1;
}

int remover_lista_final(Lista *li){
    if(li == NULL)
        return 0;
    if(li->qtd == 0)
        return 0;
    li->qtd--;
    return 1;
}

int remover_lista(Lista *li, int mat){
    if (li == NULL)
        return 0;
    if(li->qtd == 0)
        return 0;
    int k,i = 0;
    while(i < li->qtd && li->dados[i].matricula != mat)
        i++;
    if(i == li->qtd) //não encontrado
        return 0;

    for(k=i; k < li->qtd-1; k++)
        li->dados[k] = li->dados[k+1];
    li->qtd--;
    return 1;
}


