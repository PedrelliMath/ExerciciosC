#include <stdio.h>

int main(void){

    int M[3][3] = { {1,2,3},
                    {4,5,6},
                    {7,8,9} };
    
    M[1][1] = 50;
    M[1][0] = 40;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", M[i][j]);
        }
        printf("\n");
    }


    printf("\n");

    int soma = M[0][1] + M[1][1] + M[2][2];
    printf("%i", soma);

    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == 2 && j == 1) break;

            printf("Digite o Valor para a posicao [%i][%i]: ", i, j);
            scanf("%i", &M[i][j]);
        }
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", M[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int  i = 0,
         j = 0,
         subtracao = 0;


    while(i <3){

        j = 0;

        while(j < 3){
            if(i == 0 && j == 0) subtracao = M[0][0];
            else{
                subtracao -= M[i][j];
            }
            j++;
        }
        i++;
    }

    printf("A subtracao e: %i", subtracao);


    return 0;
}
