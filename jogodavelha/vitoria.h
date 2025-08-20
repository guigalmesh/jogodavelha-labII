#ifndef VITORIA_H
#define VITORIA_H
#include <stdbool.h>

int check_vitoria(char **tab);
bool check_horizontal(int tam, char **tab);
bool check_vertical(int tam, char **tab);
bool check_diagonalPrimaria(int tam, char **tab);
bool check_diagonalSecundaria(int tam, char **tab);
void mensagem_vitoriaCirculo();
void mensagem_vitoriaXis();


#endif