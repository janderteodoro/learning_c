#include <stdio.h>



int main () {

    float media (float n1, float n2, float n3) {
        return (n1 + n2 + n3) / 3;
    }
    
    float nota1, nota2, nota3, med;
    
    printf("Digita as três notas:\n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    med = media(nota1, nota2, nota3);
    printf("Sua média é %f\n", med);
    
    if(med >= 7) {
        printf("Parabéns, você foi aprovado\n");
    }

    if(med >= 5 && med < 7 ) {
        printf("Você tem mais uma chance, está de recuperação\n");
    }

    if(med < 5) {
        printf("Vai estudar!!! você está reprovado\n");
    }
}