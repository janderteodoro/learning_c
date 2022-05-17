#include <stdio.h>


int main () 
{
    int a, b, c, produto, menor, maior;
    float media;

    printf("Entre com três númeors diferentes:\n");
    scanf("%d%d%d", &a, &b, &c);

    media = (a + b + b) / 3;
    produto = a * b * c;

    printf("A soma é %d\n", a + b + c);
    printf("A média é %d\n", media); 
    printf("O produto é %d\n", produto);

}