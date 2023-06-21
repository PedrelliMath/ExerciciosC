/*2. Construa um algoritmo que leia um vetor de 5 números reais e mostre-os na ordem inversa.*/

#include <stdio.h>

int main(void){

    int vetor[5] = {0};

    int vetorlen = sizeof(vetor)/sizeof(vetor[0]);

    for(int i = 0; i < vetorlen; i++){
        printf("Digite o numero %i do vetor: ", i + 1);
        scanf("%i", &vetor[i]);
        
    }

    for(int i = vetorlen - 1; i >= 0; i--){
        printf(i > 0 ? "%i, " : "%i ", vetor[i]);
    }

    return 0;
}