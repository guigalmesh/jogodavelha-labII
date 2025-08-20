#include "logica.h"
#include "tabuleiro.h"
#include "input.h"
#include "vitoria.h"

void game_loop(int tam, char **tab){
    int gameOver, contJogadas = 0;
    imprime_tabuleiro(tam, tab);
    while(true){
        jogada_circulo(tam, tab);
        contJogadas++;
        imprime_tabuleiro(tam, tab);
        if(contJogadas >= tam)
            gameOver = check_vitoria(tam, tab);
        if(gameOver == true){
            mensagem_vitoriaCirculo();
            return;
        }
        jogada_xis(tam, tab);
        contJogadas++;
        imprime_tabuleiro(tam, tab);
        if(contJogadas >= tam)
            gameOver = check_vitoria(tam, tab);
        if(gameOver == true){
            mensagem_vitoriaXis();
            return;
        }
    }
}

int jogada_circulo(int tam, char **tab){
    int coords[2];
    printf("Vez do jogador circulo: \n");
    input_movimentoJogador(tam, coords, tab);
    realiza_movimentoCirculo(coords, tab);
}

int jogada_xis(int tam, char **tab){
    int coords[2];
    printf("Vez do jogador xis: \n");
    input_movimentoJogador(tam, coords, tab);
    realiza_movimentoXis(coords, tab);
}