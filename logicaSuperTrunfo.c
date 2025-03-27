#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("****************************************\n");
    printf("   CADASTRO DE CARTAS SUPER TRUNFO\n");
    printf("****************************************\n");
    
    // Entrada de dados para a primeira carta
    printf("\n========================================\n");
    printf("               CARTA 1\n");
    printf("========================================\n");
    printf("Digite a letra do estado (A-H) da primeira carta: ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %49s", cidade1);
    printf("Digite a população da primeira cidade: ");
    scanf(" %lu", &populacao1);
    printf("Digite a área da primeira cidade (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira cidade (em bilhões): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("\n========================================\n");
    printf("               CARTA 2\n");
    printf("========================================\n");
    printf("Digite a letra do estado (A-H) da segunda carta: ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: A01): ");
    scanf(" %3s", codigo2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %49s", cidade2);
    printf("Digite a população da segunda cidade: ");
    scanf(" %lu", &populacao2);
    printf("Digite a área da segunda cidade (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);
    
    // Comparação de poderes
    printf("\n========================================\n");
    printf("         COMPARAÇÃO DE PODERES\n");
    printf("========================================\n");
    printf("População: Carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
    printf("Área: Carta %d venceu\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", densidade1 < densidade2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", superPoder1 > superPoder2 ? 1 : 2);
    
    // Resultado final
    printf("\n========================================\n");
    printf("         RESULTADO FINAL\n");
    printf("========================================\n");
    if (superPoder1 > superPoder2) {
        printf("A Carta 1 é a vencedora com um Super Poder de %.2f contra %.2f!\n", superPoder1, superPoder2);
    } else if (superPoder2 > superPoder1) {
        printf("A Carta 2 é a vencedora com um Super Poder de %.2f contra %.2f!\n", superPoder2, superPoder1);
    } else {
        printf("Empate! Ambas as cartas possuem um Super Poder de %.2f!\n", superPoder1);
    }
    
    return 0;
}