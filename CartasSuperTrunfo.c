#include <stdio.h>
#include <stdlib.h> // Para usar a função exit()

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[5]; // Agora com tamanho 5 para acomodar o '\0'
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[5]; // Agora com tamanho 5 para acomodar o '\0'
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    if (scanf(" %c", &estado1) != 1) {
        printf("Erro na leitura do estado da Carta 1. Saindo do programa.\n");
        exit(1);
    }
    if (estado1 < 'A' || estado1 > 'H') {
        printf("Estado inválido para a Carta 1. Deve estar entre A e H. Saindo do programa.\n");
        exit(1);
    }
    printf("Código da Carta (ex: A01): ");
    if (scanf("%4s", codigo1) != 1) { // Lê no máximo 4 caracteres
        printf("Erro na leitura do código da Carta 1. Saindo do programa.\n");
        exit(1);
    }
    if (codigo1[0] != estado1 || (codigo1[1] < '0' || codigo1[1] > '9') || (codigo1[2] < '0' || codigo1[2] > '9')) {
        printf("Código de carta inválido para a Carta 1. Deve começar com o estado e seguir de 01 a 04. Saindo do programa.\n");
        exit(1);
    }
    codigo1[3] = '\0'; // Garante que a string é terminada corretamente
     int numero_carta1 = (codigo1[1] - '0') * 10 + (codigo1[2] - '0');
    if(numero_carta1 < 1 || numero_carta1 > 4){
         printf("Código de carta inválido para a Carta 1. O número da carta deve ser entre 01 e 04. Saindo do programa.\n");
        exit(1);
    }

    printf("Nome da Cidade: ");
    if (scanf(" %[^\n]", nomeCidade1) != 1) {
        printf("Erro na leitura do nome da cidade da Carta 1. Saindo do programa.\n");
        exit(1);
    }
    printf("População: ");
    if (scanf("%d", &populacao1) != 1) {
        printf("Erro na leitura da população da Carta 1. Saindo do programa.\n");
        exit(1);
    }
    printf("Área (em km²): ");
    if (scanf("%f", &area1) != 1) {
        printf("Erro na leitura da área da Carta 1. Saindo do programa.\n");
        exit(1);
    }
    printf("PIB (em bilhões de reais): ");
    if (scanf("%f", &pib1) != 1) {
        printf("Erro na leitura do PIB da Carta 1. Saindo do programa.\n");
        exit(1);
    }
    printf("Número de Pontos Turísticos: ");
    if (scanf("%d", &pontosTuristicos1) != 1) {
        printf("Erro na leitura do número de pontos turísticos da Carta 1. Saindo do programa.\n");
        exit(1);
    }
    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado (A-H): ");
     if (scanf(" %c", &estado2) != 1) {
        printf("Erro na leitura do estado da Carta 2. Saindo do programa.\n");
        exit(1);
    }
    if (estado2 < 'A' || estado2 > 'H') {
        printf("Estado inválido para a Carta 2. Deve estar entre A e H. Saindo do programa.\n");
        exit(1);
    }
    printf("Código da Carta (ex: B02): ");
    if (scanf("%4s", codigo2) != 1) { // Lê no máximo 4 caracteres
        printf("Erro na leitura do código da Carta 2. Saindo do programa.\n");
        exit(1);
    }
     if (codigo2[0] != estado2 || (codigo2[1] < '0' || codigo2[1] > '9') || (codigo2[2] < '0' || codigo2[2] > '9')) {
        printf("Código de carta inválido para a Carta 2. Deve começar com o estado e seguir de 01 a 04. Saindo do programa.\n");
        exit(1);
    }
    codigo2[3] = '\0'; // Garante que a string é terminada corretamente
    int numero_carta2 = (codigo2[1] - '0') * 10 + (codigo2[2] - '0');
    if(numero_carta2 < 1 || numero_carta2 > 4){
         printf("Código de carta inválido para a Carta 2. O número da carta deve ser entre 01 e 04. Saindo do programa.\n");
        exit(1);
    }
    printf("Nome da Cidade: ");
    if (scanf(" %[^\n]", nomeCidade2) != 1) {
        printf("Erro na leitura do nome da cidade da Carta 2. Saindo do programa.\n");
        exit(1);
    }
    printf("População: ");
     if (scanf("%d", &populacao2) != 1) {
        printf("Erro na leitura da população da Carta 2. Saindo do programa.\n");
        exit(1);
    }
    printf("Área (em km²): ");
    if (scanf("%f", &area2) != 1) {
        printf("Erro na leitura da área da Carta 2. Saindo do programa.\n");
        exit(1);
    }
    printf("PIB (em bilhões de reais): ");
    if (scanf("%f", &pib2) != 1) {
        printf("Erro na leitura do PIB da Carta 2. Saindo do programa.\n");
        exit(1);
    }
    printf("Número de Pontos Turísticos: ");
    if (scanf("%d", &pontosTuristicos2) != 1) {
        printf("Erro na leitura do número de pontos turísticos da Carta 2. Saindo do programa.\n");
        exit(1);
    }
    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
