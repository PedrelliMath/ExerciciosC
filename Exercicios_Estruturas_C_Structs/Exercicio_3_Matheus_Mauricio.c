#include <stdio.h>

struct Gavetas{

    char tipo[40];
    int quantidade;
};

struct Gaveteiro{

    struct Gavetas gavetas[2][4];
};

struct Gaveteiro defineTipoDeRoupa(struct Gaveteiro gaveteiro){

    int linha =  0,
        coluna = 0;

    while(1){

        printf("Digite qual gaveta deseja definir o tipo de roupa [linha 0 a 1(enter) coluna 0 a 3(enter)] :\n ");
        scanf("%i %i", &linha, &coluna);

        if(linha > 1 || coluna > 3) printf("Essa gaveta nao existe, digite novamente!\n");
        else break;
    }

    fflush(stdin);

    printf("Agora digite o tipo de roupa: ");
    fgets(gaveteiro.gavetas[linha][coluna].tipo, 40, stdin);

    return gaveteiro;
}

struct Gaveteiro insereRoupa(struct Gaveteiro gaveteiro){

    int linha =  0,
        coluna = 0;

    int quantidade = 0;

    while(1){

        printf("Digite qual gaveta deseja definir o tipo de roupa [linha 0 a 1(enter) coluna 0 a 3(enter)] : \n");
        scanf("%i %i", &linha, &coluna);

        if(linha > 1 || coluna > 3) printf("Essa gaveta nao existe, digite novamente!\n");
        else if(gaveteiro.gavetas[linha][coluna].quantidade > 5) printf("Essa gaveta esta cheia, escolha outra!\n");
        else break;
    }

    fflush(stdin);

    printf("Agora digite a quantidade para inserir: ");

    while(1){

        scanf("%i", &quantidade);

        if(quantidade + gaveteiro.gavetas[linha][coluna].quantidade > 5)printf("A quantidade total nao pode ser mais do que 5! digite novamente\n");
        else break;
    }

    gaveteiro.gavetas[linha][coluna].quantidade += quantidade;

    return gaveteiro;
}

struct Gaveteiro RemoveRoupa(struct Gaveteiro gaveteiro){

    int linha =  0,
        coluna = 0;

    int quantidade = 0;

    while(1){

        printf("Digite qual gaveta deseja definir o tipo de roupa [linha 0 a 1(enter) coluna 0 a 3(enter)] : \n");
        scanf("%i %i", &linha, &coluna);

        if(linha > 1 || coluna > 3) printf("Essa gaveta nao existe, digite novamente!\n");
        else if(gaveteiro.gavetas[linha][coluna].quantidade <= 0){

                printf("Essa gaveta esta vazia!\n");
                return gaveteiro;

        }else break;
    }

    fflush(stdin);

    printf("Agora digite a quantidade para remover: ");

    while(1){

        scanf("%i", &quantidade);

        if(quantidade > gaveteiro.gavetas[linha][coluna].quantidade)printf("Voce nao pode remover mais roupas do que tem na gaveta, digite denovo!\n");
        else break;
    }

    gaveteiro.gavetas[linha][coluna].quantidade -= quantidade;

    return gaveteiro;
}

void menuPrincipal(void){

    
}

int main(void){

    struct Gaveteiro gaveteiro;


}