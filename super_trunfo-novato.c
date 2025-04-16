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
    printf("- Nível novato\n");
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
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
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
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontur2);
    
    // exibição dos dados
    printf("\n\n");
    printf("- Carta %s0%d\n", estado1, carta1);
    printf("Nome da cidade: %s", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontur1);
    printf("\n");
    printf("- Carta %s0%d\n", estado2, carta2);
    printf("Nome da cidade: %s", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontur2);

}