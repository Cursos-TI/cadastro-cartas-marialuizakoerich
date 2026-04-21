#include <stdio.h>

int main () {
    char estado1[50];
    int codigoCarta1;
    char nomeCidade1[50];
    int populacaoCidade1;
    float areaEmKm1;
    float pib1;
    int numeroPontosTuristicos1;
    double densidadePopulacional1;
    double pibPerCapita1;

    //CARTA 1
    printf("Digite o Estado da carta 1: \n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta 1: \n");
    scanf("%d", &codigoCarta1);
    
    printf("Digite a cidade da carta 1: \n");
    scanf("%s", nomeCidade1);
    
    printf("Digite a população cidade da carta 1: \n");
    scanf("%d", &populacaoCidade1);
    
    printf("Digite a área em km2 da cidade da carta 1: \n");
    scanf("%f", &areaEmKm1);
    
    printf("Digite o PIB da cidade da carta 1: \n");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos da carta 1: \n");
    scanf("%d", &numeroPontosTuristicos1);

    densidadePopulacional1 = populacaoCidade1 / areaEmKm1;
    pibPerCapita1 = pib1 / populacaoCidade1;

    //------------------------------------------------------------------------//

    // CARTA 2
    char estado2[50];
    int codigoCarta2;
    char nomeCidade2[50];
    int populacaoCidade2;
    float areaEmKm2;
    float pib2;
    int numeroPontosTuristicos2;
    double densidadePopulacional2;
    double pibPerCapita2;

    printf("Agora vamos para a carta nº2:\n");
    printf("Digite o Estado da carta 2: \n");
    scanf("%s", estado2);
    
    printf("Digite o código da carta 2: \n");
    scanf("%d", &codigoCarta2);
    
    printf("Digite a cidade da carta 2: \n");
    scanf("%s", nomeCidade2);
    
    printf("Digite a população cidade da carta 2: \n");
    scanf("%d", &populacaoCidade2);
    
    printf("Digite a área em km2 da cidade da carta 2: \n");
    scanf("%f", &areaEmKm2);
    
    printf("Digite o PIB da cidade da carta 2: \n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos da carta 2: \n");
    scanf("%d", &numeroPontosTuristicos2);

    densidadePopulacional2 = populacaoCidade2 / areaEmKm2;
    pibPerCapita2 = pib2 / populacaoCidade2;


    //------------------------------------------------------------------------//
    //EXIBIÇÃO CARTAS 

    //CARTA1
    printf("\n");
    printf("CARTA1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacaoCidade1);
    printf("Área km²: %.2f km² \n", areaEmKm1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadePopulacional1);
    printf("PIB Per Capita: %.3f reais", pibPerCapita1);
    printf("\n");
    
    printf("-----------------------------------------------------------\n");

    printf("\n");
    printf("CARTA2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacaoCidade2);
    printf("Área km²: %.2f km² \n", areaEmKm2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadePopulacional2);
    printf("PIB Per Capita: %.3f reais", pibPerCapita2);
    
    return 0;

    //CARTA1

}