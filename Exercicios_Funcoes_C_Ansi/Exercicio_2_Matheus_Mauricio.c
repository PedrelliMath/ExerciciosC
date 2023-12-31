/*2. Faça uma função que desenhe linhas de caracteres na tela, a função receberá como argumento o tipo de caractere,
 a quantidade de caracteres a ser impressa e o número de linhas que deverá imprimir.*/

#include <stdio.h>

void printLinhas(int qLinhas, int qCaracteres, char caractere);

int main(void){

    int qLinhas = 0,
        qCaracteres = 0;
    
    char caractere;

    printf("Digite o caractere: ");
    scanf("%c", &caractere);

    fflush(stdin);

    printf("Digite a quantidade de caracteres: ");
    scanf("%i", &qCaracteres);

    printf("Digite a quantidade de linhas: ");
    scanf("%i", &qLinhas);

    printLinhas(qLinhas, qCaracteres, caractere);

    return 0;
}


void printLinhas(int qLinhas, int qCaracteres, char caractere){

    for(int i = 0; i < qLinhas; i++){
        for(int j = 0; j < qCaracteres; j++){
            printf("%c ", caractere);
        }
        printf("\n");
    }

}