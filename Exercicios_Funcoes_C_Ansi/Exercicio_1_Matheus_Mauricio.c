#include <stdio.h>

int func(int num);

int main(void){

    int num = 0;

    printf("Digite o numero: ");
    scanf("%i", &num);

    printf("Retorno da funcao: %i", func(num));

    return 0;
}

int func(int num){
    return num % 2 ? 1 : 0;
}