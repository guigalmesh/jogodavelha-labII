#include <stdbool.h>
#include <stdio.h>
#include "logica.h"

int check_vitoria(char** tab){
    return SEM_VITORIA;
}

bool check_horizontal(int tam, char** tab){
    int contX=0, contO=0;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (tab[i][j] == 'O') {
                contO++;
            }
            if (tab[i][j] == 'X') {
                contX++;
            }
        }
        if (contX == tam || contO == tam) {
            return true;
        }
    }
    return false;
}

bool check_vertical(int tam, char** tab){
    int contX=0, contO=0;
    for (int j = 0; j < tam; j++) {
        for (int i = 0; i < tam; i++) {
            if (tab[i][j] == 'O') {
                contO++;
            }
            if (tab[i][j] == 'X') {
                contX++;
            }
        }
        if (contX == tam || contO == tam) {
            return true;
        }
    }
    return false;
}

bool check_diagonalPrimaria(int tam, char** tab){
    int contX=0, contO=0;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (i==j) {
                if (tab[i][j] == 'O') {
                    contO++;
                }
                if (tab[i][j] == 'X') {
                    contX++;
                }
            }
        }
        if (contX == tam || contO == tam) {
            return true;
        }
    }
    return false;
}

bool check_diagonalSecundaria(int tam, char** tab){
    int contX=0, contO=0;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (i==j) {
                if (tab[i][j] == 'O') {
                    contO++;
                }
                if (tab[i][j] == 'X') {
                    contX++;
                }
            }
        }
        if (contX == tam || contO == tam) {
            return true;
        }
    }
    return false;
}

void mensagem_vitoriaCirculo(){
    printf("vitoria circulo");
}

void mensagem_vitoriaXis(){
    printf("vitoria xis");
}

