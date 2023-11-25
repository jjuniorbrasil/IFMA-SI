typedef struct No *ArvBin;

ArvBin* criar_arvore();
void liberar_arvore(ArvBin *raiz);
int inserir_arvore(ArvBin * raiz, int valor);
int remover_arvore(ArvBin * raiz, int valor);
int arvore_vazia(ArvBin * raiz);
int altura_arvore(ArvBin * raiz);
int total_nos(ArvBin *raiz);
int consulta_arvore(ArvBin * raiz, int valor);
void preOrdem(ArvBin* raiz);
void emOrdem(ArvBin* raiz);
void posOrdem(ArvBin* raiz);
int par_arv(ArvBin *raiz);
int maior_elemento_arv(ArvBin* raiz);
int quantidade_folhas_arv(ArvBin* raiz);

