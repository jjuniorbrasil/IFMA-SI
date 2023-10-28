#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "Fila.h"

// J. Júnior

struct fila {
    struct aluno dados[MAX];
    int qtd;
};

Fila* criar_fila() {
    Fila* fi;
    fi = (Fila*)malloc(sizeof(Fila));
    if (fi != NULL)
        fi->qtd = 0;
    return fi;
}

int inserir_fila(Fila* fi, struct aluno al) {
    if (fi == NULL || al.matricula == NULL || fi->qtd == MAX) {
        return 0;
    } else {
        fi->dados[fi->qtd] = al;
        fi->qtd++;
        return 1;
    }
}

int remover_fila(Fila* fi) {
    if (fi == NULL)
        return 0;
    for (int i = 0; i<fi->qtd; i++)
        fi->dados[i] = fi->dados[i+1];
    fi->qtd--;
    return 1;
}

int tamanho_fila(Fila* fi) {
    if (fi != NULL)
        return fi->qtd;
    else
        return -1;
}

int consultar_fila(Fila* fi, struct aluno* al) {
    if (fi == NULL)
        return 0;
    (*al) = fi->dados[0];
    return 1;
};

void liberar_fila(Fila* fi) {
    if (fi == NULL)
        return 0;
    free(fi);
}
