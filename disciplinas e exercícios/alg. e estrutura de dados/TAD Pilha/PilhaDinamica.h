struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct no* Pilha;

Pilha* criar_pilha();
void liberar_pilha(Pilha* pi);
int acessar_topo_pilha(Pilha* pi, struct aluno *al);
int inserir_pilha(Pilha* pi, struct aluno al);
int remover_pilha(Pilha* pi);
int tamanho_pilha(Pilha* pi);
int pilha_vazia(Pilha* pi);
int pilha_cheia(Pilha* pi);
