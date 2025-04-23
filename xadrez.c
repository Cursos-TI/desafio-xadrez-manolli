#include <stdio.h>

// NÍVEL NOVATO: Movimentação com loops simples

void moverBispo() {
    printf("Movimento do Bispo (5 casas - diagonal superior direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Cima e Direita\n");
    }
    printf("\n");
}

void moverTorre() {
    printf("Movimento da Torre (5 casas - para a direita):\n");
    int i = 0;
    while (i < 5) {
        printf("Direita\n");
        i++;
    }
    printf("\n");
}

void moverRainha() {
    printf("Movimento da Rainha (8 casas - para a esquerda):\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    printf("\n");
}

// NÍVEL AVENTUREIRO: Movimento do Cavalo com loops aninhados

void moverCavalo() {
    printf("Movimento do Cavalo (L - para baixo e esquerda):\n");
    for (int i = 0; i < 2; i++) { // duas casas para baixo
        printf("Baixo\n");
    }
    int j = 0;
    while (j < 1) { // uma casa para esquerda
        printf("Esquerda\n");
        j++;
    }
    printf("\n");
}

// NÍVEL MESTRE: Recursividade e lógica mais avançada

void moverBispoRecursivo(int i) {
    if (i == 0) return;
    printf("Cima e Direita\n");
    moverBispoRecursivo(i - 1);
}

void moverTorreRecursiva(int i) {
    if (i == 0) return;
    printf("Direita\n");
    moverTorreRecursiva(i - 1);
}

void moverRainhaRecursiva(int i) {
    if (i == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursiva(i - 1);
}

void moverCavaloMestre() {
    printf("Movimento do Cavalo (L - cima e direita, com lógica avançada):\n");
    for (int i = 1, j = 2; i <= 2 && j >= 1; i++, j--) {
        if (i == 2 && j == 1) {
            printf("Cima\n");
            printf("Cima\n");
            continue;
        }
    }

    int k = 0;
    while (k < 1) {
        printf("Direita\n");
        k++;
    }

    printf("\n");
}

int main() {
    // Nível Novato
    moverBispo();
    moverTorre();
    moverRainha();

    // Nível Aventureiro
    moverCavalo();

    // Nível Mestre
    printf("Movimentos com recursividade:\n");
    moverBispoRecursivo(5);
    printf("\n");
    moverTorreRecursiva(5);
    printf("\n");
    moverRainhaRecursiva(8);
    printf("\n");

    moverCavaloMestre();

    return 0;
}
