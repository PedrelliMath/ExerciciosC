#include <stdio.h>
#include <stdlib.h>

int main(void){

    char palavra[50];

    puts("Digite as 3 palavras separadas por espaco: ");
    fgets(palavra, 50, stdin);

    int count = 0;
    int aux = 0;

    for(int i = 0; palavra[i] != '\0'; i++){

        if(palavra[i] == ' ' || palavra[i] == '\n') {
            printf("Palavra %i, tamanho: %i \n", ++aux, count);
            count = 0;
            
        }else count++;
        
    }

    return 0;
}