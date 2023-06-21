/*1. Construa um algoritmo que leia (scanf) um vetor de 5 números inteiros e mostre a

soma dos números e os valores do vetor. (Use forma contraída para realizar a soma).*/

#include <stdio.h>

int main(void){

    int vetor[5] = {0};
    int soma = 0;

    int vetorlen = sizeof(vetor)/sizeof(vetor[0]);

    for(int i = 0; i < vetorlen; i++){
        printf("Digite o numero %i do vetor: ", i + 1);
        scanf("%i", &vetor[i]);
        
        soma += vetor[i];
    }

    for(int i = 0; i < vetorlen; i++){
        printf(i < vetorlen - 1 ? "%i, " : "%i ", vetor[i]);
    }

    printf("\n a soma e: %i", soma);

    return 0;
}