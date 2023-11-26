#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"
#include "ListaDinamica.h"
#include <time.h>

#define TAM 9
//#define TAM 20

struct aluno al;

void embaralharMatriculas(int *matriculas, int tamanho) {
    for (int i = tamanho - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        int temp = matriculas[i];
        matriculas[i] = matriculas[j];
        matriculas[j] = temp;
    }
}

int main()
{
    printf("Arvores Binarias...\n\n");
    ArvBin *minha_arvore = criar_arvore();

    srand(time(NULL));
    clock_t inicio, insercao, consultas;
    double tempo_insercao, tempo_consultas;

    inicio = clock();

    int qtmat = 100000;
    int mat[qtmat];

    for (int i = 1; i <= qtmat; i++) {
        mat[i] = i;
    }

    embaralharMatriculas(mat, qtmat);

    printf("Inserindo 100000 alunos...");

    for (int i = 0; i <= 100000; i++) {
        al.mat = mat[i];
        strcpy(al.nome, "Aluno");
        al.n1 = (float)(rand()%10);
        al.n2 = (float)(rand()%10);
        al.n3 = (float)(rand()%10);
        inserir_arvore(minha_arvore, al);
    }

    tempo_insercao = clock();
    tempo_insercao = ((double)(tempo_insercao - inicio)) / CLOCKS_PER_SEC;
    printf("\n%.6f (tempo de inserção)", tempo_insercao);

    int m[300000];
    int c = 1;

    for (int i = 1; i<=300000; i++) {
        if (c == 100001)
            c = 1;
        m[i] = c;
        c++;
    }

    embaralharMatriculas(m, 300000);

    printf("\n\nRealizando 300000 consultas aleatórias...\n");
    for (int c = 0; c < 300000; c++) {

//        printf("%d", m[c]);
//        if (consulta_arvore(minha_arvore, m[c]) == 1)
//            printf("  Aluno encontrado!\n");
//        else
//            printf("  Aluno não encontrado!\n");
//
        consulta_arvore(minha_arvore, m[c]);
    }

    tempo_consultas = clock();
    tempo_consultas = ((double)(tempo_consultas - inicio)) / CLOCKS_PER_SEC;
    tempo_consultas = tempo_consultas - tempo_insercao;
    printf("%.6f (tempo de consulta)\n", tempo_consultas);

    liberar_arvore(minha_arvore);
    return 0;
}
