#include <stdio.h>

int main()
{

    int i;

    printf("insira um numero inteiro de 1 a 5\n");
    scanf("%i",&i);

    switch (i) {
        case 100:
        printf("primeiro\n");
        break;
        case 2:
        printf("segundo\n");
        break;
        case 3:
        printf("terceiro");
        break;
        case 4:
        printf("quarto");
        case 5:
        printf("quinto");
        break;
        default:
        printf("nao valido");

    }
    return 0;
}