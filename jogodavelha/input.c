#include <stdio.h>


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