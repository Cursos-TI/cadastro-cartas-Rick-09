#include <stdio.h>

int main(){
   
    char estado1[50], cidade1[50], código1[50];
    int população1, Turistico1;
    float PIB1, area1, densidadepopulacional1, pibpercapita1;

   
    char estado2[25], cidade2[56], código2[45];
    int população2, Turistico2;
    float PIB2, area2, densidadepopulacional2, pibpercapita2;


    // === ENTRADA DE DADOS CARTA 1 ===
    printf("Carta 1:\n");
 
    printf("Escreva uma letra de 'A' a 'H':\n");
    scanf("%s", estado1);

    printf("código da carta é:\n");
    printf("A01\n");

    printf("nome da cidade:\n");
    scanf("%s", cidade1);

    printf("População:\n");
    scanf("%d", &população1);

    printf("area(em km):\n");
    scanf(" %f", &area1);

    printf("PIB: produto interno bruto:\n");
    scanf(" %f", &PIB1);

    printf("Número de pontos turisticos:\n");
    scanf("%d", &Turistico1);


    // === ENTRADA DE DADOS CARTA 2 ===
    printf("\nCarta 2:\n");
 
    printf("Escreva uma letra de 'A' a 'H':\n");
    scanf("%s", estado2);

    printf("código da carta é:\n");
    printf("A01\n");

    printf("nome da cidade:\n");
    scanf("%s", cidade2);

    printf("População:\n");
    scanf("%d", &população2);

    printf("area(em km):\n");
    scanf(" %f", &area2);

    printf("PIB: produto interno bruto:\n");
    scanf(" %f", &PIB2);

    printf("Número de pontos turisticos:\n");
    scanf("%d", &Turistico2);


    
    // Carta 1
    densidadepopulacional1 = população1 / area1;
    pibpercapita1 = (PIB1 * 1000000000) / população1; // Se o PIB for digitado em bilhões

    // Carta 2
    densidadepopulacional2 = população2 / area2;
    pibpercapita2 = (PIB2 * 1000000000) / população2;


    // === EXIBIÇÃO DOS RESULTADOS ===
    printf("\n==================================\n");
    printf("Resultado Carta 1\n");
    printf("==================================\n");
    printf("estado: %s\n", estado1);
    printf("Codigo: A01\n");
    printf("Nome cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos Turisticos: %d\n", Turistico1);
   
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita1);


    printf("\n==================================\n");
    printf("Resultado das Carta 2\n");
    printf("==================================\n");
    printf("estado: %s\n", estado2);
    printf("Codigo: A01\n");
    printf("Nome cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos Turisticos: %d\n", Turistico2);
   
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita2);

    return 0;
}