#include <stdio.h>



int main () {

    char choice;
    float a, b;


    printf("CALCULADORA DO ELETRICISTA\n");
    printf("[1] Calcular Tensao\n");
    printf("[2] Calcular Corrente\n");
    printf("[3] Calcular Resistencia\n");
    printf("\n");
    printf("Digite a opcao que deseja: ");

    scanf("%c", &choice);

    switch(choice) {

        float res;
        
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
            printf("CALCULAR RESISTENCIA\n");
            printf("\n");
            printf("Insira o valor de Tensao (V): ");
            scanf("%f", &a);
            printf("Insira o valor da Corrente (A): ");
            scanf("%f", &b);
            res = a / b; 
            printf("Resistencia: %f", res);


            break;

        default: 
            system("cls");
            printf("Opcao invalida");
    }



    return 0;
}

