#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"
#include "ListaDinamica.h"

#define TAM 9
//#define TAM 20

int main()
{
    printf("Arvores Binarias...\n");
    //int vet[TAM] = {1, 30, 9, 2, 20, 21, 12, 7, 2};
    //int vet[TAM] = {10, 12, 13, 20, 15, 19, 16, 18, 5, 2, 1, 20};
    //int vet[TAM] = {1, 5, 30, 12, 20, 21, 11, 7, 2};
    //int vet[TAM] = {8, 10, 1, 5, 23, 11, 7, 19, 2, 4, 3, 21}; // 22, 52, 42, 11, 78};
    //int vet[TAM] = {20, 10, 12, 15, 25, 27, 8, 1, 6, 9, 11, 21, 30, 13, 3, 4, 19, 23, 16, 28};
    int vet[TAM] = {20, 10, 12, 15, 25, 27, 8, 1, 6, 9, 11, 21, 30, 13, 3};
    ArvBin *minha_arvore = criar_arvore();
    Lista *minha_lista = criar_lista();

    inserir_lista_inicio(minha_lista, 11);
    inserir_lista_inicio(minha_lista, 2);
    inserir_lista_inicio(minha_lista, 4);
    inserir_lista_inicio(minha_lista, 10);
    inserir_lista_inicio(minha_lista, 15);
    inserir_lista_inicio(minha_lista, 12);
    inserir_lista_inicio(minha_lista, 30);
    inserir_lista_inicio(minha_lista, 9);
    inserir_lista_inicio(minha_lista, 3);

    printf("Inserido...\n");
    for (int i=0; i<TAM; i++){
        printf("Inserindo i=%d -> %d \n",i,vet[i]);
        inserir_arvore(minha_arvore, vet[i]);
    }

    printf("Pares = %d\n",par_arv(minha_arvore));

    printf("Altura da arvore = %d\n", altura_arvore(minha_arvore));

    printf("Total de nos = %d\n", total_nos(minha_arvore));

    printf("Em-Ordem ...\n");

    emOrdem(minha_arvore);
    printf("\n");

    printf("Pre-Ordem ...\n");
    preOrdem(minha_arvore);
    printf("\n");

    printf("Pos-Ordem ...\n");
    posOrdem(minha_arvore);
    printf("\n");

//    printf("Removendo...\n");
//    remover_arvore(minha_arvore,8);
//    remover_arvore(minha_arvore,30);
//    remover_arvore(minha_arvore,20);

    printf("Altura da arvore = %d\n", altura_arvore(minha_arvore));

    printf("Total de nos = %d\n", total_nos(minha_arvore));

    emOrdem(minha_arvore);
    printf("\n");

    // PRÁTICA

    printf("Maior elemento da arvore: %d", maior_elemento_arv(minha_arvore));

    printf("\nQuantidade de folhas na árvore: %d", quantidade_folhas_arv(minha_arvore));

    ArvBin* arvore_secundaria = lista_para_arv(minha_lista);

    printf("\n");
    emOrdem(arvore_secundaria);

    liberar_arvore(minha_arvore);
    liberar_arvore(arvore_secundaria);
    liberar_lista(minha_lista);

    return 0;
}
