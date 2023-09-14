/*
        Aluno: José Carlos Chaves Brasil Júnior - Matrícula: 20231SI0003
            Curso: Sistemas de Informação - Período: 2º - IFMA Monte Castelo
                  Disciplina: Algoritmos e Estruturas de Dados
                    Professor: Dr. Omar Andres Carmona Cortes
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>
#include <math.h>
#include <locale.h>
#include "ponto.h"
#include "figuras.h"

int main()
{
setlocale(LC_ALL, "Portuguese");
srand(time(0));

float x = 0, y = 0;
Ponto* pt[3];

for (int c = 0; c < 3; c++)
    {
    x = rand()%10;
    y = rand()%10;
    pt[c] = Criar_ponto(x,y);
    printf("Ponto %d - 'x': %.2f | 'y': %.2f\n", c+1, x, y);
    }

    Quadrado* q1 = criarQuadrado(pt[0], pt[1]);
    printf("\n====== QUADRADO ============\n"
            "   Área do quadrado: %.2f u.a\n"
            "   Inclinação do quadrado: %.2fº\n"
            "=============================\n", areaQuadrado(q1), inclinacaoQuadrado(q1));

    Triangulo* t1 = criarTriangulo(pt[0], pt[1], pt[2]);
    printf("\n\n====== TRIÂNGULO ==========\n"
           "    Área do triângulo: %.2f u.a\n"
           "==============================\n", areaTriangulo(t1));

    Retangulo* r1 = criarRetangulo(pt[0], pt[2], 5);
    printf("\n\n====== RETÂNGULO ==========\n"
           "    Largura do retângulo: %.2f u\n"
           "    Altura do retângulo: %.2f u\n"
           "    Área do retângulo: %.2f u.a\n"
           "==============================\n", larguraRetangulo(r1), alturaRetangulo(r1), areaRetangulo(r1));

    Circulo* c1 = criarCirculo(pt[0], pt[1]);
    printf("\n\n====== CÍRCULO ==========\n"
           "    Raio do círculo: %.2f u\n"
           "    Área do círculo: %.2f u.a\n"
           "==============================\n", raioCirculo(c1), areaCirculo(c1));

    liberarQuadrado(q1);
    liberarTriangulo(t1);
    liberarRetangulo(r1);
    liberarCirculo(c1);
    liberarPonto(pt[0]);
    liberarPonto(pt[1]);
    liberarPonto(pt[2]);

    printf("\n=========== Parâmetros: ============\n"
           "\n - Para quadrado: PONTO 1 e PONTO 2"
           "\n - Para triângulo: PONTO 1, PONTO 2 e PONTO 3"
           "\n - Para retângulo: PONTO 1, PONTO 3 e ALTURA (visto que se houvesse variação de 'x' entre P3 e um ponto qualquer, seria um triângulo)"
           "\n - Para círculo: PONTO 1 e PONTO 2\n\n");


return 0;
}
