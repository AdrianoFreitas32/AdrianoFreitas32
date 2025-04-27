#include <stdio.h>

int main() {
int opcao;
float nota1, nota2, media;

printf("Menu do gerenciamento do Estudantes\n");
printf("1. Calcular media\n");
printf("2. Determinar Status\n");
printf("3. Sair\n");
printf("Escolha uma opção");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("Calcular a Media\n");
    printf("Digite a primeira nota: ");
      scanf("%f", &nota1);
      printf("Digite a segunda nota: ");
      scanf("%f", &nota2);
    if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10))
    {
        printf("Entrada correta\n");
       media = (nota1 + nota2) / 2; 
        printf("A media é %.2f\n", media);
    } else {
        printf("Entrada com valores errados");
    }
    
    break;
    case 2:
    printf("Determinar status\n");
    printf("Digite a média do estudante: ");
    scanf("%f", &media);
    // media >= 6 ? printf("Status: Aprovado\n") : printf("Status: Reprovado\n");
    if (media >= 7.0) {
        printf("Status: Aprovado\n");
      } else if (media >= 5.0) {
        printf("Status: Recuperação\n");
      } else {
        printf("Status: Reprovado\n");
      }
    break;
    case 3:
    printf("Saindo do programa...\n");
    break;
default:
    printf("Opção invalida\n");
    break;
}
return 0;
}