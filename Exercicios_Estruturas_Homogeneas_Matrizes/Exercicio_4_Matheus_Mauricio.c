/*4. Faça um programa que simule um Gaveteiro com 8 gavetas no total, sendo 4 gavetas na 
parte de cima e mais 4 gavetas na parte de baixo do móvel.*/

#include <stdio.h>

void mostraConteudo(void);
void adicionarValor(void);
void removerValor(void);

int gaveteiro[2][4];

int main(void){

    //4.1) Você deve definir inicialmente a quantidade de roupas colocadas em cada gaveta (entre 0 e 5 roupas);
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            gaveteiro [i][j] = 0;
        }
    }
    
    int option = -1;

    //4.2) agora, deve ser solicitado ao usuário se ele deseja retirar ou adicionar roupas e a quantidade desejada.
    printf("******************BEM VINDO AO GAVETEIRO VIRTUAL*********************\n");
    printf("*****************SELECIONE UMA DAS OPCOES ABAIXO*********************\n");
    
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
    int quantidade = 0;

    printf("*****************Esse e seu gaveteiro virtual*********************\n");
    printf("****Cada gaveta representa a quantidade de roupas que tem dentro****\n\n");

    mostraConteudo();

    printf("\nDigite a posicao que deseja adicionar [0 ate 1]enter [0 ate 3]enter : ");
    
    while(1){
        
        scanf("%i %i", &linha, &coluna);
        
        if(linha > 1 || coluna > 3) printf("Essa posicao nao existe, digite outra!\n");
        else if(gaveteiro[linha][coluna] >= 5) printf("Essa posicao ja esta cheia, escolha outra!\n");
        else break;
        
    }
    
    printf("Agora digite o valor para inserir: ");
    
    /*- Quando adicionar, não deve permitir adicionar uma quantidade maior que a disponível na gaveta
    e também informar caso a gaveta esteja cheia (5 roupas). Deve atualizar e mostrar a nova quantidade 
    de roupas disponível nas gavetas e no gaveteiro como um todo.*/
    while(1){
        
        scanf("%i", &quantidade);
        
        if(quantidade + gaveteiro[linha][coluna] > 5){

            printf("A quantidade total nao pode ser mais do que 5! Digite novamente: \n");
            mostraConteudo();
        } 
        else break;
        
    }
    
    gaveteiro[linha][coluna] += quantidade;
    
}

void removerValor(){
    
    int linha = 0;
    int coluna = 0;
    int quantidade = 0;
    
    while(1){
        
        printf("Digite a posicao que deseja remover [0 ate 1]enter [0 ate 3]enter : : ");
        
        scanf("%i %i", &linha, &coluna);
        
        if(linha > 1 || coluna > 3) printf("Essa posicao nao existe, digite outra!\n");
        else if(gaveteiro[linha][coluna] <= 0){
            
            printf("Essa posicao esta vazia\n");
            return;
        } 
        else break;
        
    }
    
    printf("Agora digite o valor para retirar: ");
    

    /*- Quando retirar, não deve permitir retirar uma quantidade maior que a disponível na gaveta
    e também informar caso a gaveta esteja vazia. Deve atualizar e mostrar a nova quantidade de roupas 
    disponível nas gavetas e no gaveteiro como um todo.*/
    while(1){
        
        scanf("%i", &quantidade);
        
        if(quantidade > gaveteiro[linha][coluna]) {
            
            printf("O valor nao pode ser maior que o disponivel na gaveta! Digite outro: \n");
            mostraConteudo();
        }
        else break;
        
    }
    
    gaveteiro[linha][coluna] -= quantidade;
    
    
}


