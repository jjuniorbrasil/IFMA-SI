#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaCircular.h"
#include "time.h"

Lista* minha_lista;

struct aluno al;

int main()
{

    clock_t inicio, fim;
    double tempo_execucao;

    // Registra o tempo de início
    inicio = clock();

    int n = 0;
    minha_lista = criar_lista();
    printf("Lista criada! - Lista Circular - 200000 inserções no final \n");

    for (int x = 1; x <= 40000; x++) {

    al.matricula = x;
    strcpy(al.nome,"Teste Joao");
    al.n1 = 7.5;
    al.n2 = 8.2;
    al.n3 = 7.4;
    inserir_lista_inicio(minha_lista,al);

    al.matricula = x+1;
    strcpy(al.nome,"Teste Maria");
    al.n1 = 7.5;
    al.n2 = 9.2;
    al.n3 = 9.4;
    inserir_lista_inicio(minha_lista,al);

    al.matricula = x+2;
    strcpy(al.nome,"Novo Joao");
    al.n1 = 6.5;
    al.n2 = 8.2;
    al.n3 = 5.4;
    inserir_lista_inicio(minha_lista,al);

    al.matricula = x+3;
    strcpy(al.nome,"Novo Maria");
    al.n1 = 6.5;
    al.n2 = 8.2;
    al.n3 = 5.4;
    inserir_lista_inicio(minha_lista,al);

    al.matricula = x+4;
    strcpy(al.nome,"Novo Maria");
    al.n1 = 6.5;
    al.n2 = 8.2;
    al.n3 = 5.4;
    inserir_lista_inicio(minha_lista,al);

    if (x == 25000) {
        printf("Executando...(1/3)\n");
    } else if (x == 50000) {
        printf("Executando...(2/3)");
    }
}

    /*imprimir_lista(minha_lista);

    printf("Removendo...\n");

    remover_lista_inicio(minha_lista);
    remover_lista(minha_lista,3);

    imprimir_lista(minha_lista);*/

    liberar_lista(minha_lista);

    printf("\nLista liberada!");

    // Registra o tempo de término
    fim = clock();

    // Calcula o tempo de execução em segundos
    tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("\n\nTempo de execução: %f segundos\n", tempo_execucao);
    scanf("%d", &n);

}
