#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "tabuleiro.h"
#include "logica.h"
#include "vitoria.h"

int main() {

    int tam = input_tamanhoTabuleiro();

    char** tab = aloca_tabuleiro(tam);

    game_loop(tam, tab);

    libera_tabuleiro(tam, tab);
    return 0;
}