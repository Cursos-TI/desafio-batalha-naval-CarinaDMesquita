#include <stdio.h>

int main() {

    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int matrizTabuleiro [10][10] = {0}; // matriz 10x10 com o valor 0.

    //inicio do Jogo
    printf("\n####  JOGO BATALHA NAVAL  ####\n\n");

    // Posicionamento fixo dos navios 
     matrizTabuleiro[2][2] = 3; // horizontal
     matrizTabuleiro[2][3] = 3;
     matrizTabuleiro[2][4] = 3;
 
     matrizTabuleiro[6][7] = 3; // vertical
     matrizTabuleiro[7][7] = 3;
     matrizTabuleiro[8][7] = 3;
    
    
    // for para o cabeçalho das colunas da matriz
    printf("  ");
    for (int j = 0; j < 10; j++) {
        printf(" %c", coluna[j]);
    }
    printf("\n");


    // for para as linhas da matriz
    for (int i = 0; i < 10; i++) {
        printf("%2d", linha[i]); // alinhamento para 1 ou 2 dígitos
        for (int j = 0; j < 10; j++) {
            printf(" %d", matrizTabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
