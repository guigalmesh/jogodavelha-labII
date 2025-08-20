#include <stdio.h>
#include <stdlib.h>
#include "tabuleiro.h"

char **aloca_tabuleiro(int tam) {
    char** tab = ((char**)malloc(tam*sizeof(char*)));
    for (int i = 0; i < tam; i++) {
        tab[i] = ((char*)malloc(tam*sizeof(char)));
    }
    if (tab==NULL) {
        printf("alocacao deu erro!\n");
        return NULL;
    }
    // colocando espaços em cada elemento da matriz
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            tab[i][j] = ' ';
        }
    }
    return tab;   
}

void realiza_movimentoCirculo(int coords[2], char** tab){
    int coordx = coords[0];
    int coordy = coords[1];
    tab[coordx][coordy] = 'O';
    return;
}

void realiza_movimentoXis(int coords[2], char** tab){
    int coordx = coords[0];
    int coordy = coords[1];
    tab[coordx][coordy] = 'X';
    return;
}

void libera_tabuleiro(int tam, char** tab) {
    for (int i = 0; i < tam; i++) {
        free(tab[i]);
    }
    free(tab);
}

void imprime_tabuleiro(int tam, char** tab) {
    printf("Tabuleiro: \n");
    for(int linha = 0; linha < tam; linha++){
        int cont = 0;
        for(int coluna = 0; coluna < tam; coluna++){
            cont++;
            printf("%5c", tab[linha][coluna]);
        }
        printf("\n");
    }
}