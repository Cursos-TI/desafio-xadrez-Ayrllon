#include <stdio.h>

int main()
{

    int bispo = 1;
    int rainha = 1;

    // mover a torre 5 casas para a direita
    printf("TORRE\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n"); // imprime a direção do movimento
    }

    // mover o bispo 5 casas em diagonal a direita
    printf("BISPO\n");
    do
    {
        printf("Cima, Direita\n");
        bispo++;
    } while (bispo <= 5);

    printf("RAINHA\n");
    // mover a rainha 8 casas a esquerda
    while (rainha <= 8)
    {
        printf("esquerda\n");
        rainha++;
    }

    return 0;
}
