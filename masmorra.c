#include <stdio.h>

int main(void)
{
    int portao = 0;
    int cruzamento1 = 0;
    printf("Bem vindo a masmorra\n");
    printf("TODO\n");
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
           printf("o portao nao abriu e voce morreu\n");
        }

    return 0;
}
