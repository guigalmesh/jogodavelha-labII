#ifndef LOGICA_H
#define LOGICA_H

#define VITORIA_CIRCULO 0
#define VITORIA_X 1
#define SEM_VITORIA -1

void game_loop(int tam, char **tab);
int jogada_circulo(int tam, char **tab);
int jogada_xis(int tam, char **tab);

#endif