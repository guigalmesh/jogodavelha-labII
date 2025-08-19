#ifndef LOGICA_H
#define LOGICA_H

#define VITORIA_CIRCULO 0
#define VITORIA_X 1
#define SEM_VITORIA -1

void game_loop(char **tab);
int jogada_circulo(char **tab);
int jogada_xis(char **tab);

#endif