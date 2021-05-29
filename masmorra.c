#include <stdio.h>

int main(void)
{
    int portao = 0;
    int cruzamento1 = 0;
    printf("Bem vindo a masmorra\n");
    printf("Es um guerreiro ferido. Apos uma batalha sangrenta contra o exercito inimigo, verificas que os teus amigos tombaram todos e so faltas tu\n");
    printf("nao tens mais hipotese nesta batalha, entao decides fugir e salvar a tua vida.\n");
    printf("Depois de uma longa caminhada, encontras o que parece ser uma masmorra abandonada\n");
    printf("como estas cansado e ferido, decides explorar\n");
    printf("A sua frente esta um portao Ferrugento\n");
    printf("pretende abri-lo?\n");
    printf("Prima 1 para sim e 2 para nao\n");
    scanf("%d",&portao);
    if (portao == 1)
        {
        printf("o portao abriu\n");
        printf("tente novamente\n");
        printf("A sua frente está um corredor e no fim um cruzamento\n");
        printf("para que lado quer ir?\n");
        printf("prima 1 para ir para a esquerda, 2 para ir em frente e 3 para ir para a direita\n");
        scanf("%d",&cruzamento1);
        }
    else
        {
           printf("Decidiste nao abrir o portao e morreste de exaustao. Os batedores inimigos apanharam-te\n");
        }

    return 0;
}
