#include <stdio.h>

int main(void)
{
    int portao = 0;
    int cruzamento1, cruzamento2 = 0;
    int intersecao1, intersecao2, intersecao3 = 0;

        printf("Bem vindo a masmorra\n");
        printf("Es um guerreiro ferido. Apos uma batalha sangrenta contra o exercito inimigo, verificas que os teus amigos tombaram todos e so faltas tu\n");
        printf("nao tens mais hipotese nesta batalha, entao decides fugir e salvar a tua vida.\n");
        printf("Depois de uma longa caminhada, encontras o que parece ser uma masmorra abandonada\n");
        printf("como estas cansado e ferido, decides explorar\n");
        printf("A sua frente esta um portao Ferrugento\n");
        printf("pretende abri-lo?\n");
        printf("Prime 1 para sim e 2 para nao\n");
        scanf("%d",&portao);
        if (portao == 1)
        {
        printf("o portao abriu\n");
        printf("A sua frente esta um corredor e no fim um cruzamento\n");
        printf("para que lado quer ir?\n");
        printf("prime 1 para ir para a esquerda, 2 para ir em frente e 3 para ir para a direita\n");
        scanf("%d",&cruzamento1);
        }
        if (cruzamento1 == 1)
        {
            printf("avancaste e encontraste um caminho a tua esquerda\n");
            printf("Se quiseres seguir em frente prima 1, para virar a esquerda prima 2\n");
            scanf("%d",&intersecao1);
            if (intersecao1 == 1)
                {
                printf("Seguiste em frente no tunel, e no fim do mesmo viraste a esquerda\n");
                printf("Apos uma longa caminhada, verificas que existe mais um cruzamento\n");
                printf("queres virar para a direita, prime 1, queres ir em frente, prime 2\n");
                scanf("%d",&cruzamento2);
                }
            if (intersecao1 ==  2)
            {
                printf("CAMINHO SEM SAIDA TODO");
            }

            if (cruzamento2 == 2)
                {
                printf("O ambiente está humido e bolorento, tens dificuldade em respirar\n");
                printf("Mas nao desistes e continuas ate encontrares uma intersecao a tua esquerda.\n");
                printf("Se quiseres virar prime 1, para continuar em frente, prime 2\n");
                scanf("%d",&intersecao2);
                }
            if (cruzamento2 == 1)
                    {
                    printf("Apos uma longa caminhada, perdeste o teu sentido de orientacao e quando te apercebeste caiste num poco com 10 metros de profundidade\n");
                    printf("Nao tens grande esperanca de sobrevivencia e acabas por aceitar o teu destino e morres\n");
                    printf("GAME OVER\n");
                    }

          /*    if (cruzamento2 == 1)
                    {
                    printf("segues pelo caminha a tua esquerda e reparas que ele esta virar a direita.\n");
                    printf("reparas que o caminho est a descer e presentes que estas abaixo do nivel do chao\n");
                    printf("com a luz tenue da tua tocha, esque o caminho bifurca para a direita e em frente\n");
                    printf("Queres seguir em frente, prime 1, queres virar a direita, prime 2\n");
                    scanf("%d",intersecao3);
                    }
*/

        }
    if(portao == 2)
        {
           printf("Decidiste nao abrir o portao e morreste de exaustao. Os batedores inimigos apanharam-te\n");
        }

    return 0;
}
