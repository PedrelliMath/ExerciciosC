/*5. Criar um programa que leia uma palavra com fgets(), guarde na variável palavra e imprima na tela o seguinte texto (tudo na mesma linha):

Saída ----> “Palavra <palavra> lida com fgets()”.

(dica: Será necessário retirar o ‘\n’ ao final da variável <palavra>).*/

#include <stdio.h>

int main(void){

    char palavra[50];

    puts("Digite a palavra ");
    fgets(palavra, 50, stdin);

    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == '\n'){
            palavra[i] = '\0';
            break;
        }    
    }

    printf("Palavra %s lida com fgets()", palavra);

    return 0;
}