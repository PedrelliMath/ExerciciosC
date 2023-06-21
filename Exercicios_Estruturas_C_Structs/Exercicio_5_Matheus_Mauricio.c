#include <stdio.h>
#include <string.h>

int comparaStrings(const char string1[], const char string2[]);

struct Gavetas{

    char tipo[40];
    int quantidade = 0;
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
    scanf("%s", gaveteiro.gavetas[linha][coluna].tipo);

    return gaveteiro;
}

struct Gaveteiro insereRoupa(struct Gaveteiro gaveteiro){

    int linha =  0,
        coluna = 0;

    int quantidade = 0;
    char tipo[50];

    while(1){

        printf("Digite qual gaveta deseja inserir roupas [linha 0 a 1(enter) coluna 0 a 3(enter)] : \n");
        scanf("%i %i", &linha, &coluna);

        if(linha > 1 || coluna > 3) printf("Essa gaveta nao existe, digite novamente!\n");
        else if(gaveteiro.gavetas[linha][coluna].quantidade > 5) printf("Essa gaveta esta cheia, escolha outra!\n");
        else break;
    }
    
    fflush(stdin);
    
    while(1){
    	
    	printf("Agora digite o tipo de roupa que deseja inserir: ");
    	scanf("%s", tipo);
    	
    	if(!(comparaStrings(tipo, gaveteiro.gavetas[linha][coluna].tipo))) printf("Voce nao pode colocar esse tipo de roupas nessa gaveta\n");
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

        printf("Digite qual gaveta deseja remover roupas [linha 0 a 1(enter) coluna 0 a 3(enter)] : \n");
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

void mostraGavetas(struct Gaveteiro gaveteiro){

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){

            printf("%i ", gaveteiro.gavetas[i][j].quantidade);
        }
        printf("\n");
    }
}

void mostraTipoDeRoupa(struct Gaveteiro gaveteiro){

    int linha =  0,
        coluna = 0;

    printf("Digite qual gaveta deseja ver o tipo [linha 0 a 1(enter) coluna 0 a 3(enter)] : \n");

    while(1){
    	
		scanf("%i %i", &linha, &coluna);
		
        if(linha > 1 || coluna > 3) printf("Essa gaveta nao existe, digite novamente!\n");
        else break; 
    }

    printf("Essa gaveta tem %s \n", gaveteiro.gavetas[linha][coluna].tipo);
    
}

void menuPrincipal(void){

    printf("1 - Definir tipo de roupa da gaveta\n");
    printf("2 - Inserir roupa no gaveteiro\n");
    printf("3 - Remover roupa do gaveteiro\n");    
    printf("4 - Mostrar tipo de roupa da gaveta\n");    
}

int main(void){
   
	struct Gaveteiro gaveteiro = {
		
    	{{{"meias", 0}, {"blusa", 0}, {"taolha", 0}, {"moletom", 0}},
        {{"camisa", 0}, {"camiseta", 0}, {"cueca", 0}, {"shorts", 0}}}
	};
    
    int option = 0;

    while(1){

        printf("Escolha uma das opcoes abaixo: \n");
        menuPrincipal();
        scanf("%i", &option);

        switch(option){

            case 1: gaveteiro = defineTipoDeRoupa(gaveteiro); mostraGavetas(gaveteiro); break;
            case 2: gaveteiro = insereRoupa(gaveteiro); mostraGavetas(gaveteiro);       break;
            case 3: gaveteiro = RemoveRoupa(gaveteiro); mostraGavetas(gaveteiro);       break; 
			case 4: mostraTipoDeRoupa(gaveteiro);     									break;
            default: printf("Opcao Invalida"); 											break;       
        }


    }

}

int comparaStrings(const char string1[], const char string2[]) {
	
    int i = 0;
    
    while (string1[i] != '\0' && string2[i] != '\0') {
    	
        if(string1[i] != string2[i]) {
            return 0;
        }
        
        i++;
    }
     
    if(string1[i] == '\0' && string2[i] == '\0') return 1;
    else return 0;
}