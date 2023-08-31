// Compara o tamanho do valor sorteado com o valor escolhido pelo usuário
// e apresenta a dica baseada no teste lógico.

int comparaTamanho(int sorteado, int escolhido){
  if(sorteado>escolhido){
    printf("O número %d é menor que o número sorteado.\n",escolhido);
  }else if(sorteado<escolhido){
    printf("O número %d é maior que o número sorteado.\n",escolhido);
  }
}