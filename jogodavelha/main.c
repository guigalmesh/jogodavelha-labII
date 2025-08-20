#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "tabuleiro.h"
#include "logica.h"
#include "vitoria.h"

int main() {

    int tam = input_tamanhoTabuleiro(); // solicita ao usuário tamanho da matriz

    char** tab = aloca_tabuleiro(tam); // testando criação e alocação da matriz

    game_loop(tam, tab);

    libera_tabuleiro(tam, tab); // liberando memória da matriz
    return 0;
}