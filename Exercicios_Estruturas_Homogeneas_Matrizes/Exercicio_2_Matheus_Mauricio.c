/*2. Construa um algoritmo que leia duas matrizes 3x3 e gere uma terceira matriz com a soma dos elementos correspondentes de a e b.*/

#include <stdio.h>

int main(void){

    int A[3][3],
        B[3][3],
        C[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            printf("\nDigite o valor da posicao [%i][%i] da matriz A: ", i, j);
            scanf("%i", &A[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            printf("\nDigite o valor da posicao [%i][%i] da matriz B: ", i, j);
            scanf("%i", &B[i][j]);
        }
    }

     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}