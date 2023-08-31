// FUNÇÃO PENSADA PARA 10 DICAS DIFERENTES ('case's de 0 a 9).
// Variáveis: 'n' para o número sorteado e 'x' para o número escolhido pelo jogador.
// Cada vez que uma dica aparece dentro de um 'case', sua probabilidade de aparecer aumenta em '1/DICAS';

#define DICAS 9
#define TESTE 0

void dicasdificeis(n, x) {
  int op, probdic;

  op = rand() % DICAS;

//============DEBUG==============
//printf("DICA DIFÍCIL NÚMERO '%d'\n", op);  // Exibe qual case foi escolhido.
//op = TESTE;                        // Fixa o jogo em uma dica.
//===============================

  switch (op) {
        case 0:
          if (n >= 10) {
            somaproduto(n); }
          else {
            dicasdificeis(n, x);
                }
          break;
        case 1:
          if (n >= 10) {
            somaproduto(n); }
          else {
            dicasdificeis(n, x);
                }
          break;
        case 2:
        comparaTamanho(n, x);
          break;
        case 3:
        comparaTamanho(n, x);
          break;
        case 4:
        fibonacci(n);
          break;
        case 5:
        fibonacci(n);
          break;
        case 6:
        comparaTamanho(n, x);
          break;
        case 7:
        ultimoDigito(n, x);
          break;
        case 8:
        ultimoDigito(n, x);
          break;
        case 9:
        sinalNumero(x);
          break;
  }
  printf("\n\n");
}