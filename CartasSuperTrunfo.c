#include <stdio.h>

int main () {

    //Declaração das variáveis da cartão A
    char estadoA[4] = "A";
    char codigoCartaA[6] = "A01";
    char nomeCidadeA[20] = "";
    unsigned long populacaoA = 1;
    float areaA = 1;
    float pibA = 1;
    int pontosTuristicosA = 1;
    float densidadeDemograficaA = 1;
    double pibPerCapitaA = 1;
    double superPoderA = 1;
    int placarA = 0;


    //Declaração das variáveis da cartão B
    char estadoB[4] = "A";
    char codigoCartaB[6] = "B02";
    char nomeCidadeB[20] = "";
    unsigned long populacaoB = 1;
    float areaB = 1;
    float pibB = 1;
    int pontosTuristicosB = 1;
    float densidadeDemograficaB = 1;
    double pibPerCapitaB = 1;
    double superPoderB = 1;
    int placarB = 0;

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
    scanf("%lu", &populacaoA);
    printf("Qual a área da cidade em quilômetros quadrados?\n");
    scanf("%f", &areaA);
    printf("Qual o PIB da cidade em bilhões?\n");
    scanf("%f", &pibA);
    printf("Quantos pontos turisticos a cidade tem?\n");
    scanf("%d", &pontosTuristicosA);
    densidadeDemograficaA = (float) populacaoA / areaA;
    pibPerCapitaA = (double) (pibA * 1e9) / populacaoA; // PIB em bilhões convertido para unidades
    superPoderA = (double) populacaoA + areaA + pibA + pontosTuristicosA + pibPerCapitaA - densidadeDemograficaA;
    printf("\n");


    //Cadastro da segunda carta
    printf("Agora vamos digitar os dados da segunda carta.\n");
    printf("Qual o código do estado? Exemplos: MG, SP, RJ, etc\n");
    scanf("%2s", estadoB);
    printf("Qual o nome da cidade? Escrever tudo junto, como por exemplo RiodeJaneiro\n");
    scanf("%s", nomeCidadeB);
    printf("Qual a população da cidade?\n");
    scanf("%lu", &populacaoB);
    printf("Qual a área da cidade em quilômetros quadrados?\n");
    scanf("%f", &areaB);
    printf("Qual o PIB da cidade em bilhões?\n");
    scanf("%f", &pibB);
    printf("Quantos pontos turisticos a cidade tem?\n");
    scanf("%d", &pontosTuristicosB);
    densidadeDemograficaB = (float) populacaoB / areaB;
    pibPerCapitaB = (double) (pibB * 1e9) / populacaoB; // PIB em bilhões convertido para unidades
    superPoderB = (double) populacaoB + areaB + pibB + pontosTuristicosB + pibPerCapitaB - densidadeDemograficaB;
    printf("\n");

    //Imprime dados da primeira carta
    printf("Dados da primeira carta:\n");
    printf("Código: %s\n", codigoCartaA);
    printf("Estado: %s\n", estadoA);
    printf("Nome da cidade: %s\n", nomeCidadeA);
    printf("População: %lu\n", populacaoA);
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
    printf("População: %lu\n", populacaoB);
    printf("Área (km²): %.2f\n", areaB);
    printf("PIB (em bilhões): %.2f\n", pibB);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosB);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemograficaB);
    printf("PIB per capita: %.2f\n", pibPerCapitaB);
    printf("\n");

    //Imprime o vencedor
    printf("Comparação das cartas:\n");
    printf("\n");

    //Calcula e imprime resultado da comparação de populações
    if (populacaoA > populacaoB) {
        placarA++;
        printf("População: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeA, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else if (populacaoA < populacaoB) {
        placarB++;
        printf("População: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeB, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else {
        printf("Empate! Placar-> %s %d x %d %s\n", nomeCidadeA, placarA, placarB, nomeCidadeB);
    }

    //Calcula e imprime resultado da comparação de áreas
    if (areaA > areaB) {
        placarA++;
        printf("Área: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeA, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else if (areaA < areaB) {
        placarB++;
        printf("Área: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeB, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else {
        printf("Empate! Placar-> %s %d x %d %s\n", nomeCidadeA, placarA, placarB, nomeCidadeB);
    }

    //Calcula e imprime resultado da comparação de PIBs
    if (pibA > pibB) {
        placarA++;
        printf("PIB: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeA, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else if (pibA < pibB) {
        placarB++;
        printf("PIB: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeB, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else {
        printf("Empate! Placar-> %s %d x %d %s\n", nomeCidadeA, placarA, placarB, nomeCidadeB);
    }

    //Calcula e imprime resultado da comparação de pontos turísticos
    if (pontosTuristicosA > pontosTuristicosB) {
        placarA++;
        printf("Pontos turísticos: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeA, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else if (pontosTuristicosA < pontosTuristicosB) {
        placarB++;
        printf("Pontos turísticos: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeB, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else {
        printf("Empate! Placar-> %s %d x %d %s\n", nomeCidadeA, placarA, placarB, nomeCidadeB);
    }

    //Calcula e imprime resultado da comparação de densidades demográficas
    if (densidadeDemograficaA < densidadeDemograficaB) {
        placarA++;
        printf("Densidade demográfica: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeA, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else if (densidadeDemograficaA > densidadeDemograficaB) {
        placarB++;
        printf("Densidade demográfica: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeB, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else {
        printf("Empate! Placar-> %s %d x %d %s\n", nomeCidadeA, placarA, placarB, nomeCidadeB);
    }

    //Calcula e imprime resultado da comparação de PIBs per capita
    if (pibPerCapitaA > pibPerCapitaB) {
        placarA++;
        printf("PIB per capita: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeA, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else if (pibPerCapitaA < pibPerCapitaB) {
        placarB++;
        printf("PIB per capita: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeB, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else {
        printf("Empate! Placar-> %s %d x %d %s\n", nomeCidadeA, placarA, placarB, nomeCidadeB);
    }

    //Calcula e imprime resultado da comparação de super poderes
    if (superPoderA > superPoderB) {
        placarA++;
        printf("Super Poder: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeA, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else if (superPoderA < superPoderB) {
        placarB++;
        printf("Super Poder: %s venceu! Placar-> %s %d x %d %s\n", nomeCidadeB, nomeCidadeA, placarA, placarB, nomeCidadeB);
    } else {
        printf("Empate! Placar-> %s %d x %d %s\n", nomeCidadeA, placarA, placarB, nomeCidadeB);
    }

    //Imprime o vencedor
    printf("Placar final: %s %d x %d %s\n", nomeCidadeA, placarA, placarB, nomeCidadeB);
    
    if (placarA > placarB) {
        printf("%s venceu!\n", nomeCidadeA);
    } else if (placarA < placarB) {
        printf("%s venceu!\n", nomeCidadeB);
    } else {
        printf("Empate!\n");
    }

    return 0;

}