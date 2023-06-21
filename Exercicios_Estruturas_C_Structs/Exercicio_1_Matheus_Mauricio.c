////1. Construa um programa que define uma estrutura de tipo pessoa.

#include <stdio.h>

int main(void){

    struct Pessoa{

        char nome[50];
        int idade;
    };
    
    struct Pessoa Pessoa1;

    //2. Construa um programa que solicite inserção de dados para a estrutura de tipo pessoa.

    printf("Digite o nome da pessoa1: ");
    scanf("%s", Pessoa1.nome);

    printf("Agora digite a idade da pessoa1: ");
    scanf("%i", &Pessoa1.idade);

    //3. Construa um programa que imprime a estrutura tipo pessoa.

    printf("O nome da Pessoa1 e: %s\n", Pessoa1.nome);
    printf("A idade da Pessoa1 e: %i\n", Pessoa1.idade);

    return 0;
}