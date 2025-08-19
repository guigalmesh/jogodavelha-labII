#include <stdio.h>
#include <stdlib.h>
#include "tabuleiro.h"

char **aloca_tabuleiro(int m) {
    char** tab = ((char**)malloc(m*sizeof(char*)));
    for (int i = 0; i < m; i++) {
        tab[i] = ((char*)malloc(m*sizeof(char)));
    }
    if (tab==NULL) {
        printf("alocacao deu erro!\n");
        return NULL;
    }
    // colocando espaços em cada elemento da matriz
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            tab[i][j] = 'X';
        }
    }
    return tab;   
}

void libera_tabuleiro(int m, char** tab) {
    for (int i = 0; i < m; i++) {
        free(tab[i]);
    }
    free(tab);
}

void imprime_tabuleiro(int m, char** tab) {
    printf("Tabuleiro: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("  %c  |", tab[i][j]);
        }
        printf("\n");
    }
}