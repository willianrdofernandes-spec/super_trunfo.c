#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    float populacao1;
    float area1;
    float pib1;
    int pontos1;


    // Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    float populacao2;
    float area2; 
    float pib2;
    int pontos2;

    printf("    Cadastro de 2 Cartas do Super Trunfo    \n");

    /* ------------------------ CARTA 1 ------------------------ */
    printf("\n   Carta 1    \n");

    printf("Estado:\n> ");
    scanf(" %c", &estado1);

    printf("Código da carta:\n> ");
    scanf("%s", codigo1);

    printf("Nome da cidade:\n> ");
    scanf(" %[^\n]", cidade1);

    printf("População:\n> ");
    scanf("%f", &populacao1);

    printf("Área (em km²): \n> ");
    scanf("%f", &area1);

    printf("PIB (em bilhões):\n> ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos:\n> ");
    scanf("%d", &pontos1);

    /* ------------------------ CARTA 2 ------------------------ */
    printf("\n   Carta 2   \n");

    printf("Estado:\n> ");
    scanf(" %c", &estado2);

    printf("Código da carta:\n> ");
    scanf("%s", codigo2);

    printf("Nome da cidade:\n> ");
    scanf(" %[^\n]", cidade2);

    printf("População:\n> ");
    scanf("%f", &populacao2);

    printf("Área (em km²): \n> ");
    scanf("%f", &area2);

    printf("PIB (em bilhões):\n> ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:\n> ");
    scanf("%d", &pontos2);

     // Calculo das medias 
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // PIB em bilhões
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1; 
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    /* ------------------------ RESULTADO ------------------------ */

    printf("\n   Cartas Cadastradas   \n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.3f\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.3f pessoas/km²\n", densidade1);
    printf("PIB per capita: R$ %.3f\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.3f\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.3f pessoas/km²\n", densidade2);
    printf("PIB per capita: R$ %.3f\n", pib_per_capita2);

    return 0;
}