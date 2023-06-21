/*1. Criar um programa que armazene o nome e a idade de uma lista de pessoas em vetores, 
e calcule a média de idade da lista. (ex: nomes[5][30] –> vetor de 5 nomes)*/

#include <stdio.h>

int main(void){

    int maxChars = 0;
    int maxNames = 0;
    int media = 0;

    printf("Digite a quantidade de nomes: ");
    scanf("%i", &maxNames);

    int idades[maxNames];
    int idadesLen = sizeof(idades)/sizeof(idades[0]);

    printf("Digite a quantidade de caracteres por nome: ");
    scanf("%i", &maxChars);

    char pessoas[maxNames][maxChars];

    for(int i = 0; i < maxNames; i++){
        printf("Digite o nome da pessoa %i: ", i + 1);
        scanf("%s", pessoas[i]);
        printf("Digite a idade da pessoa %i: ", i + 1);
        scanf("%i", &idades[i]);
        media += idades[i];
    }

    for(int i = 0; i < maxNames; i++){
        printf("\nPessoa %i: %s idade: %i", i + 1, pessoas[i], idades[i]);
    }

    printf("\n Media de idade: %.2f", (float)media/idadesLen);

    return 0;
}