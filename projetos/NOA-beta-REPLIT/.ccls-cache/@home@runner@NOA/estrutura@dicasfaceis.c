// FUNÇÃO PENSADA PARA 10 DICAS DIFERENTES ('case's de 0 a 9).
// Variáveis: 'n' para o número sorteado e 'x' para o número escolhido pelo jogador.
// Cada vez que uma dica aparece dentro de um 'case', sua probabilidade de aparecer aumenta em '1/DICAS';

#define DICAS 9
#define TESTE 5

void dicasfaceis (n, x) {
  int op, probdic, r;
  
  op = rand()%DICAS;

  //============DEBUG==============
  //printf("DICA FÁCIL NÚMERO '%d'\n", op);  // Exibe qual case foi escolhido.
  //op = TESTE;                        // Fixa o jogo em uma dica.
  //===============================

  r++;

  if (r < 2) {
  switch (op) {             
        case 0:
         binario(n);
    break;
        case 1:
         binario(n);
    break;
        case 2:
          binario(n);
    break;
        case 3:
          binario(n);
    break;
        case 4:
          binario(n);
    break;
        case 5:
          fibonacci(n);
    break;
        case 6:
          fibonacci(n);
    break;
        case 7:
          fibonacci(n);
    break;
        case 8:
          fibonacci(n);
    break;
        case 9:
          fibonacci(n);
    break;
  } 
} else {
    dicasdificeis(n, x); 
  } 
printf("\n\n");
}