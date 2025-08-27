#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mov_torre(int qtd_mov)
{
    if (qtd_mov > 0)
    {
        printf("DIREITA → ");
        mov_torre(qtd_mov - 1);
    }
}

void mov_bispo(int qtd_mov)
{
    for (int i = qtd_mov; i > 0; i--)
    {
        printf("CIMA ↑ ");
        while (i > 0)
        {
            printf("DIREITA → ");
            break;
        }
    }
}

void mov_rainha(int qtd_mov)
{
    if (qtd_mov > 0)
    {
        printf("← ESQUERDA ");
        mov_rainha(qtd_mov - 1);
    }
}

void mov_cavalo(int qtd_mov)
{
    for (int i = qtd_mov, j = 1; i > 0; i--)
    {
        if (j == i)
        {
            printf("↑ CIMA");
            break;
        }
        printf("↑ CIMA → DIREITA\n");
    }

}

int main()
{
    // move-se horizontalmente 5 casas para direita
    char torre[] = "Torre";
    int torre_mov = 5;
    char posicao_torre[] = "A3";
    char posicao_torre_final[] = "F3";

    printf("MOVIMENTOS DA TORRE BRANCA\n");
    printf("A posição atual da Torre Branca é %s\n\n", posicao_torre);
    printf("A Torre irá se mover 5 casas para direita agora...\n");
    mov_torre(torre_mov);
    printf("\n\nA posição final da Torre Branca é %s\n\n", posicao_torre_final);

    // move-se na diagonal 5 casas para diagonal para cima a direita
    char bispo[] = "Bispo";
    int bispo_mov = 5;
    char posicao_bispo[] = "C1";
    char posicao_bispo_final[] = "H6";

    printf("MOVIMENTOS DO BISPO BRANCO\n");
    printf("A posição atual do Bispo Branco é %s\n\n", posicao_bispo);
    printf("O Bispo irá se mover 5 casas para diagonal para cima a direita agora...\n");
    mov_bispo(bispo_mov);
    printf("\n\nA posição final do Bispo Branco é %s\n\n", posicao_bispo_final);

    // move-se em todas as direções, 8 casas para esqueda.
    char rainha[] = "Rainha";
    int rainha_mov = 8;
    char posicao_rainha[] = "H7";
    char posicao_rainha_final[] = "A7";

    printf("MOVIMENTOS DO RAINHA PRETA\n");
    printf("A posição atual da Rainha Preta é %s\n\n", posicao_rainha);
    printf("A Rainha irá se mover 8 casas para esquerda agora...\n");
    mov_rainha(rainha_mov);
    printf("\n\nA posição final da Rainha Preta é %s\n\n", posicao_rainha_final);

    // move-se em forma de L, BAIXO - BAIXO - ESQUERDA
    char cavalo[] = "Cavalo";
    int cavalo_mov = 2;
    char posicao_cavalo[] = "F6";
    char posicao_cavalo_final[] = "E4";

    printf("MOVIMENTOS DO CAVALO PRETO\n");
    printf("A posição atual do Cavalo Preto é %s\n\n", posicao_cavalo);
    printf("O Cavalo irá se mover 3 casas em L agora...\n");
    mov_cavalo(cavalo_mov);
    printf("\nA posição final do Cavalo Preto é %s\n", posicao_cavalo_final);

    return 0;
}