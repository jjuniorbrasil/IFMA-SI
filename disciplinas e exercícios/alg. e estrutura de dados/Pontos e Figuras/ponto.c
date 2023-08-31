#include <stdlib.h>
#include <math.h>
#include "ponto.h"

typedef struct ponto {
    float x;
    float y;
} Ponto;

// Cria um ponto na mem�ria com coordenadas 'x' e 'y'.
Ponto* Criar_ponto(float x, float y) {
    Ponto* p = (Ponto *)malloc(sizeof(Ponto));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    } else {
        return NULL;
    }
    return p;
}

// Para liberar a mem�ria alocada.
void liberarPonto(Ponto* p) {
    free(p);
}

// Para atribuir valores �s vari�veis apontadas de acordo com um ponto j� definido.
int acessarPonto(Ponto* p, float *x, float *y) {
    if (p == NULL) {return 1;}
    *x = p->x;
    *y = p->y;
    return 0;
}

// Atribui valores de 'x' e 'y' a um ponto espec�fico.
int atribuiraPonto(Ponto *p, float x, float y) {
    if (p == NULL) {return 1;}
    p->x = x;
    p->y = y;
    return 0;
}

// Calcula a dist�ncia entre dois pontos por Pit�goras.
float distanciaPontos(Ponto* p1, Ponto* p2) {
    if (p1 == NULL || p2 == NULL)
        {return 1;}
    float dx = (p1->x - p2->x);
    float dy = (p1->y - p2->y);

    return (float) sqrt((pow(dx, 2)) + (pow(dy, 2)));
}
