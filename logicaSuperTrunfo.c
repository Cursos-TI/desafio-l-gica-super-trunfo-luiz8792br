#include <stdio.h>

int main() {
    // === DECLARAÇÃO DAS VARIÁVEIS ===

    // Carta 1
    char estado1[3], codigo1[4], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Carta 2
    char estado2[3], codigo2[4], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // === ENTRADA DOS DADOS ===

    // Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1); // Lê até a quebra de linha

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // === CÁLCULOS DOS ATRIBUTOS DERIVADOS ===

    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // === EXIBIÇÃO DAS CARTAS ===

    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // === COMPARAÇÃO ENTRE AS CARTAS ===
    // Escolha do atributo para comparação:
    // Altere a variável abaixo para "populacao", "area", "pib", "densidade", "pib_per_capita"

    char atributo_comparado[] = "populacao"; // <-- Edite aqui para mudar o atributo de comparação

    printf("\n=== COMPARAÇÃO DAS CARTAS ===\n");
    printf("Atributo escolhido: %s\n", atributo_comparado);

    // Comparações usando if/else
    if (atributo_comparado[0] == 'p' && atributo_comparado[1] == 'o') {
        // População
        printf("Carta 1: %d\n", populacao1);
        printf("Carta 2: %d\n", populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (atributo_comparado[0] == 'a') {
        // Área
        printf("Carta 1: %.2f\n", area1);
        printf("Carta 2: %.2f\n", area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (atributo_comparado[0] == 'p' && atributo_comparado[1] == 'i' && atributo_comparado[2] == 'b') {
        // PIB
        printf("Carta 1: %.2f\n", pib1);
        printf("Carta 2: %.2f\n", pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (atributo_comparado[0] == 'd') {
        // Densidade Populacional (menor vence)
        printf("Carta 1: %.2f hab/km²\n", densidade1);
        printf("Carta 2: %.2f hab/km²\n", densidade2);
        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (atributo_comparado[0] == 'p' && atributo_comparado[4] == 'c') {
        // PIB per Capita
        printf("Carta 1: %.2f reais\n", pib_per_capita1);
        printf("Carta 2: %.2f reais\n", pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (pib_per_capita2 > pib_per_capita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else {
        printf("Atributo inválido para comparação.\n");
    }

    return 0;
}
