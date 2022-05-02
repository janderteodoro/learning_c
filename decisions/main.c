/*
    usando if e operadores de igualdade
*/

#include <stdio.h>

int main () {
    
    int num1, num2;

    printf("Entre com dois inteireos e lhe direi\n"); 
    printf("O relacionamento que eles satisfazem: ");
    
    scanf("%d%d", &num1, &num2); // lendo inteiros 
    
    if(num1 == num2) {
        printf("%d é igual a %d\n", num1, num2);
    }

    if(num1 != num2) {
        printf("%d é diferente de %d\n", num1, num2);
    }

    if(num1 < num2) {
        printf("%d é menor que %d\n", num1, num2);
    }

    if(num1 > num2) {
        printf("%d é maior que %d\n", num1, num2);
    }

    if(num1 <= num2) {
        printf("%d é menor que %d\n", num1, num2);
    }

    if(num1 >= num2) {
        printf("%d é maior igual a %d\n", num1, num2);
    }

    return 0;
}