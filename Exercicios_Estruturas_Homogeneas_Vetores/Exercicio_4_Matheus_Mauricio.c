#include <stdio.h>

int main(void){

    int numEnvs = 0;

    printf("Digite o numero de ambientes: ");
    scanf("%i", &numEnvs);

    int envTemps[numEnvs];
    int envTempslen = sizeof(envTemps)/sizeof(envTemps[0]);
    int soma = 0;

    for(int i = 0; i < envTempslen; i++){
        printf("\nQual a temperatura do ambiente %i ?: ", i + 1);
        scanf("%i", &envTemps[i]);
        soma += envTemps[i];
    }

    printf("\n A temperatura media e %.2f C", (float) soma/numEnvs);

    return 0;
}