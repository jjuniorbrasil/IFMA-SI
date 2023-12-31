#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaCircular.h"
#include "time.h"
#include "locale.h"

Lista* minha_lista;

struct aluno al;

int main()
{
    int n;
    minha_lista = criar_lista();
    printf("LISTA CIRCULAR: Lista criada! \n");

    setlocale(LC_ALL, "Portuguese");
    clock_t t;
    t = clock();

    for (int x = 0; x < 500000; x++)
    {
    al.matricula = x;
    strcpy(al.nome,"Teste");
    al.n1 = 7.5;
    al.n2 = 8.2;
    al.n3 = 7.4;
    inserir_lista_inicio(minha_lista,al);
    }

    liberar_lista(minha_lista);

    printf("A lista foi liberada!");

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n\n'500000' inser��es em %f segundos. \n", time_taken);
    scanf("%d", &n);
}
