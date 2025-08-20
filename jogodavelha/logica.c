#include "logica.h"
#include "tabuleiro.h"
#include "input.h"
#include "vitoria.h"

void game_loop(int tam, char **tab){
    int gameOver;
    while(true){
        jogada_circulo(tam, tab);
        imprime_tabuleiro(tam, tab);
        gameOver = check_vitoria(tab);
        if(gameOver == VITORIA_CIRCULO){
            mensagem_vitoriaCirculo();
            return;
        }
        jogada_xis(tam, tab);
        imprime_tabuleiro(tam, tab);
        gameOver = check_vitoria(tab);
        if(gameOver == VITORIA_X){
            mensagem_vitoriaXis();
            return;
        }
    }
}

int jogada_circulo(int tam, char **tab){
    int coords[2];
    input_movimentoJogador(tam, coords);
    realiza_movimentoCirculo(coords, tab);
}

int jogada_xis(int tam, char **tab){
    int coords[2];
    input_movimentoJogador(tam, coords);
    realiza_movimentoXis(coords, tab);
}