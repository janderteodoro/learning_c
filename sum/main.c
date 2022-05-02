#include <stdio.h> 

int main () 
{
    int sum (int a, int b) {
        return a + b; 
    }

    int num1, num2, soma; 

    printf("Digite o primeiro número;\n");
    scanf("%d", &num1);
    printf("Digite o número que deseja somar: \n");
    scanf("%d", &num2);

    soma = sum(num1, num2);

    printf("A soma entre %d e %d é %d\n", num1, num2, soma);

}