// nivel novato

int main() {
    int i;

    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Passo %d: Direita\n", i);
    }

    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal (usando while)
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Passo %d: Cima, Direita\n", i);
        i++;
    }

    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Passo %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    return 0;
}

// nivel aventureiro 
#include <stdio.h>

// Número de casas para a movimentação
const int casasTorre = 3;
const int casasBispo = 3;
const int casasRainha = 3;
const int casasCavaloVertical = 2;
const int casasCavaloHorizontal = 1;

/* ------------------ TORRE ------------------ */
// Movimento recursivo para cima
void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

// Movimento recursivo para direita
void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

/* ------------------ BISPO ------------------ */
// Movimento recursivo com loops aninhados (diagonal direita para cima)
void moverBispoRecursivo(int i, int j) {
    if (i == 0 || j == 0) return;
    printf("Diagonal superior direita\n");
    moverBispoRecursivo(i - 1, j - 1);
}

// Bispo com loops aninhados (como solicitado)
void moverBispoComLoops() {
    for (int i = casasBispo; i > 0; i--) {
        for (int j = casasBispo; j > 0; j--) {
            if (i == j) {
                printf("Diagonal superior direita\n");
            }
        }
    }
}

/* ------------------ RAINHA ------------------ */
// Movimento recursivo em linha (para cima e depois direita)
void moverRainhaCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverRainhaCima(casas - 1);
}

void moverRainhaDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverRainhaDireita(casas - 1);
}

/* ------------------ CAVALO ------------------ */
// Movimento com loops complexos para "L" (duas para cima, uma para direita)
void moverCavalo() {
    for (int i = 0; i <= casasCavaloVertical; i++) {
        for (int j = 0; j <= casasCavaloHorizontal; j++) {
            if (i == 2 && j == 1) {
                printf("Cavalo: Duas casas para cima\n");
                printf("Cavalo: Uma casa para a direita\n");
                break;
            } else {
                continue;
            }
        }
    }
}

/* ------------------ MAIN ------------------ */
int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorreCima(casasTorre);
    moverTorreDireita(casasTorre);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo, casasBispo);
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops();
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainhaCima(casasRainha);
    moverRainhaDireita(casasRainha);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}


// nivel mestre
#include <stdio.h>

// Constantes para número de casas movimentadas
const int casasTorre = 3;
const int casasRainha = 3;
const int casasBispo = 3;

// Constantes para o movimento do Cavalo
const int movimentoVerticalCavalo = 2;
const int movimentoHorizontalCavalo = 1;

/* ----------------- FUNÇÕES RECURSIVAS ----------------- */

// Função recursiva para mover a torre para cima
void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

// Função recursiva para mover a torre para a direita
void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// Função recursiva para mover a rainha para cima
void moverRainhaCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverRainhaCima(casas - 1);
}

// Função recursiva para mover a rainha para a direita
void moverRainhaDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverRainhaDireita(casas - 1);
}

// Função recursiva para mover o bispo na diagonal (cima + direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Diagonal superior direita\n");
    moverBispoRecursivo(casas - 1);
}

/* ----------------- BISPO COM LOOPS ANINHADOS ----------------- */

// Loop aninhado para simular a diagonal (cima + direita)
void moverBispoLoopsAninhados(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            if (i == j) {
                printf("Diagonal superior direita\n");
            }
        }
    }
}

/* ----------------- CAVALO COM LOOPS COMPLEXOS ----------------- */

// Loop aninhado simulando movimento do cavalo: 2 para cima e 1 para a direita
void moverCavalo() {
    for (int i = 1; i <= 3; i++) { // Tentativas de movimento vertical
        for (int j = 1; j <= 2; j++) { // Tentativas de movimento horizontal
            if (i == movimentoVerticalCavalo && j == movimentoHorizontalCavalo) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break; // Movimento válido, encerrar
            } else {
                continue; // Pular tentativas inválidas
            }
        }
    }
}

/* ----------------- FUNÇÃO PRINCIPAL ----------------- */

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorreCima(casasTorre);
    moverTorreDireita(casasTorre);
    printf("\n");

    // Movimento do Bispo (recursivo)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // Movimento do Bispo (loops aninhados)
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoopsAninhados(casasBispo);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainhaCima(casasRainha);
    moverRainhaDireita(casasRainha);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
