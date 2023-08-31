// FUNÇÃO PENSADA PARA 10 DICAS DIFERENTES ('case's de 0 a 9).
// Variáveis: 'n' para o número sorteado e 'x' para o número escolhido pelo jogador.
// Cada vez que uma dica aparece dentro de um 'case', sua probabilidade de aparecer aumenta em '1/DICAS';

#define DICAS 9
#define TESTE 5

void dicasiniciais (n, x) {
  int op, probdic, r = 0;
  
  op = rand()%DICAS;

  //============DEBUG==============
  //printf("DICA INICIAL NÚMERO '%d'\n", op);  // Exibe qual case foi escolhido.
  //op = TESTE;                              // Fixa o jogo em uma dica.
  //===============================
  
  switch (op) {             
        case 0:
          parImp(n, r);
          r++;
    break;
        case 1:
          parImp(n, r);
          r++;
    break;
        case 2:
          parImp(n, r);
          r++;
    break;
        case 3:
          parImp(n, r);
          r++;
    break;
        case 4:
          binario(n);
    break;
        case 5:
          multiplo(n, x, r);
          r++;
    break;
        case 6:
          multiplo(n, x, r);
          r++;
    break;
        case 7:
          sinalNumero(n);
    break;
        case 8:
          ultimoDigito(n, x);
    break;
        case 9:
          ultimoDigito(n, x);
    break;
  }
printf("\n\n");
}