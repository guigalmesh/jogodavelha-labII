#include <stdio.h>
#include <stdbool.h>

int input_tamanhoTabuleiro(){
    int n;
    do{
        printf("Insira o tamanho do tabuleiro:\n");
        scanf("%d", &n);
        if(n < 3)
            printf("O tabuleiro precisa ser pelo menos 3 x 3\n");
    }while(n<3);
    return n;
}

void input_movimentoJogador(int n, int *x, int *y){
    bool validInput_flag = false;
    do{
        printf("Insira as coordenadas onde deseja jogar: \n");
        scanf("%d %d", &x, &y);
        if(x > n || y > n || x < 0 || y < 0){
            printf("Insira coordenadas válidas\n");
        }
        else
            validInput_flag = true;

    }while(!validInput_flag);
}