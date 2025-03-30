
#include <stdio.h>

int main() {

    char estado1[20], estado2[20];
    char codigo1[20],codigo2[20], cidade1[20], cidade2[20];
    int populaçao1, populaçao2, carta1, carta2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontosturisticos1, Pontosturisticos2;
    float Dencidadepopulacional1, Dencidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;


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

    PIBpercapita1 = PIB1 / populaçao1;
    PIBpercapita2 = PIB2 / populaçao2;

    Dencidadepopulacional1 = populaçao1 / Area1;
    Dencidadepopulacional2 = populaçao2 / Area2;

    

    printf(" **** cartas suoer trunfo ****\n");

    printf("Numero da carta: %s\n", carta1);
    printf("codigo da carta: %f\n", codigo1);
    printf("Nome do estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("populaçao da cidade: %f\n", populaçao1);
    printf("Area da cidade: %f\n", Area1);
    printf("PIB: %f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", Pontosturisticos1);
    printf("PIB per capita: %f\n", PIBpercapita1);
    printf("Densidade populacional: %f\n", Dencidadepopulacional1);



    printf("Numero da carta: %s\n", carta2);
    printf("codigo da carta: %f\n", codigo2);
    printf("Nome do estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("populaçao da cidade: %f\n", populaçao2);
    printf("Area da cidade: %f\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", Pontosturisticos2);
    printf("PIB per capita: %f\n", PIBpercapita2);
    printf("Densidade populacional: %f\n", Dencidadepopulacional2);

    return 0;
}