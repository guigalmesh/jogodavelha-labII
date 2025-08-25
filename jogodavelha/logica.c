#include "logica.h"
#include "tabuleiro.h"
#include "input.h"
#include "vitoria.h"

void game_loop(int tam, char **tab){
    int gameOver, contJogadas = 0;
    imprime_tabuleiro(tam, tab);
    while(true){
        printf("contJogadas: %d\n", contJogadas);
        jogada_circulo(tam, tab);
        contJogadas++;
        imprime_tabuleiro(tam, tab);
        if(check_vitoria(tam, tab)){
            mensagem_vitoriaCirculo();
            return;
        }
        if(contJogadas == tam * tam)
            break;
        jogada_xis(tam, tab);
        contJogadas++;
        imprime_tabuleiro(tam, tab);
        if(check_vitoria(tam, tab)){
            mensagem_vitoriaXis();
            return;
        }
    }
    printf("Deu velha.\n");
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