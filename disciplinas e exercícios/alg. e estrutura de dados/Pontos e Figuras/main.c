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

float d;
Ponto* p, *q;
p = Ponto_criar(1, 171);
p = Ponto_criar(2, 20);
d = distanciaPontos(p, q);

return 0;
}
