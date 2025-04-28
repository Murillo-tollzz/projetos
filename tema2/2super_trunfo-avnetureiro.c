// foco do desafio: inclusão de menu usando switch case

// build concluido com erros, mas o código está parcialmente funcional.
// principais erros:
// 1. o código não compila, pois o "arquivo de build ativo terminou com o código de saída -1".
// solucionado: ainda não sei :b

// ideia: recomeçar o código do zero, mas com base na mesma lógica do código atual mas dessa vez começando na implementação do menu para evitar os atuais erros.

#include <stdio.h>

int jogar(int carta1, int carta2, char estado1[], char estado2[], char nome1[], char nome2[], unsigned int populacao1, unsigned int populacao2, float area1, float area2, float pib1, float pib2, int pontur1, int pontur2, float pib_pc1, float pib_pc2, float densidade1, float densidade2, float super_poder1, float super_poder2) {
    printf("Iniciando o jogo...\n");
    // futuramente adicionar mais "espaços" para criação de cartas e uma opção extra para escolher com quais cartas jogar
    int jogo_opcao = 0;
    printf("Cartas selecionadas: %s0%d e %s0%d\n", estado1, carta1, estado2, carta2);
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - PIB per capita\n");
    printf("6 - Densidade populacional\n");
    printf("7 - Super Poder\n");
    scanf("%d", &jogo_opcao);

    switch (jogo_opcao) {
    case 1:
        printf("Comparando a população das duas cartas:\n");
        printf(" - %d VS %d -\n\n", populacao1, populacao2);
        if (populacao1 > populacao2) {
            printf("A carta %s0%d venceu!\n", estado1, carta1);
        } else if (populacao2 > populacao1) {
            printf("A carta %s0%d venceu!\n", estado2, carta2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 2:
        printf("Comparando a área das duas cartas:\n");
        printf(" - %.2f VS %.2f -\n\n", area1, area2);
        if (area1 > area2) {
            printf("A carta %s0%d venceu!\n", estado1, carta1);
        } else if (area2 > area1) {
            printf("A carta %s0%d venceu!\n", estado2, carta2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 3:
        printf("Comparando o PIB das duas cartas:\n");
        printf(" - %.2f VS %.2f -\n\n", pib1, pib2);
        if (pib1 > pib2) {
            printf("A carta %s0%d venceu!\n", estado1, carta1);
        } else if (pib2 > pib1) {
            printf("A carta %s0%d venceu!\n", estado2, carta2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("Comparando o número de pontos turísticos das duas cartas:\n");
        printf(" - %d VS %d -\n\n", pontur1, pontur2);
        if (pontur1 > pontur2) {
            printf("A carta %s0%d venceu!\n", estado1, carta1);
        } else if (pontur2 > pontur1) {
            printf("A carta %s0%d venceu!\n", estado2, carta2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("Comparando o PIB per capita das duas cartas:\n");
        printf(" - %.2f VS %.2f -\n\n", pib_pc1, pib_pc2);
        if (pib_pc1 > pib_pc2) {
            printf("A carta %s0%d venceu!\n", estado1, carta1);
        } else if (pib_pc2 > pib_pc1) {
            printf("A carta %s0%d venceu!\n", estado2, carta2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 6:
        printf("Comparando a densidade populacional das duas cartas:\n");
        printf(" - %.2f VS %.2f -\n\n", densidade1, densidade2);
        if (densidade1 < densidade2) {
            printf("A carta %s0%d venceu!\n", estado1, carta1);
        } else if (densidade2 < densidade1) {
            printf("A carta %s0%d venceu!\n", estado2, carta2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 7:
        printf("Comparando o Super Poder das duas cartas:\n");
        printf(" - %.2f VS %.2f -\n\n", super_poder1, super_poder2);
        if (super_poder1 > super_poder2) {
            printf("A carta %s0%d venceu!\n", estado1, carta1);
        } else if (super_poder2 > super_poder1) {
            printf("A carta %s0%d venceu!\n", estado2, carta2);
        } else {
            printf("Empate!\n");
        }
        break;
    default:
        printf("Essa opção não existe!\n");
        break;
    }
    
    //printf("A carta vencedora...\n");
    //if (super_poder1 > super_poder2) {
    //    printf("foi a carta %s0%d com %.2f pontos de Super Poder!\n", estado1, carta1, super_poder1);
    //} else if (super_poder2 > super_poder1) {
    //    printf("foi a carta %s0%d com %.2f pontos de Super Poder!\n", estado2, carta2, super_poder2);
    //} else {
    //    printf("foram as duas! (Empate)\n\n");
    //}

    main();
    return 0;
}

int criacao_de_cartas(int cartas, int carta1, int carta2, char estado1[], char estado2[], char nome1[], char nome2[], unsigned int populacao1, unsigned int populacao2, float area1, float area2, float pib1, float pib2, int pontur1, int pontur2, float pib_pc1, float pib_pc2, float densidade1, float densidade2, float super_poder1, float super_poder2) {
    
    // coletar os dados da primeira carta
    printf("\n");
    printf("Sobre a carta 1:\n");
    printf("Digite o número da carta (1-4): ");
    scanf("%d", &carta1);
    printf("Digite o estado (A-H): ");
    scanf("%s", &estado1);
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
    cartas++;
    printf("Cartas cadastradas: %d\n", cartas);

    // coletar os dados da segunda carta
    printf("\n");
    printf("Sobre a carta 2:\n");
    printf("Digite o número da carta (1-4): ");
    scanf("%d", &carta2);
    printf("Digite o estado (A-H): ");
    scanf("%s", &estado2);
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
    cartas++;
    printf("Cartas cadastradas: %d\n", cartas);

    // calculo de super poder
    super_poder1 = (float)populacao1 + area1 + pib1 + pontur1 + pib_pc1 + (1/densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontur2 + pib_pc2 + (1/densidade2);
    
    // calculo de PIB per capita

    pib_pc1 = (float)pib1 / (float)populacao1;
    pib_pc2 = (float)pib2 / (float)populacao2;

    menu(cartas, carta1, carta2, estado1, estado2, nome1, nome2, populacao1, populacao2, area1, area2, pib1, pib2, pontur1, pontur2, pib_pc1, pib_pc2, densidade1, densidade2, super_poder1, super_poder2);
    return 0;
}

int ver_cartas(int cartas, int carta1, int carta2, char estado1[], char estado2[], char nome1[], char nome2[], unsigned int populacao1, unsigned int populacao2, float area1, float area2, float pib1, float pib2, int pontur1, int pontur2, float pib_pc1, float pib_pc2, float densidade1, float densidade2, float super_poder1, float super_poder2) {

    printf("Existem um total de %d cartas cadastradas.\n", cartas);
    printf("As cartas cadastradas são:\n");

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

    menu(cartas, carta1, carta2, estado1, estado2, nome1, nome2, populacao1, populacao2, area1, area2, pib1, pib2, pontur1, pontur2, pib_pc1, pib_pc2, densidade1, densidade2, super_poder1, super_poder2);
    return 0;
    
}

int ver_regras() {
    printf("Regras do jogo:\n");
    printf("- O jogo é jogado entre dois jogadores, cada um com uma carta.\n");
    printf("- O jogador escolhe um atributo para comparar as cartas.\n");
    printf("- O jogador com o maior valor no atributo escolhido vence a rodada.\n");
    printf("- Os atributos disponíveis para comparação são:\n");
    printf("  1 - População\n");
    printf("  2 - Área\n");
    printf("  3 - PIB\n");
    printf("  4 - Número de pontos turísticos\n");
    printf("  5 - PIB per capita\n");
    printf("  6 - Densidade populacional\n");
    printf("  7 - Super Poder\n");
    printf("  - Obs: a densidade populacional é inversamente proporcional, ou seja,\n");
    printf("    quanto menor a densidade, maior o poder.\n");
    
    main();
    return 0;
}

int sair() {
    printf("Saindo do jogo...\n");
    return 0;
}

int menu(int cartas, int carta1, int carta2, char estado1[], char estado2[], char nome1[], char nome2[], unsigned int populacao1, unsigned int populacao2, float area1, float area2, float pib1, float pib2, int pontur1, int pontur2, float pib_pc1, float pib_pc2, float densidade1, float densidade2, float super_poder1, float super_poder2) {

    // introdução
    printf("*** SUPER TRUNFO ***\n");
    printf("- Por: tollzin\n");
    printf("- Versão: 0.5.0\n");
    printf("\n");

    // variáveis do menu
    int menu_opcao = 0;

    printf("Escolha uma das opções a seguir:\n");
    printf("1 - Jogar\n");
    printf("2 - Criar cartas\n");
    printf("3 - Ver cartas\n");
    printf("4 - Ver regras\n");
    printf("0 - Sair\n");
    printf("\n");
    scanf("%d", &menu_opcao);

    switch (menu_opcao) {
        case 1: {
            if (cartas < 2) {
                printf("Você precisa criar pelo menos 2 cartas para jogar!\n");
            } else {
                printf("Iniciando o jogo...\n");
                jogar(carta1, carta2, estado1, estado2, nome1, nome2, populacao1, populacao2, area1, area2, pib1, pib2, pontur1, pontur2, pib_pc1, pib_pc2, densidade1, densidade2, super_poder1, super_poder2);
            }
            break;
        }
        case 2: {
            printf("Criador de cartas...\n");
            criacao_de_cartas(cartas, carta1, carta2, estado1, estado2, nome1, nome2, populacao1, populacao2, area1, area2, pib1, pib2, pontur1, pontur2, pib_pc1, pib_pc2, densidade1, densidade2, super_poder1, super_poder2);
            break;
        }
        case 3: {
            printf("Ver cartas...\n");
            ver_cartas(cartas, carta1, carta2, estado1, estado2, nome1, nome2, populacao1, populacao2, area1, area2, pib1, pib2, pontur1, pontur2, pib_pc1, pib_pc2, densidade1, densidade2, super_poder1, super_poder2);
            break;
        }
        case 4: {
            printf("Ver regras...\n");
            ver_regras();
            break;
        }
        case 0: {
            printf("Saindo do jogo...\n");
            sair();
            break;
        }
        default: {
            printf("Essa opção não existe!\n");
            break;
        }
    }
    return 0;
}

int main() {

    // declaração das variáveis de cada carta
    int cartas = 0, carta1, carta2;

    char estado1[2], estado2[2];
    char nome1[50], nome2[50];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontur1, pontur2;

    // adição de PIB per capita = PIB/população
    // adição de densidade pouplacional = população/área
    float pib_pc1, pib_pc2;
    float densidade1, densidade2;

    // Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como uma variável float.
    float super_poder1, super_poder2;

    menu(cartas, carta1, carta2, estado1, estado2, nome1, nome2, populacao1, populacao2, area1, area2, pib1, pib2, pontur1, pontur2, pib_pc1, pib_pc2, densidade1, densidade2, super_poder1, super_poder2);

};