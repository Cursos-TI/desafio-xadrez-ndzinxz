#include <stdio.h>

int main() {

    int bispo, torre = 1, rainha = 1;


    // Movimentação do bispo
    printf("***** BISPO *****\n");

    for (bispo = 1; bispo <= 5; bispo++) {
        printf("Bispo: Cima-Direita\n");
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


    // Movimento do cavalo
    printf("\n\n***** CAVALO *****\n");
    for (int cavalo = 1; cavalo == 1; cavalo++) {
        for(int movimento = 1; movimento == 1; movimento++) {
            printf("Baixo-baixo-");
        }
        printf("esquerda\n");
    }
    
    
    
    return 0;
}