void parImp(int sorteado){
  if(sorteado%2==0){
    printf("O número sorteado é par\n");
  }else{
    printf("O número sorteado é ímpar\n");
  }
}

void binario(int sorteado){
  printf("O número sorteado em binário é %b",sorteado);
}


int primo(int sorteado){
   int primo=0;
   for(int i=2;i<101;i++){
     if(i!=sorteado && sorteado%i==0 || sorteado<0 || sorteado==1){
       primo=0;
       break;
     }else{
       primo=1;
     }    
    }
   if(primo==0){
       return 0;
     }else{
       return 1;
     }
  }

void multiplo(int sorteado){
  if(primo(sorteado)==0){
    int divisores[4]={2,3,5,7},maior=0;
    for(int i=3;i>=0;i--){
      if(sorteado==0){
        printf("O número sorteado é múltiplo de todos os números\n");
        break;
      }else if(sorteado%divisores[i]==0){
        printf("O número sorteado é múltiplo de %d\n",divisores[i]);
        break;
      }else if(sorteado==1){
        printf("O número sorteado é apenas múltiplo dele mesmo\n");
        break;
      }
    }
  }else{
    printf("O número é primo\n");
  }
}

void ultimoDigito(int sorteado){
  printf("O último digito do número sorteado é %d\n",sorteado%10);
}

void sinalNumero(int sorteado){
  if(sorteado<0){
    printf("O número sorteado é negativo\n");
  }else{
    printf("O número sorteado é positivo\n");
  }
}
