#include <stdio.h>
#include <string.h>

int main() {
    int codigo1, codigo2, pontos1, pontos2;
    char nome1[50], nome2[50], estado1[3], estado2[3];
    unsigned long int populacao1, populacao2;
    float area1, area2, densidade1, densidade2, superpoder1, superpoder2;
    double pib1, pib2, percapita1, percapita2;

    printf("Digite os dados da Carta 1:\n");
    printf("Nome: "); scanf(" %49[^\n]", nome1);
    printf("Estado: "); scanf(" %2[^\n]", estado1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%lf", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontos1);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome: "); scanf(" %49[^\n]", nome2);
    printf("Estado: "); scanf(" %2[^\n]", estado2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%lf", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontos2);

    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    percapita1 = (populacao1 > 0) ? pib1 / populacao1 : 0;
    superpoder1 = (float)populacao1 + area1 + (float)pib1 + (float)pontos1 + (float)percapita1 + (densidade1 > 0 ? 1.0f / densidade1 : 0);

    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
    percapita2 = (populacao2 > 0) ? pib2 / populacao2 : 0;
    superpoder2 = (float)populacao2 + area2 + (float)pib2 + (float)pontos2 + (float)percapita2 + (densidade2 > 0 ? 1.0f / densidade2 : 0);

    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos1 > pontos2) ? 1 : 2, (pontos1 > pontos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (percapita1 > percapita2) ? 1 : 2, (percapita1 > percapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2) ? 1 : 2, (superpoder1 > superpoder2));

    return 0;
}
