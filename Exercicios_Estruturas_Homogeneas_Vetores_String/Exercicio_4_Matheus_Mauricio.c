/*4. Criar um programa que leia uma frase em uma string S[] (use gets(), scanf([] ou fgets()). 
Para as questões abaixo, NÃO devem ser usada funções prontas do C.*/

#include <stdio.h>

int main(void){

    char frase[50];
    char subFrase[50];

    puts("Digite a frase: ");
    fgets(frase, 50, stdin);

    fflush(stdin);

    puts("Digite a palavra que deseja buscar: ");
    fgets(subFrase, 50, stdin);

    fflush(stdin);

    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == '\n'){
            frase[i] = '\0';
            break;
        }
    }

    for(int i = 0; subFrase[i] != '\0'; i++){
        if(subFrase[i] == '\n'){
            subFrase[i] = '\0';
            break;
        }
    }

    /*a. Faça uma busca por uma palavra ou parte dela (sub-string) dentro da string S
     e retorne se encontrou ou não como resultado (mesma lógica da letra “f” da questão 3).*/
    int flag1 = 0;

    for(int i = 0; frase[i] != '\0'; i++){

        int flag2 = 1;

        for(int j = 0; subFrase[j] != '\0'; j++){
            if(frase[i + j] != subFrase[j]){
                flag2 = 0;
                break;
            }
            
        }
        if(flag2){
            flag1 = 1;
            break;
        }
    }

    printf(flag1 ? "Subfrase encontrada\n" : "Subfrase nao encontrada\n");

    /*b. Calcule e exiba o tamanho/quantidade de caracteres da frase/String (mesma lógica da letra “f” da questão 3).*/

    int count = 0;

    for(int i = 0; frase[i] != '\0'; i++){
        if(!(frase[i] == ' ')) count++;
    }

    printf("A frase sem espacos tem %i caracteres\n", count);

    //c. Informe uma segunda frase e faça a comparação se a frase é igual à frase contida na string S.

    char frase2[50];

    puts("Informe a nova frase: ");
    fgets(frase2, 50, stdin);

    fflush(stdin);

    for(int i = 0; frase2[i] != '\0'; i++){
        if(frase2[i] == '\n'){
            frase2[i] = '\0';
            break;
        }
    }

    int flag3 = 0;

    for(int i = 0; frase[i] != '\0'; i++){

        int flag4 = 1;

        for(int j = 0; subFrase[j] != '\0'; j++){
            if(frase[i + j] != subFrase[j]){
                flag4 = 0;
                break;
            }
            
        }
        if(flag4){
            flag3 = 1;
            break;
        }
    }

    printf(flag3 ? "A frase contem a nova frase\n" : "A frase nao contem a nova frase\n");

    /*d. Substitua o valor da string S por “catolica” (não fucionará S = “catolica”, então deverá substituir 
    letra a letra através e adicionar ‘\0’ ao final. Após, testar o tamanho da nova string com a lógica da letra “b”.*/
    char catolica[9] = {'c', 'a', 't', 'o', 'l', 'i', 'c', 'a', '\0'};


    for(int i = 0; i < 9; i++){

        frase[i] = catolica[i];
        if(frase[i] == '\0') break;
    }

    printf("%s", frase);

    int count1 = 0;

    for(int i = 0; frase[i] != '\0'; i++){
        if(!(frase[i] == ' ')) count1++;
    }

    printf("\nTamanho da nova frase: %i", count1);

    return 0;
}