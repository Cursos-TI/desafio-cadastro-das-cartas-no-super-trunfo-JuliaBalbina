#include <stdio.h>

//Desafio Super Trunfo
//Tema 3 - Nível Mestre 

int main() {

//Declarando as variáveis da primeira carta.

    char estado;
    char codigo[4];
    char cidade[20];
    unsigned int populacao;
    int pontos_turisticos;
    float area, pib;
    float densidade, percapita, densidadeInvertida;
    double superPoder;

//Declarando as variáveis da segunda carta.

    char estado2;
    char codigo2[4];
    char cidade2[20];
    unsigned int populacao2;
    int pontos_turisticos2;
    float area2, pib2;
    float densidade2, percapita2, densidadeInvertida2;
    double superPoder2;

//Cadastrando a primeira carta do usuário.

    printf("Bem vindo ao SuperTrunfo!");
    printf("\nPrimeira Carta!");
    printf("\nDigite uma letra de A a H para ser o seu estado:\n");
    scanf("%c", &estado);

    printf("\nDigite a mesma letra e um número de 01 a 04 para o código:\n");
    scanf("%s", &codigo);

    printf("\nDigite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("\nDigite o número de habitantes da cidade:\n");
    scanf("%d", &populacao);

    printf("\nDigite área(km²) da cidade:\n");
    scanf("%f", &area);

    printf("\nDigite o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("\nDigite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_turisticos);

//Cálculos da primeira carta

    densidade = (populacao / area);
    percapita = (pib / populacao);
    densidadeInvertida = (1 / densidade);
    superPoder = populacao + area + pib + percapita + pontos_turisticos + densidadeInvertida;
    
//Cadastrando a segunda carta do usuário.

    printf("\nSegunda Carta!");
    printf("\nDigite uma letra de A a H para ser o seu estado:\n");
    scanf("%s", &estado2);

    printf("\nDigite a mesma letra e um número de 01 a 04 para o código:\n");
    scanf("%s", &codigo2);

    printf("\nDigite o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("\nDigite o número de habitantes da cidade:\n");
    scanf("%d", &populacao2);

    printf("\nDigite área(km²) da cidade:\n");
    scanf("%f", &area2);

    printf("\nDigite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_turisticos2);

//Cálculos da segunda carta

    densidade2 = (populacao2 / area2);
    percapita2 = (pib2 / populacao2);
    densidadeInvertida2 = (1 / densidade);
    superPoder2 = populacao2 + area2 + pib2 + percapita2 + pontos_turisticos2 + densidadeInvertida2;

    //Comparando as Cartas

    printf("PRIMEIRA CARTA:");
    printf("\nEstado: %c", estado);
    printf("\nCódigo: %s", codigo);
    printf("\nCidade: %s", cidade);
    printf("\nPopulação: %u", populacao);
    printf("\nÁrea(km²): %.3f", area);
    printf("\nPIB: %.3f bilhões de reais", pib);
    printf("\nPontos Turísticos: %d", pontos_turisticos);
    printf("\nDensidade Populacional: %.3f hab/km²", densidade);
    printf("\nPIB per capita: %.3f reais", percapita);
    printf("\nSuper Poder %d", superPoder);

    printf("\n\nSEGUNDA CARTA:");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nCidade: %s", cidade2);
    printf("\nPopulação: %u", populacao2);
    printf("\nÁrea(km²): %.3f", area2);
    printf("\nPIB: %.3f bilhões de reais", pib2);
    printf("\nPontos Turísticos: %d", pontos_turisticos2);
    printf("\nDensidade Populacional: %.3f hab/km²", densidade2);
    printf("\nPIB per capita: %.3f reais", percapita2);
    printf("\nSuper Poder %f", superPoder2);

    printf("\n\nPRIMEIRA CARTA:");
    printf("\nPopulação: %d", populacao > populacao2);
    printf("\nÁrea(km²): %d", area > area2);
    printf("\nPIB: %d", pib > pib2);
    printf("\nPontos Turísticos: %d", pontos_turisticos > pontos_turisticos2);
    printf("\nDensidade Populacional: %d", densidadeInvertida < densidadeInvertida2);
    printf("\nPIB per capita: %d", percapita > percapita2);
    printf("\nSuper Poder: %d", superPoder > superPoder2);

    printf("\nSEGUNDA CARTA:");
    printf("\nPopulação: %d", populacao < populacao2);
    printf("\nÁrea(km²): %d", area < area2);
    printf("\nPIB: %d", pib < pib2);
    printf("\nPontos Turísticos: %d", pontos_turisticos < pontos_turisticos2);
    printf("\nDensidade Populacional: %d", densidadeInvertida > densidadeInvertida2);
    printf("\nPIB per capita: %d", percapita < percapita2);
    printf("\nSuper Poder: %d", superPoder < superPoder2);


//Fim do programa!
}
