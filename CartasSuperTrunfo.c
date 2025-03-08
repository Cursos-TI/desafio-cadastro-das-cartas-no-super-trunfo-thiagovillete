#include <stdio.h>

int main () {

    //Declaração das variáveis da cartão A
    char estadoA[4] = "A";
    char codigoCartaA[6] = "A01";
    char nomeCidadeA[20] = "";
    int populacaoA = 1;
    float areaA = 1;
    float pibA = 1;
    int pontosTuristicosA = 1;
    float densidadeDemograficaA = (float) populacaoA / areaA;
    float pibPerCapitaA = (float) pibA / populacaoA;


    //Declaração das variáveis da cartão B
    char estadoB[4] = "A";
    char codigoCartaB[6] = "B02";
    char nomeCidadeB[20] = "";
    int populacaoB = 1;
    float areaB = 1;
    float pibB = 1;
    int pontosTuristicosB = 1;
    float densidadeDemograficaB = (float) populacaoB / areaB;
    float pibPerCapitaB = (float) pibB / populacaoB;


    //Mensagem inicial
    printf("Bem-vindo! Vamos cadastrar duas cartas do nosso super trunfo de cidades.\n");
    printf("\n");

    //Cadastro da primeira carta
    printf("Vamos começar digitando os dados da primeira carta.\n");
    printf("Qual o código do estado? Exemplos: MG, SP, RJ, etc\n");
    scanf("%2s", estadoA);
    printf("Qual o nome da cidade? Escrever tudo junto, como por exemplo RiodeJaneiro\n");
    scanf("%s", nomeCidadeA);
    printf("Qual a população da cidade?\n");
    scanf("%d", &populacaoA);
    printf("Qual a área da cidade em quilômetros quadrados?\n");
    scanf("%f", &areaA);
    printf("Qual o PIB da cidade em bilhões?\n");
    scanf("%f", &pibA);
    printf("Quantos pontos turisticos a cidade tem?\n");
    scanf("%d", &pontosTuristicosA);
    densidadeDemograficaA = (float) populacaoA / areaA;
    pibPerCapitaA = (float) pibA / populacaoA;
    printf("\n");


    //Cadastro da segunda carta
    printf("Agora vamos digitar os dados da segunda carta.\n");
    printf("Qual o código do estado? Exemplos: MG, SP, RJ, etc\n");
    scanf("%2s", estadoB);
    printf("Qual o nome da cidade? Escrever tudo junto, como por exemplo RiodeJaneiro\n");
    scanf("%s", nomeCidadeB);
    printf("Qual a população da cidade?\n");
    scanf("%d", &populacaoB);
    printf("Qual a área da cidade em quilômetros quadrados?\n");
    scanf("%f", &areaB);
    printf("Qual o PIB da cidade em bilhões?\n");
    scanf("%f", &pibB);
    printf("Quantos pontos turisticos a cidade tem?\n");
    scanf("%d", &pontosTuristicosB);
    densidadeDemograficaB = (float) populacaoB / areaB;
    pibPerCapitaB = (float) pibB / populacaoB;
    printf("\n");

    //Imprime dados da primeira carta
    printf("Dados da primeira carta:\n");
    printf("Código: %s\n", codigoCartaA);
    printf("Estado: %s\n", estadoA);
    printf("Nome da cidade: %s\n", nomeCidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área (km²): %.2f\n", areaA);
    printf("PIB (em bilhões): %.2f\n", pibA);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosA);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemograficaA);
    printf("PIB per capita: %.2f\n", pibPerCapitaA);
    printf("\n");

    //Imprime dados da segunda carta
    printf("Dados da segunda carta:\n");
    printf("Código: %s\n", codigoCartaB);
    printf("Estado: %s\n", estadoB);
    printf("Nome da cidade: %s\n", nomeCidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área (km²): %.2f\n", areaB);
    printf("PIB (em bilhões): %.2f\n", pibB);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosB);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemograficaB);
    printf("PIB per capita: %.2f\n", pibPerCapitaB);
    printf("\n");

    return 0;

}
