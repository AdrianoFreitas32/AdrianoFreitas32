
#include <stdio.h>

int main() {

    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20], cidade1[20], cidade2[20];
    int populacao1, populacao2, carta1, carta2;
    int Area1, Area2;
    int PIB1, PIB2;
    int Pontosturisticos1, Pontosturisticos2;
    float Dencidadepopulacional1, Dencidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;
    float superpoder1, superpoder2;
    float resultadopopulacao, resultadoarea, resultadoPBI, resultadopontosturistico,
    resultadopbipercapto, resultadodencidadepopulacional, resultadosuperpoder;

    resultadoarea = Area1 > Area2;
    resultadoPBI = PIB1 > PIB2;
    resultadopopulacao = populacao1 > populacao2;
    resultadopontosturistico = Pontosturisticos1 > Pontosturisticos2;
    resultadopbipercapto = PIBpercapita1 > PIBpercapita2;
    resultadodencidadepopulacional = Dencidadepopulacional1 > Dencidadepopulacional2;
    resultadosuperpoder = superpoder1 > superpoder2;



    superpoder1 = populacao1 + Area1 + PIB1 + Pontosturisticos1;
    superpoder2 = populacao2 + Area2 + PIB2 + Pontosturisticos2;

    

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
    printf("populaçao da cidade: %d mil\n", populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%d", &Area1);
    printf("Area da cidade: %d Km²\n", Area1);

    printf("Digite o PiB: \n");
    scanf("%d", &PIB1);
    printf("PIB: %d milhoes\n", PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontosturisticos1);
    printf("Numero de pontos turisticos: %d\n", Pontosturisticos1);

    PIBpercapita1 = PIB1 / populacao1;

    Dencidadepopulacional1 = populacao1 / Area1;
    

    printf("PIB per capita: %.2f\n", PIBpercapita1);
    
    printf("Densidade populacional: %.2f\n", Dencidadepopulacional1);

    printf("Super poder: %.2f\n", superpoder1);



    

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
    printf("populaçao da cidade: %d mil\n", populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%d", &Area2);
    printf("Area da cidade: %d Km²\n", Area2);

    printf("Digite o PiB: \n");
    scanf("%d", &PIB2);
    printf("PIB: %d milhoes\n", PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontosturisticos2);
    printf("Numero de pontos turisticos: %d\n", Pontosturisticos2);

    PIBpercapita2 = PIB2 / populacao2;
    Dencidadepopulacional2 = populacao2 / Area2;

    printf("PIB per capita: %.2f\n", PIBpercapita2);

    printf("Densidade populacional: %.2f\n", Dencidadepopulacional2);


printf("Super poder: %.2f\n", superpoder2);

printf("Resultado Populacao: %f\n", resultadopopulacao);
printf("Resultado Area: %f\n", resultadoarea);
printf("Resultado PIB: %f\n", resultadoPBI);
printf("Resultado Pontos Turisticos: %f\n", resultadopontosturistico);
printf("Resultado Dencidade Populacional: %f\n", resultadodencidadepopulacional);
printf("Resultado PIB percapito: %f\n", resultadopbipercapto);
printf("Resultado Super Poder: %f\n", resultadosuperpoder);



   
    return 0;
}