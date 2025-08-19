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
    } else {
        return tab;
    }    
}