#include <stdio.h>

int main(){
    //VARIAVEIS
    char  estado1 [2], estado2 [2];
    char codigo_carta1 [10], codigo_carta2 [10];
    char nome_cidade1 [30], nome_cidade2 [30];
    unsigned long int populacao1, populacao2;
    float area1, area2, densidade_populacional1, densidade_populacional2;
    float pib1, pib2, pibpercapita1, pibpercapita2, superPoder1, superPoder2;
    int numero_pontos_turisticos1, numero_pontos_turisticos2;

    //Entrada de dados para a primeira carta

    printf("*** Vamos cadastrar a primeira carta. *** \n");

    // Sigla do estado da primeira carta
    printf("Digite as siglas do estado: ");
    scanf(" %s" , &estado1);

    // Código da  primeira carta
    printf("Digite o codigo da carta, siga este formato: SP001 (SP= iniciais do estado, 001= numero da carta): ");
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
   printf("Digite as siglas do estado: ");
   scanf(" %s", &estado2);

   printf("Digite o codigo da carta, siga este formato: SP001 (SP= iniciais do estado, 001= numero da carta): ");
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

    //Comparando a população
    printf("\n\n **** Atributo população **** \n");
    printf("Carta 1 -- %s : %lu\n", nome_cidade1, populacao1);
    printf("Carta 2 -- %s : %lu\n", nome_cidade2, populacao2);
    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu! \n", nome_cidade2);
    }

    //Comparando a área
    printf("\n\n **** Atributo área **** \n");
    printf("Carta 1 -- %s : %f\n", nome_cidade1, area1);
    printf("Carta 2 -- %s : %f\n", nome_cidade2, area2);
    if (area1 > area2){
        printf("Resultado : Carta 1 (%s) venceu!\n", nome_cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu! ", nome_cidade2);
    }

    //Comparando o número de pontos turísticos
    printf("\n\n **** Atributo pontos turísticos **** \n");
    printf("Carta 1 -- %s : %d\n", nome_cidade1, numero_pontos_turisticos1);
    printf("Carta 2 -- %s : %d\n", nome_cidade2, numero_pontos_turisticos2);
    if (numero_pontos_turisticos1 > numero_pontos_turisticos2){
        printf("Resultado : Carta 1 (%s) venceu!\n", nome_cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu! ", nome_cidade2);
    }

    //Comparando a densidade populacional
    printf("\n\n **** Atributo densidade populacional **** \n");
    printf("Carta 1 -- %s : %f\n", nome_cidade1, densidade_populacional1);
    printf("Carta 2 -- %s : %f\n", nome_cidade2, densidade_populacional2);
    if (densidade_populacional1 < densidade_populacional2){
        printf("Resultado : Carta 1 (%s) venceu!\n", nome_cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu! ", nome_cidade2);
    }

    //Comparando o PIB per capita
    printf("\n\n **** Atributo PIB per capita **** \n");
    printf("Carta 1 -- %s : %f\n", nome_cidade1, pibpercapita1);
    printf("Carta 2 -- %s : %f\n", nome_cidade2, pibpercapita2);
    if (pibpercapita1 > pibpercapita2){
        printf("Resultado : Carta 1 (%s) venceu!\n", nome_cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu! ", nome_cidade2);
    }

    //Comparando o Super Poder

    printf("\n\n **** Atributo Super Poder **** \n");
    printf("Carta 1 -- %s : %f\n", nome_cidade1, superPoder1);
    printf("Carta 2 -- %s : %f\n", nome_cidade2, superPoder2);
    if (superPoder1 > superPoder2){
        printf("Resultado : Carta 1 (%s) venceu!\n", nome_cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu! ", nome_cidade2);
    }


    printf("\n\n");


    return 0;
}
