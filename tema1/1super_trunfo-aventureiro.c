// nota: tive que refazer todo o codigo pois não sabia como funcionava o commit e o push do github
//       e acabei por deletar todos os meus estudos sem querer, então algumas coisas desse código
//       não são apenas do nivel novato, alem de estar um pouco mais organizado e otimizado.

// EXEMPLO DE CARTA
//
// Carta 1: 1 (int 1-4)
// Estado: A (char[2] A-H)
// Código: A01 (char gerado a partir da Carta e do Estado)
// Nome da Cidade: São Paulo (char[50])
// População: 12325000 (int)
// Área: 1521.11 km² (float)
// PIB: 699.28 bilhões de reais (float)
// Número de Pontos Turísticos: 50 (int)

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
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontur1, pontur2;

    // adição de PIB per capita = PIB/população
    // adição de densidade pouplacional = população/área
    float pib_pc1, pib_pc2;
    float densidade1, densidade2;
    
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
    printf("\n");

    // o programa esta com alguns bugs
    // na hora de colocar alguns inputs ele simplesmente pula para o próximo
}