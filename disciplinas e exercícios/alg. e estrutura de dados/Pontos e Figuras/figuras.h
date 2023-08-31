#ifndef FIGURAS_H_INCLUDED
#define FIGURAS_H_INCLUDED
#include "ponto.h"

typedef struct quadrado Quadrado;
typedef struct triangulo Triangulo;
typedef struct retangulo Retangulo;
typedef struct circulo Circulo;

Quadrado* criarQuadrado(Ponto*, Ponto*);
float areaQuadrado(Quadrado*);
float inclinacaoQuadrado(Quadrado*);

Triangulo* criarTriangulo(Ponto*, Ponto*, Ponto*);
float areaTriangulo(Triangulo*);

Retangulo* criarRetangulo(Ponto*, Ponto*, float);
float larguraRetangulo(Retangulo*);
float alturaRetangulo(Retangulo*);
float areaRetangulo(Retangulo*);

Circulo* criarCirculo(Ponto*, Ponto*);
float areaCirculo(Circulo*);
float raioCirculo(Circulo*);
void liberarCirculo(Circulo*);

void liberarQuadrado (Quadrado*);
void liberarTriangulo (Triangulo*);
void liberarRetangulo (Retangulo*);

#endif // FIGURAS_H_INCLUDED
