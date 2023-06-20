#include <stdio.h>

void mostraConteudo(void);
void adicionarValor(void);
void removerValor(void);

int gaveteiro[2][4];

int main(void){

    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            gaveteiro [i][j] = 0;
        }
    }
    
    int option = -1;
    
    while(option != 0){
        
        printf("\n1 - Inserir no gaveteiro");
        printf("\n2 - Remover do gaveteiro");
        printf("\n0 - Sair\n");
        
        scanf("%i", &option);
        
        switch(option){
            
            case 1: adicionarValor(); break;
            case 2: removerValor(); break;
            case 0: break;
            
        }
        
        mostraConteudo();
        
    }
    
}


void mostraConteudo(void){
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("|%i|", gaveteiro[i][j]);
        }
        printf("\n");
    }
}

void adicionarValor(void){
    
    int linha = 0;
    int coluna = 0;
    int valor = 0;
    
    printf("Digite a posicao que deseja adicionar formato [][] : ");
    
    while(1){
        
        scanf("%i %i", &linha, &coluna);
        
        if(linha > 1 || coluna > 3) printf("Essa posicao nao existe, digite outra!\n");
        else if(gaveteiro[linha][coluna] >= 5) printf("Essa posicao ja esta cheia, escolha outra!\n");
        else break;
        
    }
    
    printf("Agora digite o valor para inserir: ");
    
    while(1){
        
        scanf("%i", &valor);
        
        if(valor > 5) printf("O valor não pode ser maior que 5!\n");
        else break;
        
    }
    
    gaveteiro[linha][coluna] += valor;
    
}

void removerValor(){
    
    int linha = 0;
    int coluna = 0;
    int quantidade = 0;
    
    while(1){
        
        printf("Digite a posicao que deseja remover formato [][] : ");
        
        scanf("%i %i", &linha, &coluna);
        
        if(linha > 1 || coluna > 3) printf("Essa posicao nao existe, digite outra!\n");
        else if(gaveteiro[linha][coluna] <= 0){
            
            printf("Essa posicao esta vazia\n");
            return;
        } 
        else break;
        
    }
    
    printf("Agora digite o valor para retirar: ");
    
    while(1){
        
        scanf("%i", &quantidade);
        
        if(quantidade > gaveteiro[linha][coluna]) {
            
            printf("O valor não pode ser maior que o disponivel na gaveta!\n");
            mostraConteudo();
        }
        else break;
        
    }
    
    gaveteiro[linha][coluna] -= quantidade;
    
    
}


