#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    int x, y;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor de x e de y ");
    scanf("%d,%d", &x, &y);

    if ((x > 10 || x < -10) || (y > 10 || y < -10)) {
        printf("Voce errou o alvo ");
    } else if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1)) {
        printf("Você recebeu 10 pontos");
    } else if ((x >= -5 && x <= 5) && (y >= -5 && y <= 5)) {
        printf("Você recebeu 5 pontos ");
    } else if ((x >= -10 && x <= 10) && (y >= -10 && y <= 10)) {
        printf("Você recebeu 1 ponto ");
    }

    return 0;
}

