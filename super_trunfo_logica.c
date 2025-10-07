#include <stdio.h>

int main() {
    // === Cadastro da primeira carta ===
    char estado;
    char codigodacarta[12];
    char nomedacidade[30];
    unsigned long int populacao;
    float area, pib;
    int pontoturisticos;
    float densidade, pib_per_capita;

    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o seu estado: (A - H)\n");
    scanf(" %c", &estado);

    printf("Escreva o codigo da sua carta (ex: A01, B02...):\n");
    scanf("%s", codigodacarta);

    printf("Digite o nome da sua cidade:\n");
    scanf("%s", nomedacidade);

    printf("Informe a populacao:\n");
    scanf("%lu", &populacao);

    printf("Digite a area em km²:\n");
    scanf("%f", &area);

    printf("Informe o PIB (em bilhões):\n");
    scanf("%f", &pib);

    printf("Informe o numero de pontos turisticos:\n");
    scanf("%d", &pontoturisticos);

    densidade = populacao / area;
    pib_per_capita = pib / populacao;

    // === Cadastro da segunda carta ===
    char estado2;
    char codigodacarta2[12];
    char nomedacidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontoturisticos2;
    float densidade2, pib_per_capita2;

    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    printf("Digite o seu estado: (A - H)\n");
    scanf(" %c", &estado2);

    printf("Escreva o codigo da sua carta:\n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da sua cidade:\n");
    scanf("%s", nomedacidade2);

    printf("Informe a populacao:\n");
    scanf("%lu", &populacao2);

    printf("Digite a area em km²:\n");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões):\n");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos:\n");
    scanf("%d", &pontoturisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // === Exibição das cartas cadastradas ===
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\nPopulacao: %lu | Area: %.2f | PIB: %.2f | Pontos: %d | Densidade: %.2f | PIB per Capita: %.6f\n",
           estado, codigodacarta, nomedacidade, populacao, area, pib, pontoturisticos, densidade, pib_per_capita);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\nPopulacao: %lu | Area: %.2f | PIB: %.2f | Pontos: %d | Densidade: %.2f | PIB per Capita: %.6f\n",
           estado2, codigodacarta2, nomedacidade2, populacao2, area2, pib2, pontoturisticos2, densidade2, pib_per_capita2);

    // === Escolha de dois atributos ===
    int atributo1, atributo2;
    printf("\n=== ESCOLHA DOS ATRIBUTOS ===\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    // Menu dinâmico (remove o primeiro atributo da lista)
    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 6; i++) {
            if (i != atributo1) {
                switch (i) {
                    case 1: printf("1 - População\n"); break;
                    case 2: printf("2 - Área\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - Pontos Turísticos\n"); break;
                    case 5: printf("5 - Densidade Demográfica\n"); break;
                    case 6: printf("6 - PIB per Capita\n"); break;
                }
            }
        }
        printf("Sua escolha: ");
        scanf("%d", &atributo2);

        if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6)
            printf(" Escolha inválida! Tente novamente.\n");

    } while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6);

    // === Função auxiliar: obtém o valor de um atributo específico ===
    float valor1A, valor1B, valor2A, valor2B;

    switch (atributo1) {
        case 1: valor1A = populacao; valor2A = populacao2; break;
        case 2: valor1A = area; valor2A = area2; break;
        case 3: valor1A = pib; valor2A = pib2; break;
        case 4: valor1A = pontoturisticos; valor2A = pontoturisticos2; break;
        case 5: valor1A = densidade; valor2A = densidade2; break;
        case 6: valor1A = pib_per_capita; valor2A = pib_per_capita2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    switch (atributo2) {
        case 1: valor1B = populacao; valor2B = populacao2; break;
        case 2: valor1B = area; valor2B = area2; break;
        case 3: valor1B = pib; valor2B = pib2; break;
        case 4: valor1B = pontoturisticos; valor2B = pontoturisticos2; break;
        case 5: valor1B = densidade; valor2B = densidade2; break;
        case 6: valor1B = pib_per_capita; valor2B = pib_per_capita2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // === Comparação dos atributos individualmente ===
    printf("\n=== RESULTADOS DAS COMPARAÇÕES ===\n");

    printf("\nAtributo 1: ");
    switch (atributo1) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
        case 6: printf("PIB per Capita"); break;
    }
    printf("\n%s: %.2f x %s: %.2f\n", nomedacidade, valor1A, nomedacidade2, valor2A);

    (atributo1 == 5)
        ? (valor1A < valor2A ? printf("→ %s venceu (menor densidade)\n", nomedacidade)
                             : (valor1A > valor2A ? printf("→ %s venceu (menor densidade)\n", nomedacidade2)
                                                  : printf("→ Empate!\n")))
        : (valor1A > valor2A ? printf("→ %s venceu\n", nomedacidade)
                             : (valor1A < valor2A ? printf("→ %s venceu\n", nomedacidade2)
                                                  : printf("→ Empate!\n")));

    printf("\nAtributo 2: ");
    switch (atributo2) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
        case 6: printf("PIB per Capita"); break;
    }
    printf("\n%s: %.2f x %s: %.2f\n", nomedacidade, valor1B, nomedacidade2, valor2B);

    (atributo2 == 5)
        ? (valor1B < valor2B ? printf("→ %s venceu (menor densidade)\n", nomedacidade)
                             : (valor1B > valor2B ? printf("→ %s venceu (menor densidade)\n", nomedacidade2)
                                                  : printf("→ Empate!\n")))
        : (valor1B > valor2B ? printf("→ %s venceu\n", nomedacidade)
                             : (valor1B < valor2B ? printf("→ %s venceu\n", nomedacidade2)
                                                  : printf("→ Empate!\n")));

    // === Soma total dos atributos ===
    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    printf("\nSOMA DOS ATRIBUTOS:\n%s: %.2f | %s: %.2f\n", nomedacidade, soma1, nomedacidade2, soma2);

    // === Resultado final ===
    if (soma1 == soma2)
        printf("\nResultado Final: EMPATE!\n");
    else
        printf("\nResultado Final:  %s venceu! \n", (soma1 > soma2) ? nomedacidade : nomedacidade2);

    return 0;
}
