/*4. Faça uma função que receba como argumentos os valores dos lados de um triângulo, 
a função deverá retornar 0 se triângulo for equilátero, 1 se for isósceles ou 2 se for escaleno.*/

#include <stdio.h>

int triangulo(int a, int b, int c);

int main(void){

    int a = 0,
        b = 0,
        c = 0;

    printf("\nDigite o primeiro lado do trinagulo: ");
    scanf("%i", &a);

    printf("\nDigite o segundo lado do trinagulo: ");
    scanf("%i", &b);

    printf("\nDigite o terceiro lado do trinagulo: ");
    scanf("%i", &c);

    printf(triangulo(a, b, c) == 2  ? "E um triangulo Escaleno" 
                                    : triangulo(a, b, c) == 1 ? "E um triangulo Isosceles" 
                                    : "E um triiangulio Equilatero" );

    return 0;
}

int triangulo(int a, int b, int c){

    if(a == b && b == c) return 0;
    else if(a == b || a == c || b == c) return 1;
    else return 2;
}