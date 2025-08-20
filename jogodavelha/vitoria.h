#ifndef VITORIA_H
#define VITORIA_H
#include <stdbool.h>

int check_vitoria(char **tab);
bool check_horizontal(char **tab);
bool check_vertical(char **tab);
bool check_diagonalPrimaria(char **tab);
bool check_diagonalSecundaria(char **tab);
void mensagem_vitoriaCirculo();
void mensagem_vitoriaXis();


#endif