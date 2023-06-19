#include <stdio.h>

int main(void){


    int vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char palavra[11];
    int flagVogal = 0;
    int consoantes = 0;


    printf("Digite a palavra de no maximo 10 caracteres: ");
    scanf("%s", palavra);

    for(int i = 0; palavra[i] != '\0'; i++){

        flagVogal = 0;

        for(int j = 0; j < 10; j++){
            if(palavra[i] == vogais[j]){
                flagVogal = 1;
                break;
            }
        }

        if(!flagVogal){
            consoantes++;
        }
    }

    printf("Quantidade de consoantes: %i", consoantes);


    return 0;
}