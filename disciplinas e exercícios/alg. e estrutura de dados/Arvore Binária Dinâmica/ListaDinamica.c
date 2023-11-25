#include <stdio.h>
#include <stdlib.h>
#include "ListaDinamica.h"

struct no{
    int info;
    struct no *prox;
};

typedef struct no No;

Lista* criar_lista(){
    Lista * li = (Lista*) malloc (sizeof(Lista));
    if (li != NULL)
        *li = NULL;
    return li;
}

void liberar_lista(Lista* li){
    if (li != NULL){
        No* no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamanho_lista(Lista *li){
    if (li == NULL)
        return 0;
    int cont = 0;
    No* no = *li;
    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}

int lista_vazia(Lista* li){
    if (li == NULL)
        return 1;
    if (*li == NULL)
        return 1;
    return 0;
}

int inserir_lista_inicio(Lista *li, int info){
    if (li == NULL)
        return 0;
    No* novo_no;
    novo_no = (No*) malloc(sizeof(No));
    if (novo_no == NULL)
        return 0;
    novo_no->info = info;
    novo_no->prox = (*li);
    *li = novo_no;
    return 1;
}

int inserir_lista_final(Lista *li, int info){
    if (li == NULL)
        return 0;
    No *novo_no;
    novo_no = (No*) malloc(sizeof(No));
    if (novo_no == NULL)
        return 0;
    novo_no->info = info;
    novo_no->prox = NULL;
    if((*li) == NULL){
        *li = novo_no;
    } else {
        No *aux;
        aux = *li;
        while(aux->prox != NULL)
            aux = aux->prox;
        aux->prox = novo_no;
    }
    return 1;
}

int inserir_lista_ordenada(Lista* li, int info){
    if (li == NULL)
        return 0;
    No* novo_no;
    novo_no = (No*) malloc(sizeof(No));
    if (novo_no == NULL)
        return 0;
    novo_no->info = info;
    if((*li) == NULL){
        novo_no->prox = NULL;
        *li = novo_no;
        return 1;
    } else{
        No *ant, *atual = *li;
        while (atual != NULL && atual->info < info){
            ant = atual;
            atual = atual->prox;
        }
        if(atual == *li){
            novo_no->prox = (*li);
            *li = novo_no;
        } else {
            novo_no->prox = atual;
            ant->prox = novo_no;
        }
        return 1;
    }
}

int remover_lista_inicio(Lista* li){
    if (li == NULL)
        return 0;
    if ((*li) == NULL)
        return 0;

    No *no = *li;
    *li = no->prox;
    free(no);
    return 1;
}

int remover_lista_final(Lista* li){
    if (li == NULL)
        return 0;
    if ((*li) == NULL)
        return 0;

    No *ant, *no = *li;
    while(no->prox != NULL){
        ant = no;
        no = no->prox;
    }

    if(no == (*li))
        *li = no->prox;
    else
        ant->prox = no->prox;
    free(no);
    return 1;
}

int remover_lista(Lista* li, int mat){
    if (li == NULL)
        return 0;
    if ((*li) == NULL)
        return 0;

    No *ant, *no = *li;
    while(no != NULL && no->info != mat){
        ant = no;
        no = no->prox;
    }
    if (no == NULL)
        return 0;

    if (no == *li)
        *li = no->prox;
    else
        ant->prox = no->prox;
    free(no);
    return 1;
}

int busca_lista_mat(Lista* li, int mat){
    if (li == NULL)
        return 0;
    No *no = *li;
    while(no != NULL && no->info != mat)
        no = no->prox;
    if (no == NULL)
        return 0;
    else{
        return 1;
    }
}

void imprimir_lista(Lista* li){
    if (li == NULL)
       printf("Lista vazia\n");
    No* ler_no = (*li);
    printf("-------------\n");
    while(ler_no != NULL){
        printf("Elemento: %d\n", ler_no->info);
        printf("-------------\n");
        ler_no = ler_no->prox;
    }
 }

 //----------------------------------------------------//

 int remover_lista_pos(Lista* li, int pos){
    if (li == NULL)
        return 0;
    if ((*li) == NULL)
        return 0;

    int tam = tamanho_lista(li);
    if (pos > tam)
        return 0;

    No *ant, *no = *li;
    int k = 1;

    if(pos == 1){
        printf("pos = %d\n", pos);
        *li = no->prox;
        free(no);
    }else{
       while(no != NULL && k < pos){
          k++;
          ant = no;
          no = no->prox;
       }
       ant->prox = no->prox;
       free(no);
    }
     return 1;
 }

int remover_repetidos(Lista* li){
   if (li == NULL)
      return 0;
  if ((*li) == NULL)
      return 0;

  int k = 1;
  No *no = *li;
  No *busca = no->prox;
  int tam = tamanho_lista(li);
  for (int j = k+1; j < tam; j++){
     if (no->info == busca->info)
         remover_lista_pos(li,j);
     busca = busca->prox;
     k++;
  }
}

int iterar_lista(Lista* li) {
    if (li == NULL)
        return 0;
    if ((*li) == NULL)
        return 0;

    No *no = *li;
    *li = no->prox;
    int valor = no->info;
    free(no);
    return valor;
}
