#include <stdio.h>

int main(){

    char estado1[50], estado2[50];
    char codigo1[50],codigo2[50], cidade1[50], cidade2[50];
    int populaçao1, populaçao2, carta1, carta2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontosturisticos1, Pontosturisticos2;

    // primeira carta;

    printf("Digite o numero da carta: \n");
    scanf("%d", &carta1);

    printf("Digitr digite seu estado: \n");
    scanf("%s", &estado1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite a populaçao: \n");
    scanf("%d", &populaçao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &Area1);

    printf("Digite o PiB: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%s", &Pontosturisticos1);

    // seguda carta;

    printf("Digite o numero da carta: \n");
    scanf("%d", &carta2);

    printf("Digitr digite seu estado: \n");
    scanf("%s", &estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite a populaçao: \n");
    scanf("%d", &populaçao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &Area2);

    printf("Digite o PiB: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%s", &Pontosturisticos2);

    // printif para o resultado final;

    printf(" **** cartas suoer trunfo ****\n");


    printf("Numero da carta: %s\n", carta1);
    printf("codigo da carta: %f\n", codigo1);
    printf("Nome do estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("populaçao da cidade: %f\n", populaçao1);
    printf("Area da cidade: %f\n", Area1);
    printf("PIB: %f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", Pontosturisticos1);




    printf("Numero da carta: %s\n", carta2);
    printf("codigo da carta: %f\n", codigo2);
    printf("Nome do estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("populaçao da cidade: %f\n", populaçao2);
    printf("Area da cidade: %f\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", Pontosturisticos2);

    return 0;

}
