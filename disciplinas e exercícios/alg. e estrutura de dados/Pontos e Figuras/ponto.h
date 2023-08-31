#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

typedef struct ponto Ponto;

Ponto* Criar_ponto(float, float);
void liberarPonto(Ponto*);
int acessarPonto(Ponto*, float*, float*);
int atribuiraPonto(Ponto*, float, float);
float distanciaPontos(Ponto*, Ponto*);

#endif // PONTO_H_INCLUDED
