#ifndef TABULEIRO_H
#define TABULEIRO_H

char **aloca_tabuleiro(int tam);
void realiza_movimento(int coords[2], char** tab);
void libera_tabuleiro(int tam, char** tab);
void imprime_tabuleiro(int tam, char** tab);

#endif