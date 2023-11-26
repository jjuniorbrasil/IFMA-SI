#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"
#include "ListaDinamica.h"

struct No{
  struct aluno dados;
  struct No *esq;
  struct No *dir;
};

ArvBin* criar_arvore(){
    ArvBin* raiz = (ArvBin*) malloc(sizeof(ArvBin));
    if (raiz != NULL)
        *raiz = NULL;
    return raiz;
}

void liberar_no(struct No* no){
    if(no == NULL)
        return;
    liberar_no(no->esq);
    liberar_no(no->dir);
    free(no);
    no = NULL;
}

void liberar_arvore(ArvBin* raiz){
    if(raiz == NULL)
        return;
    liberar_no(*raiz);
    free(raiz);
}

int arvore_vazia(ArvBin *raiz){
    if (raiz == NULL)
        return 1;
    if (*raiz == NULL)
        return 1;
    return 0;
}

int total_nos(ArvBin *raiz){
    if(raiz==NULL)
        return 0;
    if(*raiz == NULL)
        return 0;
    int total_esq = total_nos(&((*raiz)->esq));
    int total_dir = total_nos(&((*raiz)->dir));
    return (total_esq + total_dir + 1);
}

int altura_arvore(ArvBin *raiz){
    if (raiz == NULL)
        return 0;
    if (*raiz == NULL)
        return 0;
    int alt_esq = altura_arvore(&((*raiz)->esq));
    int alt_dir = altura_arvore(&((*raiz)->dir));
    if (alt_esq > alt_dir)
        return (alt_esq + 1);
    else
        return (alt_dir + 1);
}

void preOrdem(ArvBin *raiz){
    if(raiz == NULL)
        return;

    if(*raiz != NULL){
        printf("%-5d ", (*raiz)->dados.mat);
        printf("%-15s ", (*raiz)->dados.nome);
        printf("%-7.2f ", (*raiz)->dados.n1);
        printf("%-7.2f ", (*raiz)->dados.n2);
        printf("%-7.2f ", (*raiz)->dados.n3);
        printf("\n");
        preOrdem(&((*raiz)->esq));
        preOrdem(&((*raiz)->dir));
    }
}

void emOrdem(ArvBin *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        emOrdem(&((*raiz)->esq));
        printf("%-5d ", (*raiz)->dados.mat);
        printf("%-15s ", (*raiz)->dados.nome);
        printf("%-7.2f ", (*raiz)->dados.n1);
        printf("%-7.2f ", (*raiz)->dados.n2);
        printf("%-7.2f ", (*raiz)->dados.n3);
        printf("\n");
        emOrdem(&((*raiz)->dir));
    }
}


void posOrdem(ArvBin *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        posOrdem(&((*raiz)->esq));
        posOrdem(&((*raiz)->dir));
        printf("%-5d ", (*raiz)->dados.mat);
        printf("%-15s ", (*raiz)->dados.nome);
        printf("%-7.2f ", (*raiz)->dados.n1);
        printf("%-7.2f ", (*raiz)->dados.n2);
        printf("%-7.2f ", (*raiz)->dados.n3);
        printf("\n");
    }
}

int inserir_arvore(ArvBin* raiz, struct aluno al){
    if(raiz == NULL)
        return 0;
    struct No *novo;
    novo = (struct No*)malloc(sizeof(struct No));
    if (novo == NULL)
        return 0;
    novo->dados = al;
    novo->esq = NULL;
    novo->dir = NULL;

    if(*raiz == NULL)
        *raiz = novo;
    else{
        struct No* atual = *raiz;
        struct No* ant = NULL;
        while(atual != NULL){
            ant = atual;
            if((al.mat) == (atual->dados.mat)){
                free(novo);
                return 0;
            }
            else if((al.mat) > (atual->dados.mat))
                atual = atual->dir;
            else
                atual = atual->esq;
        }

        if (ant == NULL)
            *raiz = novo; // Árvore vazia
        else if ((al.mat) > (ant->dados.mat))
            ant->dir = novo;
        else
            ant->esq = novo;
            }
    return 1;
}

struct No* remover_atual(struct No* atual){
    struct No *no1, *no2;

