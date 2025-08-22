#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade>=18 && idade < 65){
        printf("Você é maior de idade!");
    
    }else if(idade>=65){
        printf("Você tem 65 anos ou mais!");
    
    }else{
        printf("Você é menor de idade!");
    }
    return 0;
}