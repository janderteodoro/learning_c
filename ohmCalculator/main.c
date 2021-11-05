#include <stdio.h>

int main () {

    char choice;

    printf("CALCULADORA DO ELETRICISTA\n");
    printf("[1] Calcular Tensao\n");
    printf("[2] Calcular Corrente\n");
    printf("[3] Calcular Resistencia\n");
    printf("\n");
    printf("Digite a opcao que deseja: ");

    scanf("%c", &choice);

    switch(choice) {
        
        case '1':
            system("cls");
            printf("CALCULAR TENSAO");
            break;

        case '2':
            system("cls");
            printf("CALCULAR CORRENTE");
            break;

        case '3':
            system("cls");
            printf("CALCULAR RESISTENCIA");
            break;

        default: 
            system("cls");
            printf("Opcao invalida");
    }



    return 0;
}