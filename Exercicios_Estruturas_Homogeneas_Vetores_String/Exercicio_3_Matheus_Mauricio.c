#include <stdio.h>

int main(void){

    char palavra[7] = {'O', 'L', 'A'};
    int palavraLen = sizeof(palavra)/sizeof(palavra[0]);

    printf("%s \n", palavra);

    palavra[0] = 'b';
    palavra[1] = 'r';
    palavra[2] = 'a';
    palavra[3] = 's';
    palavra[4] = 'i';
    palavra[5] = 'l';
    palavra[6] = '\0';

    int i = 0;

    while(i < palavraLen){
        printf("%c\n", palavra[i]);
        i++;
    }

    for(int i = 0; i < palavraLen; i++){
        if(palavra[i] == '\0') break;
        palavra[i] -= 32;
        printf("%c\n", palavra[i]);
    }

    printf("\n");

    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == 'A') palavra[i] = '4';
        if(palavra[i] == 'I') palavra[i] = '1';
        printf("%c\n", palavra[i]);
    }


    printf("\n");

    palavra[palavraLen - 2] = '\0';

    for(int i = 0; palavra[i] != '\0'; i++){
        printf("%c\n", palavra[i]);
    }

    printf("\n");

    int count = 0;
    for(int i = 0; palavra[i] != '\0'; i++){
        count++;
    }

    printf("Tamanho preenhido: %i", count);
    printf("\n");

    char letras[3];

    printf("Digite as letras: ");
    scanf("%s", letras);

    int flag = 0;

    for(int i = 0; palavra[i] != '\0'; i++) {
        for (int j = 0; letras[j] != '\0'; j++) {

            if (letras[j] == palavra[i] && letras[j+1] == palavra[i+1]){
                flag = 1;
                break;
            }
 
            if(flag) break;

        }

        if(flag) break;

    }

    printf(flag ? "Sequencia encontrada" : "Sequencia nao encontrada");


    return 0;
}