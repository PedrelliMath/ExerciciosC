#include <stdio.h>

int main(void){

    int A[6] = {1,2,3,4,5,6};

    int Alen = sizeof(A)/sizeof(A[0]);

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    int soma = A[0] + A[1] + A[5];
    printf("A soma e: %i", soma);

    printf("\nDigite o novo valor da posicao [3]: ");
    scanf("%i", &A[3]);

    printf("\nDigite o novo valor da posicao [4]: ");
    scanf("%i", &A[4]);


    for(int i = 0; i < Alen; i++){
        printf("%i \n", A[i]);
    }

    for(int i = Alen - 1; i >= 0; i--){
        if(!(i % 2)) printf("\nValor da posicao [%i]: %i", i, A[i]);
    }

    printf("\nA divisao e: %.2f", (float)A[Alen-1]/A[0]);

    int subtracao = A[0];
    int j = 0;

    do{

        if(j > 0) subtracao -= A[j];
        j++;

    }while(j < Alen);

    printf("\nA subtracao e: %i", subtracao);

    return 0;
}