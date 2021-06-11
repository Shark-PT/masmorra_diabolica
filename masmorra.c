#include <stdio.h>

void black();
void red();
void green();
void yellow();
void blue();
void purple();
void cyan();
void reset();

int main(void)
{
    int portao = 0;
    int cruzamento1, cruzamento2, cruzamento3 = 0;
    int intersecao1, intersecao3 = 0;
    int bifurcacao1, bifurcacao2, bifurcacao3, bifurcacao4 = 0;
    int intersecao2 = 0;
    int caminho1 = 0;

        printf("Bem vindo a masmorra\n");
        printf("Es um guerreiro ferido. Apos uma batalha sangrenta contra o exercito inimigo, verificas que os teus amigos tombaram todos e so faltas tu\n");
        printf("nao tens mais hipotese nesta batalha, entao decides fugir e salvar a tua vida.\n");
        printf("Depois de uma longa caminhada, encontras o que parece ser uma masmorra abandonada\n");
        printf("como estas cansado e ferido, decides explorar\n");
        printf("A sua frente esta um portao Ferrugento\n");
        printf("pretende abri-lo?\n");
        blue();
        printf("Prime 1 para sim e 2 para nao\n");
        reset();
        scanf("%d",&portao);

        if (portao == 1)
        {
        printf("o portao abriu\n");
        printf("A sua frente esta um corredor e no fim um cruzamento\n");
        printf("para que lado quer ir?\n");
        blue();
        printf("prime 1 para ir para a esquerda, 2 para ir em frente\n");
        reset();
        scanf("%d",&cruzamento1);
        }

        if (cruzamento1 == 2) // completar narrativa
        {
            printf("FRENTE\n");
            printf("TODO\n");
            blue();
            printf("cruzamento, frente 1, direita 2\n");
            reset();
            scanf("%d",&cruzamento3);
        }
        if (cruzamento3 == 1) // completar narrativa
            {
            printf("Seguiste em frente\n");
            printf("encontraste uma bifurcacao\n");
            blue();
            printf("esquerda, 1, direita 2\n");
            reset();
            
        //continuar narrativa a partir daqui
            }
    
            
        if (cruzamento1 == 1)
            {
            printf("avancaste e encontraste um caminho a tua esquerda\n");
            blue();
            printf("Se quiseres seguir em frente prima 1, para virar a direita prima 2\n");
            reset();
            scanf("%d",&intersecao1);
            }
            if (intersecao1 == 1)
                {
                printf("Seguiste em frente no tunel, e no fim do mesmo viraste a direita\n");
                printf("Apos uma longa caminhada, verificas que existe mais um cruzamento\n");
                blue();
                printf("queres virar para a esquerda, prime 1, queres ir em frente, prime 2\n");
                reset();
                scanf("%d",&cruzamento2);
                }
/*
            if (intersecao1 ==  2) // completar narrativa
            {
                yellow();
                printf("CAMINHO SEM SAIDA TODO");
                reset();
            }
*/
            if (cruzamento2 == 2)
                {
                printf("O ambiente esta humido e bolorento, tens dificuldade em respirar\n");
                printf("Mas nao desistes e continuas ate encontrares uma intersecao a tua esquerda.\n");
                blue();
                printf("Se quiseres virar prime 1, para continuar em frente, prime 2\n");
                reset();
                scanf("%d",&intersecao2);
                }
                if (intersecao2 == 1)
                    printf("segues pelo caminha a tua esquerda e reparas que ele esta virar a direita.\n");
                    printf("reparas que o caminho esta a descer e pressentes que estas abaixo do nivel do chao\n");
                    printf("com a luz tenue da tua tocha, ves que o caminho bifurca para a esquerda e em frente\n");
                    blue();
                    printf("Queres seguir em frente, prime 1, queres virar a esquerda, prime 2\n");
                    reset();
                    scanf("%d",caminho1);
                    
                    if (caminho1 == 2)
                    {
                        printf("fazes uma longa caminhada e o ambiente esta claustrofobico\n");
                         printf("Apesar de tudo, continuas e ves que o caminho curva para a esquerda.\n");
                        printf("no fim do corredor, tens uma bifurcacao\n");
                        blue();
                        printf("Queres ir para a direita, prime 1, para a esquerda prime 2\n");
                        reset();
                        scanf("%d",&bifurcacao1);
                     }
                if (intersecao2 == 2)
                {
                    printf("Continuas em frente e ves ossadas antigas.\n");
                    printf("pobres coitados, pensas, e decides que nao iras ter o mesmo destino\n");
                    printf("No fim do tunel, encontras mais uma bifurcacao\n");
                    blue();
                    printf("Segues em frente, prime 1, viras a direita, prime 2\n");
                    reset();
                    scanf("%d", &bifurcacao4);
                }
/*              
            if (cruzamento2 == 1)
                    {
                    yellow();
                    printf("Apos uma longa caminhada, perdeste o teu sentido de orientacao e quando te apercebeste caiste num poco com 10 metros de profundidade\n");
                    printf("Nao tens grande esperanca de sobrevivencia e acabas por aceitar o teu destino e morres\n");
                    printf("GAME OVER\n");
                    reset();
                    }
*/
                

                    if (bifurcacao4 == 1)
                    {
                        yellow();
                        printf("Mais uma armadilha\n");
                        printf ("GAME OVER");
                        reset();
                    }
                    if (bifurcacao4 == 2)
                    {
                        printf("Segues o caminho e sentes que estas a subir\n");
                        printf("Encontras novo cruzamento\n");
                        blue();
                        printf("queres seguir em frente, prime 1, queres virar a direita, prime 2\n");
                        reset();
                    }
            
            if (caminho1 == 1)
                {
                printf("Seguiste em frente, com pouca luz, ate que bateste numa parede\n");
                printf("desorientado, reparas que o caminho segue pela esquerda\n");
                printf("continuas o caminho ate chegares a mais uma bifurcacao\n");
                blue();
                printf("Queres seguir em frente, prime 1, queres virar a esquerda, prime 2\n");
                reset();
                scanf("%d",&bifurcacao2);
                }
            if (bifurcacao1 == 1)
                    {
                    red();
                    printf("caiste num poco enorme. Os teus dias chegaram ao fim \n");
                    printf("GAME OVER\n");
                    reset();
                    }
                if (bifurcacao1 == 2)
                    {
                    printf("Caminhas, caminhas e caminhas até chegar a mais uma bifurcacao\n");
                    printf("Rogas pragas ao criador deste labirinto diabolico\n");
                    blue();
                    printf("Mas entretanto tens que decidir, direita, prime 1, esquerda, prime 2");
                    reset();
                    scanf("%d",&bifurcacao3);    
                    }
                if (bifurcacao3 == 1)
                    {
                    printf("Andas durante muito tempo, com curvas consecutivas para o mesmo lado\n");
                    printf("Ate que te apercebes que andaste as voltas e foste parar ao mesmo sitio.\n");
                    printf("Voltas atrás e segues o mesmo caminho claustrofobico até chegar a mais uma bifurcacao\n");
                    blue();
                    printf("Segues em frente, prime 1, viras a direita, prime 3\n");
                    reset();
                    scanf("%d", &bifurcacao3);
                    }
                if (bifurcacao1 == 3)
                    {
                    printf("continuas a seguir o mesmo caminho que fizeste antes e pensas qual sera o objectivo destes tuneis\n");
                    }
        

    if (portao == 2)
        {
            red();    
            printf("Decidiste nao abrir o portao e morreste de exaustao. Os batedores inimigos apanharam-te\n");
            printf("GAME OVER");
            reset();
        } 

    return 0;


}
// funcoes de cores
void red()
    {
        printf("\033[1;31m");
    }

void yellow()
    {
        printf("\033[1;33m");
    }

void black()
    {
        printf("\033[1;30m");
    }

void green()
    {
        printf("\033[1;32m");
    }

void blue()
    {
        printf("\033[1;34m");
    }

void purple()
    {
        printf("\033[1;35m");
    }

void cyan()
    {
        printf("\033[1;36m");
    }

void reset()
    {
        printf("\033[0m");
    }
