
#include <stdio.h>

int main() {

    char estado1[20], estado2[20];
    char codigo1[20],codigo2[20], cidade1[20], cidade2[20];
    int populacao1, populacao2, carta1, carta2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontosturisticos1, Pontosturisticos2;
    unsigned int Dencidadepopulacional1, Dencidadepopulacional2;
    unsigned int PIBpercapita1, PIBpercapita2;

    

    printf(" **** cartas suoer trunfo ****\n");


    printf("Digite o numero da carta: \n");
    scanf("%d", &carta1);
    printf("Numero da carta: %d\n", carta1);

    printf("Digitr digite seu estado: \n");
    scanf("%s", &estado1);
    printf("Nome do estado: %s\n", estado1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("Nome da cidade: %s\n", cidade1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo1);
    printf("codigo da carta: %s\n", codigo1);

    printf("Digite a populaçao: \n");
    scanf("%d", &populacao1);
    printf("populaçao da cidade: %d\n", populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &Area1);
    printf("Area da cidade: %f\n", Area1);

    printf("Digite o PiB: \n");
    scanf("%f", &PIB1);
    printf("PIB: %f\n", PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%s", &Pontosturisticos1);
    printf("Numero de pontos turisticos: %s\n", Pontosturisticos1);

    PIBpercapita1 = PIB1 / populacao1;
    PIBpercapita2 = PIB2 / populacao2;

    Dencidadepopulacional1 = populacao1 / Area1;
    Dencidadepopulacional2 = populacao2 / Area2;

    printf("PIB per capita: %u\n", PIBpercapita1);
    
    printf("Densidade populacional: %u\n", Dencidadepopulacional1);



    

    printf("Digite o numero da carta: \n");
    scanf("%d", &carta2);
    printf("Numero da carta: %d\n", carta2);

    printf("Digitr digite seu estado: \n");
    scanf("%s", &estado2);
    printf("Nome do estado: %s\n", estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("Nome da cidade: %s\n", cidade2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo2);
    printf("codigo da carta: %s\n", codigo2);

    printf("Digite a populaçao: \n");
    scanf("%d", &populacao2);
    printf("populaçao da cidade: %d\n", populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &Area2);
    printf("Area da cidade: %f\n", Area2);

    printf("Digite o PiB: \n");
    scanf("%f", &PIB2);
    printf("PIB: %f\n", PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%s", &Pontosturisticos2);
    printf("Numero de pontos turisticos: %s\n", Pontosturisticos2);

    printf("PIB per capita: %u\n", PIBpercapita2);
    printf("Densidade populacional: %u\n", Dencidadepopulacional2);

    PIBpercapita1 = PIB1 / populacao1;
    PIBpercapita2 = PIB2 / populacao2;

    Dencidadepopulacional1 = populacao1 / Area1;
    Dencidadepopulacional2 = populacao2 / Area2;

    

   
    return 0;
}