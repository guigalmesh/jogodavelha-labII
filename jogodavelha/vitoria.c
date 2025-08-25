#include <stdbool.h>
#include <stdio.h>
#include "logica.h"

bool teste_sequencia(int i, int j, int *contX, int *contO, char**tab){
    if (tab[i][j] == 'O') {
                *contX = 0;
                (*contO)++;
    }
    if (tab[i][j] == 'X') {
                *contO = 0;
                (*contX)++;
    }
    if(tab[i][j] == ' '){
                *contO = 0;
                (*contX) = 0;
    }
}

bool check_horizontal(int tam, char** tab){
    int contX = 0, contO = 0;
    int *pcontX = &contX, *pcontO = &contO;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++)
           teste_sequencia(i, j, pcontX, pcontO, tab);
        if (contX == tam || contO == tam) 
            return true;
        *pcontX = 0;
        *pcontO = 0;
    }
    return false;
}

bool check_vertical(int tam, char** tab){
    int contX = 0, contO = 0;
    int *pcontX = &contX, *pcontO = &contO;
    for (int j = 0; j < tam; j++) {
        for (int i = 0; i < tam; i++) 
            teste_sequencia(i, j, pcontX, pcontO, tab);
        if (contX == tam || contO == tam) 
            return true;
    }
    return false;
}

bool check_diagonalPrimaria(int tam, char** tab){
    int contX=0, contO=0;
    int *pcontX = &contX, *pcontO = &contO;
    for (int i = 0; i < tam; i++) {
        teste_sequencia(i, i, pcontX, pcontO, tab);
        if (contX == tam || contO == tam)
            return true;
    }
    return false;
}

bool check_diagonalSecundaria(int tam, char** tab){
    int contX=0, contO=0;
    int *pcontX = &contX, *pcontO = &contO;
    for (int i = 0, j = tam - 1; i < tam; i++, j--) {
        teste_sequencia(i, j, pcontX, pcontO, tab);
        if (contX == tam || contO == tam) 
            return true;
    }
    return false;
}

int check_vitoria(int tam, char** tab){
    if(check_horizontal(tam, tab))
        return true;
    if(check_vertical(tam, tab))
        return true;
    if(check_diagonalPrimaria(tam, tab))
        return true;
    if(check_diagonalSecundaria(tam, tab))
        return true;
    return false;
}

void mensagem_vitoriaCirculo(){
    printf("vitoria circulo\n");
}

void mensagem_vitoriaXis(){
    printf("vitoria xis\n");
}

