#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    //Declarando as variáveis da primeira carta.
        char estado;
        char codigo[4];
        char cidade[20];
        int pop, pontos;
        float area, pib;

    //Declarando as variáveis da segunda carta.
        char estado1;
        char codigo1[4];
        char cidade1[20];
        int pop1, pontos1;
        float area1, pib1;
    
    //Cadastrando os dados da primeira carta.

    printf("Bem vindo ao Super Trunfo!\nVamos cadastrar a sua primeira carta\n");
    printf("\nEscolha uma letra de A a H para representar seu estado:\n");
    scanf("%c", &estado);

    printf("\nInsira novamente a letra e escolha um número de 01 a 04 para o código:\n");
    scanf("%s", &codigo);

    printf("\nDigite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("\nDigite o número de habitantes da cidade:\n");
    scanf("%d", &pop);

    printf("\nDigite a área da cidade:\n");
    scanf("%f", &area);

    printf("\nDigite o valor do PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &pib);

    printf("\nDigite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos);

    printf ("\n------ PRIMEIRA CARTA CADASTRADA COM SUCESSO ------\n");

    // Cadastrando os dados da segunda carta.

    printf("\nAgora vamos cadastrar a sua segunda carta\n");
    printf("Lembrando que os dados da segunda carta não devem ser iguais aos da primeira!\n");

    printf("Escolha uma letra de A a H para representar seu estado:\n");
    scanf("%s", &estado1);

    printf("\nInsira novamente a letra e escolha um número de 01 a 04 para o código:\n");
    scanf("%s", &codigo1);

    printf("\nDigite o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("\nDigite o número de habitantes da cidade:\n");
    scanf("%d", &pop1);

    printf("\nDigite a área da cidade:\n");
    scanf("%f", &area1);

    printf("\nDigite o valor do PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &pib1);

    printf("\nDigite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos1);

    printf ("\n------ SEGUNDA CARTA CADASTRADA COM SUCESSO ------\n");

    //Exibindo os dados cadastrados de ambas as cartas.

    printf("\nAgora confira suas cartas cadastradas!\n");
    printf("\nCARTA 01:");
    printf("\nEstado: %c", estado);
    printf("\nCódigo da Carta: %s", codigo);
    printf("\nNome da Cidade: %s", cidade);
    printf("\nPopulação: %d", pop);
    printf("\nÁrea da Cidade (km):%f", area);
    printf("\nPIB: %f", pib);
    printf("\nPontos Turísticos %d\n", pontos);

    printf("\nCARTA 02:");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo da Carta: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", pop1);
    printf("\nÁrea da Cidade (km): %f", area1);
    printf("\nPIB: %f", pib1);
    printf("\nPontos Turísticos %d\n", pontos1);

    return 0;
}
