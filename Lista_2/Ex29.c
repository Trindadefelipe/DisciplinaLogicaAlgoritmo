#include <stdio.h>

int main(){
  int idade, tcontribuicao;

  printf("Digite sua idade:");
  scanf("%d", &idade);
  printf("Digite seu tempo de contribuição:");
  scanf("%d", &tcontribuicao);

  if(idade >= 65 || tcontribuicao >= 30 || idade+tcontribuicao >= 95){
    printf("Aposentado!");
  } else {
    printf("Aposentadoria Negada!");
  }


  return 0;

}
