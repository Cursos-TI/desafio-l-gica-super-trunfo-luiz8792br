#include <stdio.h>

int main() {
    // === Dados fixos das duas cartas (países) ===

    // Carta 1
    char nome1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 2490.0; // PIB em bilhões de dólares
    int pontos_turisticos1 = 70;
    float densidade1 = populacao1 / area1;

    // Carta 2
    char nome2[] = "Canadá";
    int populacao2 = 38900000;
    float area2 = 9984670.0;
    float pib2 = 2250.0; // PIB em bilhões de dólares
    int pontos_turisticos2 = 65;
    float densidade2 = populacao2 / area2;

    int escolha;

    // === Menu Interativo ===
    printf("=== SUPER TRUNFO: COMPARAÇÃO DE PAÍSES ===\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção (1 a 5): ");
    scanf("%d", &escolha);

    // === Lógica de comparação ===
    printf("\nComparando %s e %s...\n", nome1, nome2);

    switch (escolha) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões de dólares\n", nome1, pib1);
            printf("%s: %.2f bilhões de dólares\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", nome1, pontos_turisticos1);
            printf("%s: %d pontos turísticos\n", nome2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("%s: %.4f hab/km²\n", nome1, densidade1);
            printf("%s: %.4f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu! (menor densidade)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu! (menor densidade)\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, execute o programa novamente.\n");
            break;
    }

    return 0;
}
