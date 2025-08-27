#include <stdio.h>

int main(){
  int num1, pontuacao;
  char resp = 's';

  pontuacao = 0;
  

  do{
    printf("Vamos comecar o jogo! Descubra a regra para adquirir 1 ponto, ao atingir 5 pontos voce se torna o vencedor! \n Digite um numero: ");
    scanf("%d", &num1);
    
    if(num1 % 3 == 0){
      ++pontuacao;
      printf("Parabens, acertou! %d pontos \n", pontuacao);
    }
    else{
      --pontuacao;
      printf("Esse numero nao pertence a regra! %d pontos\n", pontuacao);
    }
    if (pontuacao<0){
      printf("Voce perdeu!\n Gostaria de reiniciar o jogo? s/n \n");
      scanf(" %c", &resp);

      if(resp == 's'){
        pontuacao = 0;
      }

    }

  }
  while (pontuacao>=0 && pontuacao!=5);
  return 0;
}