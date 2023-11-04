#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"
#include "PilhaSimples.h"
#include "locale.h"

Pilha* minha_pilha;
Pilha* pilha_secundaria;
struct aluno st;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    minha_pilha = criar_pilha();

    strcpy(st.nome,"A");
    inserir_pilha(minha_pilha,st);

    strcpy(st.nome,"B");
    inserir_pilha(minha_pilha,st);

    strcpy(st.nome,"C");
    inserir_pilha(minha_pilha,st);

    strcpy(st.nome,"D");
    inserir_pilha(minha_pilha,st);

    pilha_secundaria = criar_pilha();
    copiar_pilha(minha_pilha, pilha_secundaria);
    imprimir_pilha(pilha_secundaria);
    return 1;
}


/*    imprimir_pilha(minha_pilha);

    if (pilha_palindromo(minha_pilha) == 1) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo.\n");
    }*/
