#include <stdio.h>

int main(){
    //VARIAVEIS
    char estado1, estado2;
    char codigo_carta1 [10], codigo_carta2 [10];
    char nome_cidade1 [30], nome_cidade2 [30];
    unsigned long int populacao1, populacao2;
    float area1, area2, densidade_populacional1, densidade_populacional2;
    float pib1, pib2, pibpercapita1, pibpercapita2, superPoder1, superPoder2;
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
    scanf(" %lu", &populacao1);

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
    scanf(" %lu", &populacao2);

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

    superPoder1 = populacao1 + area1 + pib1 + pibpercapita1 + numero_pontos_turisticos1;
    superPoder2 = populacao2 + area2 + pib2 + pibpercapita2 + numero_pontos_turisticos2;
    


    // Exibindo os dados da primeira carta
    printf("\n\nDados da primeira carta:\n");
    printf("Sigla do estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibindo os dados da segunda carta
    printf("\n\nDados da segunda carta:\n");
    printf("Sigla do estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparando atributos das cartas e declarando vencedor
    printf("\n\n*** Comparando as cartas ***\n");
    printf("População: Carta 1 venceu? %lu\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu? %d\n", area1 > area2);
    printf("Pontos Turísticos: Carta 1 venceu? %d\n", numero_pontos_turisticos1 > numero_pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu? %d\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu? %d\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder : Carta 1 venceu? %d\n", superPoder1 > superPoder2);
    printf("\n\n");


    return 0;






}
