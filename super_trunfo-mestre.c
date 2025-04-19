#include <stdio.h>

int main() {
    // introdução
    printf("*** SUPER TRUNFO ***\n");
    printf("- Nível averntureiro\n");
    printf("- Registro de 2 cartas\n");

    // declaração das variáveis
    int carta1, carta2;
    char estado1[2], estado2[2];
    //char codigo1[3], codigo2[3];
    char nome1[50], nome2[50];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontur1, pontur2;

    // adição de PIB per capita = PIB/população
    // adição de densidade pouplacional = população/área
    float pib_pc1, pib_pc2;
    float densidade1, densidade2;

    // adição de super poder
    // Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float.

    float super_poder1, super_poder2;
    
    // coletar os dados da primeira carta
    printf("\n");
    printf("Sobre a carta 1:\n");
    printf("Digite o número da carta (1-4): ");
    scanf("%d", &carta1);
    printf("Digite o estado (A-H): ");
    scanf("%s", estado1);
    printf("Digite o nome da cidade: ");
    getchar(); // Limpa o buffer do teclado antes de ler a string
    fgets (nome1, sizeof(nome1), stdin);
    printf("Digite a população (em milhões): ");
    scanf("%d", &populacao1);
    printf("Digite a área (em milhões): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontur1);

    // coletar os dados da segunda carta
    printf("\n");
    printf("Sobre a carta 2:\n");
    printf("Digite o número da carta (1-4): ");
    scanf("%d", &carta2);
    printf("Digite o estado (A-H): ");
    scanf("%s", estado2);
    printf("Digite o nome da cidade: ");
    getchar(); // Limpa o buffer do teclado antes de ler a string
    fgets (nome2, sizeof(nome2), stdin);
    printf("Digite a população (em milhões): ");
    scanf("%d", &populacao2);
    printf("Digite a área (em milhões): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontur2);

    // calculo de PIB per capita
    pib_pc1 = (float)pib1 / (float)populacao1;
    pib_pc2 = (float)pib2 / (float)populacao2;

    // calculo de densidade populacional
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // calculo de super poder
    super_poder1 = (float)populacao1 + area1 + pib1 + pontur1 + pib_pc1 + (1/densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontur2 + pib_pc2 + (1/densidade2);
    
    // exibição dos dados
    // carta 1
    printf("\n\n");
    printf("- Carta %s0%d\n", estado1, carta1);
    printf("Nome da cidade: %s", nome1);
    printf("População: %d\nMi", populacao1);
    printf("Área: %.2fMi km²\n", area1);
    printf("PIB: R$ %.2fMi\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontur1);
    printf("PIB per capita: R$ %.2fMi\n", (float)pib_pc1);
    printf("Densidade populacional: %.2fMi hab/km²\n", densidade1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n");
    // carta 2
    printf("- Carta %s0%d\n", estado2, carta2);
    printf("Nome da cidade: %s", nome2);
    printf("População: %d\nMi", populacao2);
    printf("Área: %.2fMi km²\n", area2);
    printf("PIB: R$ %.2fMi\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontur2);
    printf("PIB per capita: R$ %.2fMi\n", (float)pib_pc2);
    printf("Densidade populacional: %.2fMi hab/km²\n", densidade2);
    printf("Super Poder: %.2f\n", super_poder2);
    printf("\n");

    // Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
    printf("Comparação: \n");
    printf("Carta %s0%d vs Carta %s0%d\n", estado1, carta1, estado2, carta2);
    printf("0 = derrota\n1 = vitória\n");
    printf("\n");
    printf("População: %d\n", (populacao1 > populacao2));
    printf("Área: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Número de pontos turísticos: %d\n", (pontur1 > pontur2));
    printf("PIB per capita: %d\n", (pib_pc1 > pib_pc2));
    printf("Densidade populacional: %d\n", (densidade1 < densidade2));
    printf("Super Poder: %d\n", (super_poder1 > super_poder2));
    printf("\n");
    
}