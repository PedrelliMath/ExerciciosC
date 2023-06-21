/*3. Faça um programa que possua um vetor de caracteres (aka. String) com 7 posições e valor inicial a palavra “OLA”. 
O programa deve executar os seguintes passos:*/

#include <stdio.h>

int main(void){

    char palavra[7] = {'O', 'L', 'A'};
    int palavraLen = sizeof(palavra)/sizeof(palavra[0]);

    printf("%s \n", palavra);

    //(a) Atribua manualmente um a um estes valores ao vetor: ‘b’, ‘r’, ‘a’, ‘s’, ‘i’, ‘l’,’\0’.
    palavra[0] = 'b';
    palavra[1] = 'r';
    palavra[2] = 'a';
    palavra[3] = 's';
    palavra[4] = 'i';
    palavra[5] = 'l';
    palavra[6] = '\0';

    int i = 0;

    //(b) Mostre na tela a palavra/vetor, utilizando WHILE() para imprimir letra por letra
    while(i < palavraLen){
        printf("%c\n", palavra[i]);
        i++;
    }

    //(c) Converta a palavra para maiúsculo utilizando valores TABELA ASCII
    for(int i = 0; i < palavraLen; i++){ 
        if(palavra[i] == '\0') break;
        palavra[i] -= 32;
        printf("%c\n", palavra[i]);
    }

    printf("\n");

    //(d) Substitua as letras ‘A’ pelo número 4 e “I’ pelo número 1
    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == 'A') palavra[i] = '4';
        if(palavra[i] == 'I') palavra[i] = '1';
        printf("%c\n", palavra[i]);
    }


    printf("\n");

    //(e) Exclua a última letra da palavra, utilizando caractere terminador (identifica o final da String)
    palavra[palavraLen - 2] = '\0';

    for(int i = 0; palavra[i] != '\0'; i++){
        printf("%c\n", palavra[i]);
    }

    printf("\n");

    //(f) Calcule o tamanho preenchido do Vetor (Tamanho da palavra), percorrendo-a com FOR
    int count = 0;
    for(int i = 0; palavra[i] != '\0'; i++){
        count++;
    }

    printf("Tamanho preenhido: %i", count);
    printf("\n");

    char letras[3];

    //(g) Leia (scanf) duas letras juntas (ex: “R4” em “BR4S1L”) e informe se encontrou ou não
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