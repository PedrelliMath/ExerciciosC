/*3. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros e valores iniciais 
{1,2,3,4,5,6}. O programa deve executar os seguintes passos:*/

#include <stdio.h>

int main(void){

    int A[6] = {1,2,3,4,5,6};

    int Alen = sizeof(A)/sizeof(A[0]);

    //(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    //(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
    int soma = A[0] + A[1] + A[5];
    printf("A soma e: %i", soma);

    //(c) Modifique o vetor na posição 1, atribuindo a esta posição o valor 10.
    A[1] = 10;

    /*(d) Leia (scanf) novos valores para A nas posições 3 e 4 e mostre na tela cada valor do vetor A 
    (ou seja, todo o vetor A), um em cada linha, utilizando FOR.*/
    printf("\nDigite o novo valor da posicao [3]: ");
    scanf("%i", &A[3]);

    printf("\nDigite o novo valor da posicao [4]: ");
    scanf("%i", &A[4]);


    for(int i = 0; i < Alen; i++){
        printf("%i \n", A[i]);
    }

    //(e) Mostre na tela os números de posições pares e zero, de forma inversa (i == 4,2 e 0) c/ FOR
    for(int i = Alen - 1; i >= 0; i--){
        if(!(i % 2)) printf("\nValor da posicao [%i]: %i", i, A[i]);
    }

    //(f) Faça a divisão do elemento da última posição pela primeira posição do vetor A.
    printf("\nA divisao e: %.2f", (float)A[Alen-1]/A[0]);

    int subtracao = A[0];
    int j = 0;


    //(g) Faça a subtração de todos os elementos do vetor com DO WHILE()
    do{

        if(j > 0) subtracao -= A[j];
        j++;

    }while(j < Alen);

    printf("\nA subtracao e: %i", subtracao);

    return 0;
}