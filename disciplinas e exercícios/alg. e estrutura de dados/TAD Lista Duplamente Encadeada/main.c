#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaDupla.h"
#include <time.h>
#include <locale.h>
#include "FilaDupla.h"

Fila* minha_fila;

struct aluno al;

int main()
{
    minha_fila = criar_lista();

    al.matricula = x;
    strcpy(al.nome,"Teste");
    al.n1 = 7.5;
    al.n2 = 8.2;
    al.n3 = 7.4;
    inserir_lista_inicio(minha_fila,al);

    liberar_lista(minha_fila);

    printf("A lista foi liberada!");
}
