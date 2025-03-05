#include <stdio.h>

int main() {

    int bispo, torre = 1, rainha = 1;


    // Movimentação do bispo
    printf("***** BISPO *****\n");

    for (bispo = 1; bispo <= 5; bispo++) {
        printf("Bispo: Cima-");
        printf("direita\n");
    }


    // Movimentação da torre
    printf("\n\n***** TORRE *****\n");

    while (torre <= 5) {
        printf("Torre: Direita\n");

        torre++;
    }


    // Movimentação da rainha
    printf("\n\n***** RAINHA *****\n");

    do {
        printf("Rainha: Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    
    
    return 0;
}