    if(atual->esq == NULL){ // CASO O NÓ A SER REMOVIDO NÃO TENHA FILHOS Á ESQUERDA
        no2 = atual->dir;   // substitui-se o nó atual pelo filho à direita
        free(atual);        // e retorna este nó, ligando-o ao anterior
        return no2;
    }

    no1 = atual;            // Caso tenha filhos à esquerda:
    no2 = atual->esq;

    while(no2->dir != NULL){    // Itera-se até o maior da subárvore à esquerda do atual
        no1 = no2;
        no2 = no2->dir;
    }

    if(no1 != atual){           // Se o a raiz da subárvore à esquerda já não for o maior
        no1->dir = no2->esq;    // O penultimo maior passa a apontar para seu sucessor e predecessor do maior.
        no2->esq = atual->esq;  // A esquerda do maior nó ocupa parcialmente o lugar do nó autal, apontando para o
    }                           // seu nó filho à esquerda.

    no2->dir = atual->dir;      // Finalmente, o maior nó da subárvore à esquerda assume o lugar do nó atual.
    free(atual);                // apontando para o nó filho à direita do nó atual
    return no2;                 // Retorna o endereço do substituto do nó atual
}

int remover_arvore(ArvBin *raiz, int mat){
    if(raiz == NULL)
        return 0;
    struct No *ant = NULL;
    struct No *atual = *raiz;
    while(atual != NULL){           // Até que se tenha percorrido todos os nós

        if(mat == atual->dados.mat){   // Caso o nó seja encontrado

            if (mat == (*raiz)->dados.mat) // Se o nó a ser reomovido for a raiz
                *raiz = remover_atual(atual);   // Retorna o substituto da raiz
            else{
                if(ant->dir == atual)   // Se o nó não for a raiz:
                    ant->dir = remover_atual(atual);    // Caso o nó a ser removido esteja à direita
                else                                    // a função retorna o endereço do seu substituto
                    ant->esq = remover_atual(atual);    // O mesmo caso o nó encontrado esteja à esquerda do nó pai
            }
            return 1;

        }

        ant = atual;                // Iteração

            if(mat > atual->dados.mat) // Caso o valor seja maior do que o nó atual
                atual = atual->dir; // o nó atual vai para a direita
            else                    // caso seja menor
                atual = atual->esq; // o atual vai para a esquerda
    }
    return 0;
}

int consulta_arvore(ArvBin *raiz, int mat){
    if(raiz == NULL)
        return 0;
    struct No* atual = *raiz;
    while(atual != NULL){
        if(mat == atual->dados.mat)
            return 1;
        if(mat > atual->dados.mat)
            atual = atual->dir;
        else
            atual = atual->esq;
    }
    return 0;
}

int par_arv(ArvBin *raiz){
    if(raiz == NULL){
        return 0;
    }
    int contpar = 0;

    if(*raiz != NULL){
        contpar += par_arv(&((*raiz)->dir));
        contpar += par_arv(&((*raiz)->esq));

        if((*raiz)->dados.mat % 2 == 0){
            contpar+=1;
        }
    }
    return contpar;
}

int maior_elemento_arv(ArvBin* raiz) {
    if ((raiz == NULL) || ((*raiz) == NULL)) {
        return NULL;
    } else {
        int maior = 0;
        struct No* no = (*raiz);
        while (no->dir != NULL)
            no = no->dir;
        maior = no->dados.mat;
        return maior;
    }
}

int quantidade_folhas_arv(ArvBin* raiz) {
    int qtd = 0;
    if ((raiz == NULL) || ((*raiz) == NULL)) {
        return 0;
    } else {
        struct No* no = (*raiz);
        if ((no->esq == NULL) && (no->dir == NULL)) {
                return 1;
            }
        qtd += quantidade_folhas_arv(&((*raiz)->esq));
        qtd += quantidade_folhas_arv(&((*raiz)->dir));
    }
    return qtd;
}

//ArvBin* lista_para_arv(Lista* li) {
//    if ((*li) == NULL) {
//        return NULL;
//    } else {
//        ArvBin * raiz = criar_arvore();
//        if (raiz == NULL) {
//            return NULL;
//        } else {
//            int tamanho = tamanho_lista(li);
//                for (int i = 0; i<tamanho; i++) {
//                    inserir_arvore(raiz, iterar_lista(li));
//                }
//        }
//        return raiz;
//    }
//}
