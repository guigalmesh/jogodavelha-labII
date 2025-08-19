#include "logica.h"
#include "vitoria.h"

void game_loop(char **tab){
    int gameOver = -1;
    while(gameOver = -1){
        jogada_circulo(tab);
        gameOver = check_vitoria(tab);
        if(gameOver == VITORIA_CIRCULO)
            mensagem_vitoriaCirculo();
            return;
        jogada_xis(tab);
        gameOver = check_vitoria(tab);
        if(gameOver == VITORIA_X)
            mensagem_vitoriaXis();
            return;
    }
}