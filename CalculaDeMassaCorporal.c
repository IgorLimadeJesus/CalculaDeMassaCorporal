#include <stdio.h>

int main()
{
    float alt, peso, masCorp;
    printf("digite a altura: \n");
    scanf("%f",&alt);
    printf("digite o peso: \n");
    scanf("%f" &peso);

    masCorp = alt/(alt*alt);
    printf("a area e: %f", masCorp);
}