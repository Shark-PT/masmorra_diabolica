#include <stdio.h>
#include <stdbool.h>
#include "parsexec.h"

static char input[100] = "look around"; //buffer para recolher inputs do teclado

static bool getInput(void)
{
    printf("\n--> "); //pode ser mudado o texto para o que quisermos
    return fgets(input, sizeof input, stdin) !=NULL;
}

int main()
{
    printf("Welcome to Little Cabe Adventure.\n");
    while (parseAndExecute(input) && getInput());
    printf("It is very dark in here.\n");
    printf("\nBye\n");
    return 0;
}