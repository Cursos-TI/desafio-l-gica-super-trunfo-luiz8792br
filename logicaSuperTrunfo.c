#include <stdio.h>

int main() {
    // === Dados das cartas ===
    char nome1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 2490.0; // em bilhões USD
    int pontos_turisticos1 = 70;
    float densidade1 = populacao1 / area1;

    char nome2[] = "Canadá";
    int populacao2 = 38900000;
    float area2 = 9984670.0;
    float pib2 = 2250.0;
    int pontos_turisticos2 = 65;
    float densidade2 = populacao2 / area2;

    // === Atributos disponíveis ===
    int atributo1, atributo2;
    float valor1_carta1, valor2_carta1, valor1_carta2, valor2_carta2;

    // === Menu interativo: escolha do primeiro atributo ===
    printf("=== SUPER TRUNFO - Nível Mestre ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Validação
    if (atributo1 < 1 || atributo1 > 5) {
        printf("Atributo inválido!\n");
        return 1;
    }

    // === Menu dinâmico: escolha do segundo atributo (remover opção já usada) ===
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5) {
        printf("Atributo inválido ou repetido!\n");
        return 1;
    }

    // === Atribuir valores dos atributos escolhidos ===
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos_turisticos1; valor1_carta2 = pontos_turisticos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos_turisticos1; valor2_carta2 = pontos_turisticos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
    }

    // === Mostrar comparação ===
    printf("\nComparando %s e %s com dois atributos...\n", nome1, nome2);

    // Exibir valores
    printf("\nAtributo 1: ");
    switch (atributo1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", nome1, valor1_carta1, nome2, valor1_carta2);

    printf("\nAtributo 2: ");
    switch (atributo2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", nome1, valor2_carta1, nome2, valor2_carta2);

    // === Regra especial para densidade: menor vence ===
    float soma1 = (atributo1 == 5 ? -valor1_carta1 : valor1_carta1) +
                  (atributo2 == 5 ? -valor2_carta1 : valor2_carta1);
    float soma2 = (atributo1 == 5 ? -valor1_carta2 : valor1_carta2) +
                  (atributo2 == 5 ? -valor2_carta2 : valor2_carta2);

    // Exibir soma
    printf("\nSoma ajustada dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    // === Resultado final com operador ternário ===
    printf("\nResultado final: ");
    soma1 > soma2 ? printf("%s venceu!\n", nome1) :
    soma2 > soma1 ? printf("%s venceu!\n", nome2) :
                    printf("Empate!\n");

    return 0;
}
