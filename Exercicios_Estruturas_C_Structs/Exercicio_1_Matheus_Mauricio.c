#include <stdio.h>

int main(void){

    struct Pessoa{

        char nome[50];
        int idade;
    };
    
    struct Pessoa Pessoa1;

    printf("Digite o nome da pessoa1: ");
    scanf("%s", Pessoa1.nome);

    printf("Agora digite a idade da pessoa1: ");
    scanf("%i", &Pessoa1.idade);

    printf("O nome da Pessoa1 e: %s\n", Pessoa1.nome);
    printf("A idade da Pessoa1 e: %i\n", Pessoa1.idade);

    return 0;
}