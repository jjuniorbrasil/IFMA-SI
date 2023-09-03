#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSequencial.h"

Lista* minha_lista;
struct aluno al;

int main()
{
    minha_lista = criar_lista();
    printf("Lista criada! \n");

    al.matricula = 1;
    strcpy(al.nome,"Teste Joao");
    al.n1 = 7.5;
    al.n2 = 8.2;
    al.n3 = 7.4;
    inserir_lista_inicio(minha_lista,al);

    al.matricula = 4;
    strcpy(al.nome,"Teste Maria");
    al.n1 = 7.5;
    al.n2 = 9.2;
    al.n3 = 9.4;
    inserir_lista_final(minha_lista,al);

    al.matricula = 2;
    strcpy(al.nome,"Novo Joao");
    al.n1 = 6.5;
    al.n2 = 8.2;
    al.n3 = 5.4;
    inserir_lista_ordenada(minha_lista,al);

    al.matricula = 3;
    strcpy(al.nome,"Novo Maria");
    al.n1 = 6.5;
    al.n2 = 8.2;
    al.n3 = 5.4;
    inserir_lista_ordenada(minha_lista,al);

    imprimir_lista(minha_lista);

    printf("Exclusao! \n");
    remover_lista_inicio(minha_lista);
    remover_lista(minha_lista,3);

    imprimir_lista(minha_lista);

    al.matricula = busca_lista_mat(minha_lista,"Novo Joao");
    strcpy(al.nome,"Novo Joao");
    al.n1 = 6.1;
    al.n2 = 7.9;
    al.n3 = 9.0;
    inserir_lista_ordenada(minha_lista,al);

    strcpy(al.nome,"Novo Joao");
    al.matricula = busca_lista_mat(minha_lista, al.nome);
    inserir_lista_nome(minha_lista, al.nome);

    al.matricula = busca_lista_mat(minha_lista,"Novo Joao");
    verificar_aprovacao(minha_lista, al.matricula);
}
