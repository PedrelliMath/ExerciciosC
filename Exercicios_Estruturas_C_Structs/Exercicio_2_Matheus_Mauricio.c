/*4. Construa um programa que define um tipo novo de dados, para uma estrutura de um animal,
deverá conter atributos como: raça, cor, peso e sexo. Também uma função entrada de dados e uma função de saída de dados.*/

#include <stdio.h>

void menu(void);
void submenuEntrada(void);
void submenuSaida(void);
void recebeRaca(void);
void recebeCor(void);
void recebePeso(void);
void recebeSexo(void);
void mostraRaca(void);
void mostraCor(void);
void mostraPeso(void);
void mostraSexo(void);

struct Animal{

    char raca[50];
    char cor[50];
    int peso;
    char sexo;
};

struct Animal animal;

int main(void){
 
    int option = 0;

    while(1){

        printf("\nDigite CTRL+C para sair\n");

        menu();

        fflush(stdin);

        printf("\nDigite a opcao desejada: \n");
        scanf("%i", &option);

        fflush(stdin);

        switch(option){
            case 1: submenuEntrada(); break;
            case 2: submenuSaida(); break;
            default: printf("Opcao nao existe!\n"); break;
        }

    }

    return 0;
}

void menu(void){

    printf("1 - Entrada de dados\n");
    printf("2 - Saida de dados\n");
}

void submenuEntrada(void){

    fflush(stdin);

    int subOption = 0;

    printf("\n1 - raca\n");
    printf("2 - cor\n");
    printf("3 - peso\n");
    printf("4 - sexo\n");

    scanf("%i", &subOption);

    fflush(stdin);

    switch(subOption){

        case 1: recebeRaca(); break;
        case 2: recebeCor(); break;
        case 3: recebePeso(); break;
        case 4: recebeSexo(); break;
        default: printf("opcao nao existe\n"); break;
    }
}

void submenuSaida(void){

    fflush(stdin);

    int subOption = 0;

    printf("\n1 - raca\n");
    printf("2 - cor\n");
    printf("3 - peso\n");
    printf("4 - sexo\n");

    scanf("%i", &subOption);

    fflush(stdin);

    switch(subOption){

        case 1: mostraRaca(); break;
        case 2: mostraCor(); break;
        case 3: mostraPeso(); break;
        case 4: mostraSexo(); break;
        default: printf("opcao nao existe\n"); break;
    }

    fflush(stdin);
}

void recebeRaca(void){

    fflush(stdin);

    printf("\nDigite a raca: ");
    fgets(animal.raca, 50, stdin);
}

void recebeCor(void){

    fflush(stdin);

    printf("\nDigite a cor: ");
    fgets(animal.cor, 50, stdin);
}

void recebePeso(void){

    fflush(stdin);

    printf("\nDigite o peso: ");
    scanf("%i", &animal.peso);
}

void recebeSexo(void){

    fflush(stdin);

    printf("\nDigite o sexo: ");
    scanf("%c", &animal.sexo);
}

void mostraRaca(void){

    printf("\nA raca do animal e: %s", animal.raca);
}

void mostraCor(void){

    printf("\nA cor do animal e: %s", animal.cor);
}

void mostraPeso(void){

    printf("\nO peso do animal e: %i", animal.peso);
}

void mostraSexo(void){

    printf("\nO sexo do animal e: %s", animal.sexo == 'm'   ? "Masculino"
                                                            : animal.sexo == 'f' ? "Feminino" 
                                                            : "Nao informado");
}