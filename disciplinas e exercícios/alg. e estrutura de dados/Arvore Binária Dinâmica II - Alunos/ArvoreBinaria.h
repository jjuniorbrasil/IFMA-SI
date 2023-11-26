typedef struct No *ArvBin;

struct aluno {
    int mat;
    char nome[30];
    float n1;
    float n2;
    float n3;
};

ArvBin* criar_arvore();
void liberar_arvore(ArvBin *raiz);
int inserir_arvore(ArvBin * raiz, struct aluno al);
int remover_arvore(ArvBin * raiz, int mat);
int arvore_vazia(ArvBin * raiz);
int altura_arvore(ArvBin * raiz);
int total_nos(ArvBin *raiz);
int consulta_arvore(ArvBin * raiz, int mat);
void preOrdem(ArvBin* raiz);
void emOrdem(ArvBin* raiz);
void posOrdem(ArvBin* raiz);
int par_arv(ArvBin *raiz);
int maior_elemento_arv(ArvBin* raiz);
int quantidade_folhas_arv(ArvBin* raiz);

