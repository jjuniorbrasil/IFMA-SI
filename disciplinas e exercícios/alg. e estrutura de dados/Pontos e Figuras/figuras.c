#include <stdlib.h>
#include <math.h>
#include "ponto.h"
#include "figuras.h"

typedef struct quadrado {
    Ponto* p1;
    Ponto* p2;
    float area;
    float inclinacao;
} Quadrado;

typedef struct triangulo {
    Ponto* p1;
    Ponto* p2;
    Ponto* p3;
    float area;
} Triangulo;

typedef struct retangulo {
    Ponto* pivo;
    Ponto* p2;
    float largura;
    float altura;
    float area;
} Retangulo;

typedef struct circulo {
    Ponto* p1;
    Ponto* p2;
    float raio;
    float area;
} Circulo;

Quadrado* criarQuadrado(Ponto* p1, Ponto* p2){
    Quadrado* q = (Quadrado*)malloc(sizeof(Quadrado));
    q->p1 = p1;
    q->p2 = p2;

    return q;
}

float areaQuadrado(Quadrado* q) {
    float d = pow(distanciaPontos(q->p1, q->p2), 2);
    return d;
};

float inclinacaoQuadrado(Quadrado* q) {
    float x1, y1, x2, y2, inclinacao;
    acessarPonto(q->p1, &x1, &y1);
    acessarPonto(q->p2, &x2, &y2);

    if (y1 != y2) {
            inclinacao = asin((y2 - y1) / distanciaPontos(q->p1, q->p2)) * 180/(22/7);
            // É calculada a diferença de 'altura' pela variação do 'y', dividido pela distância entre os pontos.
            // Essa expressão, quando parâmetro de 'asin', retorna um valor em radianos.
            // O valor em radianos é multiplicado por 180/PI (aproximadamente) e é atribuído em graus para 'q->inclicacao'.
        }

    return inclinacao;
};

Triangulo* criarTriangulo(Ponto* p1, Ponto* p2, Ponto* p3) {
    Triangulo* t = (Triangulo*)malloc(sizeof(Triangulo));
    t->p1 = p1;
    t->p2 = p2;
    t->p3 = p3;
    return t;
}

float areaTriangulo(Triangulo* t) {

    float x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0, area = 0;

    acessarPonto(t->p1, &x1, &y1);
    acessarPonto(t->p2, &x2, &y2);
    acessarPonto(t->p3, &x3, &y3);

    area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    t->area = area;

    {
    area *= -1;
    };

    return area;
}

Retangulo* criarRetangulo(Ponto* p1, Ponto* p2, float a) {
    Retangulo* r = (Retangulo*)malloc(sizeof(Retangulo));
    r->pivo = p1;
    r->p2 = p2;
    r->largura = distanciaPontos(r->pivo, r->p2);
    r->altura = a;
    r->area = (r->largura) * (r->altura);

    return r;
}

float larguraRetangulo(Retangulo* r) {
    float largura = r->largura;
    return largura;
}

float alturaRetangulo(Retangulo* r) {
    float altura = r->altura;
    return altura;
}

float areaRetangulo(Retangulo* r) {
    float area = r->area;
    return area;
}

Circulo* criarCirculo(Ponto* p1, Ponto* p2) {
    Circulo* c = (Circulo *)malloc(sizeof(Circulo));
    c->p1 = p1;
    c->p2 = p2;
    c->raio = distanciaPontos(c->p1, c->p2);
    c->area = ((pow(c->raio, 2))*22)/7;
    return c;
};

float areaCirculo(Circulo* c) {
    float areac = c->area;
    return areac;
};

float raioCirculo(Circulo* c) {
    float raio = distanciaPontos(c->p1, c->p2);
    return raio;
};

void liberarQuadrado (Quadrado* q) {
    liberarPonto(q->p1);
    liberarPonto(q->p2);
    free(q);
}

void liberarTriangulo (Triangulo* t) {
    liberarPonto(t->p1);
    liberarPonto(t->p2);
    liberarPonto(t->p3);
    free(t);
}

void liberarRetangulo (Retangulo* r) {
    liberarPonto(r->pivo);
    liberarPonto(r->p2);
    free(r);
}

void liberarCirculo(Circulo* c) {
    liberarPonto(c->p1);
    liberarPonto(c->p2);
    free(c);
}
