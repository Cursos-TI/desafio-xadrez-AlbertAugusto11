#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    while (torre_mov > 0)
    {
        printf("DIREITA → ");
        torre_mov--;
    }
    printf("\n\nA posição final da Torre Branca é %s\n\n", posicao_torre_final); 

    // move-se na diagonal 5 casas para diagonal para cima a direita
    char bispo[] = "Bispo";
    int bispo_mov = 5;
    char posicao_bispo[] = "C1";
    char posicao_bispo_final[] = "H6";

    printf("MOVIMENTOS DO BISPO BRANCO\n");
    printf("A posição atual do Bispo Branco é %s\n\n", posicao_bispo);
    printf("O Bispo irá se mover 5 casas para diagonal para cima a direita agora...\n");
    do
    {
        printf("CIMA ↑ DIREITA → ");
        bispo_mov--;
    } while (bispo_mov > 0);
    
    printf("\n\nA posição final do Bispo Branco é %s\n\n", posicao_bispo_final); 


    
    // move-se em todas as direções, 8 casas para esqueda.
    char rainha[] = "Rainha";
    int rainha_mov = 8;
    char posicao_rainha[] = "H7";
    char posicao_rainha_final[] = "A7";

    printf("MOVIMENTOS DO RAINHA PRETA\n");
    printf("A posição atual da Rainha Preta é %s\n\n", posicao_rainha);
    printf("A Rainha irá se mover 8 casas para esquerda agora...\n");
    for (int i = rainha_mov; i > 0; i--)
    {
        printf("← ESQUERDA ");
        rainha_mov--;
    }
    
    
    printf("\n\nA posição final da Rainha Preta é %s\n", posicao_rainha_final); 

    return 0;
}