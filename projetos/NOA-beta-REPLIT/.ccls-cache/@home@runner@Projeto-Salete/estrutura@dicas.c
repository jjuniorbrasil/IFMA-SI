// FUNÇÃO PENSADA PARA 10 DICAS DIFERENTES ('case's de 0 a 9).
// Variáveis: 'n' para o número sorteado e 'x' para o número escolhido pelo jogador.
// Substitua os 'printf's pelas funções
// Cada vez que uma dica aparece dentro de um 'case', sua probabilidade de aparecer aumenta em '1/DICAS';

#define DICAS 9
#define TESTE 5

void dicasmedias (n, x) {
  int op, probdic;
  
  op = rand()%DICAS;

  //============DEBUG==============
  //printf("DICA MÉDIA NÚMERO '%d'\n", op);  // Exibe qual case foi escolhido.
  //op = TESTE;                        // Fixa o jogo em uma dica.
  //===============================
  
  switch (op) {             
        case 0:
         comparaTamanho(n, x);
    break;
        case 1:
         comparaTamanho(n, x);
    break;
        case 2:
          parImp(n);
    break;
        case 3:
          parImp(n);
    break;
        case 4:
          binario(n);
    break;
        case 5:
          multiplo(n);
    break;
        case 6:
          multiplo(n);
    break;
        case 7:
          sinalNumero(n);
    break;
        case 8:
          ultimoDigito(n);
    break;
        case 9:
          ultimoDigito(n);
    break;
  }
printf("\n\n");
}