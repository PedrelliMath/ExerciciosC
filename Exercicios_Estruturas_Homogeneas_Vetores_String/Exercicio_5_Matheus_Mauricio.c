#include <stdio.h>
#include <stdlib.h>

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