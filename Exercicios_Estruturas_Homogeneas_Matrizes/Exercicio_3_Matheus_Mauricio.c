/*3. Construa um algoritmo que leia uma matriz quadrada de ordem 4. Leia uma constante K, 
multiplique a diagonal principal por esta constante e imprima a matriz multiplicada.*/

#include <stdio.h>

int main(void){

    int A[4][4];
    int k = 0;

    printf("Digite a constante K: ");
    scanf("%i", &k);
 
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){

            printf("\nDigite o valor da posicao [%i][%i] da matriz A: ", i, j);
            scanf("%i", &A[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){

            if(i == j) A[i][j] *= k;
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}