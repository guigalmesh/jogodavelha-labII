#include <stdio.h>
#include <stdbool.h>

int input_tamanhoTabuleiro(){
    int tam;
    do{
        printf("Insira o tamanho do tabuleiro:\n");
        scanf("%d", &tam);
        if(tam < 3)
            printf("O tabuleiro precisa ser pelo menos 3 x 3\n");
    }while(tam < 3);
    return tam;
}

void input_movimentoJogador(int n, int coords[2]){
    do{
        printf("Insira as coordenadas onde deseja jogar: \n");
        scanf("%d %d", &coords[0], &coords[1]);
        if(coords[0] > n || coords[1] > n || coords[0] < 0 || coords[1] < 0){
            printf("Insira coordenadas válidas\n");
        }
        else
            return;

    }while(true);
}