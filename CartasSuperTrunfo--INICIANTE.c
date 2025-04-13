#include <stdio.h>

int main(){
    //VARIAVEIS
    char estado1, estado2;
    char codigo_carta1 [10], codigo_carta2 [10];
    char nome_cidade1 [30], nome_cidade2 [30];
    int populacao1, populacao2;
    float area1, area2, densidade_populacional1, densidade_populacional2;
    float pib1, pib2, pibpercapita1, pibpercapita2;
    int numero_pontos_turisticos1, numero_pontos_turisticos2;

    //Entrada de dados para a primeira carta

    printf("*** Vamos cadastrar a primeira carta. *** \n");

    // Sigla do estado da primeira carta
    printf("Digite a sigla inicial do estado: ");
    scanf(" %c" , &estado1);

    // Código da  primeira carta
    printf("Digite o codigo da carta, siga este formato: A001 (A= inicial do estado, 001= numero da carta): ");
    scanf(" %s", codigo_carta1);

    // Nome da cidade da primeira carta
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade1);
    
    // População da primeira carta
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);

    // Area da primeira carta
    printf("Digite a area da cidade: ");
    scanf(" %f", &area1);

    // PIB da primeira carta
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib1);

    // Número de pontos turísticos da primeira carta
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf(" %d", &numero_pontos_turisticos1);

   //Entrada de dados para a segunda carta
    printf("\n\n *** Vamos cadastrar a segunda carta. ***\n");
   printf("Digite a sigla inicial do estado: ");
   scanf(" %c", &estado2);

   printf("Digite o codigo da carta, siga este formato: A001 (A= inicial do estado, 001= numero da carta): ");
   scanf(" %s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade2);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a area da cidade: ");
    scanf(" %f", &area2);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf(" %d", &numero_pontos_turisticos2);

    //Cálculo da densidade populacional da primeira carta
    densidade_populacional1 = (float) populacao1 / area1;

    //Cálculo da densidade populacional da segunda carta
    densidade_populacional2 = (float) populacao2 / area2;

    //Cálculo do PIB per capita da primeira carta
    pibpercapita1 = pib1 / populacao1;

    //Cálculo do PIB per capita da segunda carta
    pibpercapita2 = pib2 / populacao2;
    


    // Exibindo os dados da primeira carta
    printf("\n\nDados da primeira carta:\n");
    printf("Sigla do estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);

    // Exibindo os dados da segunda carta
    printf("\n\nDados da segunda carta:\n");
    printf("Sigla do estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);


    return 0;






}
