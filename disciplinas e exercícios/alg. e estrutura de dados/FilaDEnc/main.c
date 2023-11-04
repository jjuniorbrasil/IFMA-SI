#include <stdio.h>
#include <stdlib.h>
#include <FilaDupla.h>

Fila* minha_fila;
struct aluno al;

int main ()
{
    minha_fila = criar_fila();

    al.matricula = 1;
    strcpy(al.nome, "Carlos");
    al.n1 = 9.0;
    al.n2 = 9.0;
    al.n3 = 9.0;
    inserir_fila(minha_fila, al);

    al.matricula = 2;
    strcpy(al.nome, "Daniel");
    al.n1 = 9.0;
    al.n2 = 9.0;
    al.n3 = 9.0;
    inserir_fila(minha_fila, al);

    al.matricula = 3;
    strcpy(al.nome, "Pedro");
    al.n1 = 9.0;
    al.n2 = 9.0;
    al.n3 = 9.0;
    inserir_fila(minha_fila, al);

    al.matricula = 4;
    strcpy(al.nome, "Paulo");
    al.n1 = 9.0;
    al.n2 = 9.0;
    al.n3 = 9.0;
    inserir_fila(minha_fila, al);
    inverter_fila(minha_fila);
    imprimir_fila(minha_fila);

    Fila* fila_secundaria = criar_fila();

    al.matricula = 5;
    strcpy(al.nome, "Luana");
    al.n1 = 9.0;
    al.n2 = 9.0;
    al.n3 = 9.0;
    inserir_fila(fila_secundaria, al);

    al.matricula = 6;
    strcpy(al.nome, "Maria");
    al.n1 = 9.0;
    al.n2 = 9.0;
    al.n3 = 9.0;
    inserir_fila(fila_secundaria, al);

    al.matricula = 7;
    strcpy(al.nome, "Tereza");
    al.n1 = 9.0;
    al.n2 = 9.0;
    al.n3 = 9.0;
    inserir_fila(fila_secundaria, al);

    al.matricula = 8;
    strcpy(al.nome, "Carla");
    al.n1 = 9.0;
    al.n2 = 9.0;
    al.n3 = 9.0;
    inserir_fila(fila_secundaria, al);

    inverter_fila(minha_fila);
    imprimir_fila(minha_fila);

    Fila* fila_intercalada = intercalar_filas(minha_fila, fila_secundaria);
    imprimir_fila(fila_intercalada);

    liberar_fila(minha_fila);
    liberar_fila(fila_secundaria);
    //liberar_fila(fila_intercalada);

    return 1;
}
