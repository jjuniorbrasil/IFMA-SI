// FUNÇÃO PENSADA PARA 10 DICAS DIFERENTES ('case's de 0 a 9).
// Variáveis: 'n' para o número sorteado e 'x' para o número escolhido pelo jogador.
// Substitua os 'printf's pelas funções
// Cada vez que uma dica aparece dentro de um 'case', sua probabilidade de aparecer aumenta em '1/DICAS';

#define DICAS 9

void dicas (n, x) {
  int op, probdic;
  
  op = rand()%DICAS;
  
  switch (op) {             
        case 0:
         comparaTamanho(n, x);
    break;
        case 1:
         comparaTamanho(n, x);
    break;
        case 2:
          printf("DICA 3");
    break;
        case 3:
          printf("DICA 4");
    break;
        case 4:
          printf("DICA 5");
    break;
        case 5:
          printf("DICA 6");
    break;
        case 6:
          printf("DICA 7");
    break;
        case 7:
          printf("DICA 8");
    break;
        case 8:
          printf("DICA 9");
    break;
        case 9:
          printf("DICA 10");
    break;
  }
printf("\n\n");
}