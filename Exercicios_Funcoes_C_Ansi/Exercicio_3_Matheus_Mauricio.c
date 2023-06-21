/*3. Fazer um programa que possibilite várias opções de cálculos a partir de um menu. 
O programa chamará a função correspondente a cada cálculo.*/

#include <stdio.h>

void menu(void);
void a(void);
void b(void);
void c(void);

int main(void){

    char option;

    while(option != 'f'){

        menu();
        scanf("%c", &option);  

        switch(option){

            case 'a': a(); break;
            case 'b': b(); break;
            case 'c': c(); break;
            case 'e': e(); break;
            case 'f': break;
            default: break;
        }

    }

    return 0;
}

void menu(void){

    printf("Escolha uma das opcoes abaixo: \n");
    printf("[a]\n");
    printf("[b]\n");
    printf("[c]\n");
    printf("[d]\n");
    printf("[e]\n");
    printf("[f] Sair\n");
}

//[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50
void a(void){

    float result = 0;
    int a = 1,
        b = 1;

    while(a <= 99 && b <= 50){

        printf("%i / %i\n", a , b);
        result += (float) a/b;
        a += 2;
        b++;
    }

    printf("O resultado de [a] e: %.2f\n", result);

    fflush(stdin);

}

//[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
void b(void){

    float result = 0;

    for(int i = 1; i <= 10; i++){
        
        printf("%i / %i\n", i, i);

        if(i % 2 == 0) result -= (float)i/i;
        else result += (float)i/i;

    }

    printf("O resultado de [a] e: %.2f\n", result);

    fflush(stdin);
}


//[ c ] S = 1000/1 - 997/2 + 994/3.........
void c(void){

    float result = 0;


    for(int i = 1000, j = 1; i >= 0 && j <= 20; i -= 3, j++){
        
        printf("%i / %i\n", i, j);

        if(j % 2 == 0) result -= (float)i/j;
        else result += (float)i/j;

    }

    printf("O resultado de [a] e: %.2f\n", result);

    fflush(stdin);
}


//[ d ] S = 480/10 - 475/11 + 470/12 - .......
void e(void){

    float result = 0;


    for(int i = 480, j = 10; i >= 0 && j <= 20; i -= 5, j++){
        
        printf("%i / %i\n", i, j);

        if(j % 2 == 0) result -= (float)i/j;
        else result += (float)i/j;

    }

    printf("O resultado de [a] e: %.2f\n", result);

    fflush(stdin);
}