#include <stdio.h>

int main() {

    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // vetor com 10 índice caracter

    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // vetor com 10 índice int

    int matrizTabuleiro [10][10] = {0}; // matriz 10x10 com o valor 0.

    int navioHorizontal [3] = {3, 3, 3}; // Array para representar o navio na horizontal 

    int navioVertical [3] = {3, 3, 3}; // Array para representar o navio na vertical

    int navioDiagonal1 [3] = {3, 3, 3}; // Array para representar o navio na diagonal principal 

    int navioDiagonal2 [3] = {3, 3, 3}; // Array para representar o navio na diagonal secundária 


    //Coordenadas para os navios
    // navio na horizontal
    int linhaHorizontal = 4; 
    int colunaHorizontal = 3;

    // navio na vertical
    int linhaVertical = 6;
    int colunaVertical = 1;

    // navio na diagonal principal
    int linhaDiagonal1 = 0;
    int colunaDiagonal1 = 0;

    // navio na diagonal secundária
    int linhaDiagonal2 = 0;
    int colunaDiagonal2 = 9;

    printf("\nJOGO DE BATALHA NAVAL\n\n"); // Ínicio do jogo


    // For para posicionar o navio na horizontal na matriz
    for (int i = 0; i < 3; i++) {
        matrizTabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
    }

    // for para posicionar o navio na vertical na matriz
    for (int i = 0; i < 3; i++) {
        matrizTabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
    }

    // for para posicionar o navio na diagonal principal  
    // vai do Canto superior esquerdo até o canto inferior direito
    for (int i = 0; i < 3; i++) {
        int linhaD1 = linhaDiagonal1 + i;// calculando a posição do navio
        int colunaD1 = colunaDiagonal1 + i;
        if (linhaD1 >= 0 && linhaD1 < 10 && colunaD1 >= 0 && colunaD1 < 10) {
        matrizTabuleiro[linhaD1][colunaD1] = navioDiagonal1[i];
        // if para verificar os limites da matriz e evitar que os navios sejam posicionados fora dela
        }
    }
    
        
    // for para posicionar o navio na diagonal secundária
    // vai do canto superior direito para o canto inferior esquerdo
    for (int i = 0; i < 3; i++) {
        int linhaD2 = linhaDiagonal2 + i; // calculando a posição do navio
        int colunaD2 = colunaDiagonal2 - i;
        if (linhaD2 >= 0 && linhaD2 < 10 && colunaD2 >= 0 && colunaD2 < 10) {
        matrizTabuleiro[linhaD2][colunaD2] = navioDiagonal1[i];
        // if para verificar os limites da matriz e evitar que os navios sejam posicionados fora dela   
        }
    }
        

    // for para o cabeçalho das colunas da matriz
    printf("  ");
    for (int j = 0; j < 10; j++) {
        printf(" %c", coluna[j]);
    }
    printf("\n");


    // for para as linhas da matriz
    for (int i = 0; i < 10; i++) {
        printf("%2d", linha[i]); // alinhamento para 1 ou 2 dígitos
        for (int j = 0; j < 10; j++) { // for para as colunas
            printf(" %d", matrizTabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nFIM DE JOGO!\n");

    return 0;
}