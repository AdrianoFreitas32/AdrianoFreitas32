#include <stdio.h>
 
int main() {

    float nota1, nota2, nota3;
    float media;
 
    printf("*** Programa de calculo da media ***\n");

    printf("Digite a sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a sua terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media é: %.2f", media);

   

return 0;
}