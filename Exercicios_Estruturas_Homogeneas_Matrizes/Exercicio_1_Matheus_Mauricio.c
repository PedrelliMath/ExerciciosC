/*1. Faça um programa que possua um matriz 3x3 denominado M que armazene 9 números inteiros e valores iniciais 
{1,2,3,4,5,6,7,8,9}. O programa deve executar os seguintes passos:*/

#include <stdio.h>

int main(void){

    int M[3][3] = { {1,2,3},
                    {4,5,6},
                    {7,8,9} };
    
    //(a) Atribua/mude o valor para 50 na linha 2, coluna 2 (quinto elemento) e para 40 na quarta posição da matriz M e mostre na tela.
    M[1][1] = 50;
    M[1][0] = 40;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", M[i][j]);
        }
        printf("\n");
    }


    printf("\n");

    /*(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições M[0][1], M[1][1] e M[2][2] 
    da matriz e mostre na tela esta soma.*/
    int soma = M[0][1] + M[1][1] + M[2][2];
    printf("%i", soma);

    printf("\n");

    //(c) Leia (scanf) novos valores para M nas posições 0 a 6, utilizando FOR.
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == 2 && j == 1) break;

            printf("Digite o Valor para a posicao [%i][%i]: ", i, j);
            scanf("%i", &M[i][j]);
        }
    }

    printf("\n");

    //(d) Mostre na tela toda a matriz, no formato de matrizes (pulando linhas quando necessário) usando FOR
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", M[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //(e) Faça a divisão do último elemento pelo primeiro elemento da matriz M.
    printf("A divisao e: %.2f\n", (float)M[2][2]/M[0][0]);

    int  i = 0,
         j = 0,
         subtracao = 0;

    //(f) Faça a subtração de todos os elementos da matriz com WHILE()
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
