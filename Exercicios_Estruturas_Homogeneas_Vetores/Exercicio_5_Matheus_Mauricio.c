#include <stdio.h>

int main(void){

    int numPratos = 0;

    printf("Digite o numero de pratos: ");
    scanf("%i", &numPratos);

    fflush(stdin);

    char pilha[numPratos];
    int pilhaLen = sizeof(pilha)/sizeof(pilha[0]);

    for(int i = 0; i < pilhaLen; i++){
        pilha[i] = '.';
    }

    char option;
    int aux = pilhaLen - 1;

    while(option != 's'){
        printf("\nAdicionar prato, digite A");
        printf("\nRemover prato, digite R");
        printf("\nSair, digite S\n");
        scanf("%c", &option);

        fflush(stdin);

        switch(option){

            case 'a': 
        
                pilha[aux] = '_';
                aux--;
                if(aux <= 0) aux = 0;

                for(int i = 0; i < pilhaLen; i++){
                    printf("%c\n", pilha[i]);
                }

                break;
            
            case 'r': 
        
                pilha[aux] = '.';
                aux++;
                if(aux > (pilhaLen - 1)) aux = (pilhaLen - 1);

                for(int i = 0; i < pilhaLen; i++){
                    printf("%c\n", pilha[i]);
                }

                break;

            case 's': break;
        }
 
        fflush(stdin);

    }

    return 0;
}