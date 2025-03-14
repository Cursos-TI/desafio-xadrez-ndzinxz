#include <stdio.h>

void bispo(int casas) {
    if (casas > 0) {
        printf("Cima-Direita\n");
        bispo(casas - 1);
    }
}

void torre(int casas) {
    if (casas > 0 ) {
        printf("Direita\n");
        torre(casas - 1);
    }
}

void rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}

int main() {

    // Movimentação do bispo
    printf("\n\n***** BISPO *****\n");
    bispo(5);


    // Movimentação da torre
    printf("\n\n***** TORRE *****\n");
    torre(5);


    // Movimentação da rainha
    printf("\n\n***** RAINHA *****\n");
    rainha(8);


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