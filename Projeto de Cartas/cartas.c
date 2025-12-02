#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
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
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Área (em km²): \n> ");
    scanf("%f", &area2);

    printf("PIB (em bilhões):\n> ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:\n> ");
    scanf("%d", &pontos2);

    /* ------------------------ RESULTADO ------------------------ */

    printf("\n   Cartas Cadastradas   \n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}