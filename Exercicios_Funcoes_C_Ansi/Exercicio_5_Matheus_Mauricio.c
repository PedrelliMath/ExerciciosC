/*5. Faça um programa que simule uma calculadora. Deverão ser solicitados 2 números e a operação desejada. 
Para cada operação, deverá ser chamada uma função diferente [ex: int soma(n1,n2), float divisao(n1,n2) ]. 
A função deverá receber como parâmetros os 2 números e deverá retornar o resultado (atenção para a divisão que tem que ser float).*/

#include <stdio.h>

int soma(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
float div(int a, int b);

int main(void){


    int N1 = 0,
        N2 = 0;
    
    char op;

    while(1){

        printf("Digite CTRL+C para encerrar\n");
        
        printf("Digite os numeros (numero + enteder) , (numero + enter): ");
        scanf("%i %i", &N1, &N2);

        fflush(stdin);

        printf("\nAgora digite a operacao: ");
        scanf("%c", &op);

        switch(op){

            case '+': printf("%i \n", soma(N1, N2)); break;
            case '-': printf("%i \n", sub(N1, N2)); break;
            case '*': printf("%i \n", mult(N1, N2)); break;
            case '/': printf("%.2f \n", div(N1, N2)); break;
            default: printf("Opcao invalida\n"); break;
        }

        fflush(stdin);
    }

    return 0;
}

int soma(int a, int b){

    return a+b;
}

int sub(int a, int b){

    return a-b;
}

int mult(int a, int b){

    return a*b;
}

float div(int a, int b){

    return (float)a/b;
}

