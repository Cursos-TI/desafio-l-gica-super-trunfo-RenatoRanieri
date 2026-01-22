#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
     // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superpoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superpoder2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    printf("#####################################\n");
    printf("# Bem-vindo ao Super Trunfo-Países! #\n");
    printf("#####################################\n");

    // Entrada dos dados da Carta 1
    printf("Digite o Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

    // Super poder: soma de todos os atributos
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Entrada dos dados da Carta 2
    printf("\n-----Segunda carta escolhida----\n");

    printf("Digite o Estado (A-H):");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B01):");
    scanf("%s", codigo2);

    printf("Digite o Nome da cidade:");
    scanf("%s", nomeCidade2);

    printf("Digite a população:");
    scanf("%lu", &populacao2);

    printf("Digite a Área em (km²):");
    scanf("%f", &area2);

    printf("Digite o PIB em (bilhões de reais):");
    scanf("%f", &pib2);

    printf("Digite o número de pontos Turisticos:");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // Super poder: soma de todos os atributos
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

     // Exibição dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

        // --- Menu Interativo ---
    int opcao;
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("\nComparando População:\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", nomeCidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 2:
            printf("\nComparando Área:\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2) printf("Vencedor: %s\n", nomeCidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 3:
            printf("\nComparando PIB:\n");
            printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", nomeCidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 4:
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) printf("Vencedor: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 5:
            printf("\nComparando Densidade Demográfica (menor vence):\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
            if (densidade1 < densidade2) printf("Vencedor: %s\n", nomeCidade1);
            else if (densidade2 < densidade1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 6:
            printf("\nComparando PIB per Capita:\n");
            printf("%s: %.2f reais\n", nomeCidade1, pibPerCapita1);
            printf("%s: %.2f reais\n", nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) printf("Vencedor: %s\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 7:
            printf("\nComparando Super Poder:\n");
            printf("%s: %.2f\n", nomeCidade1, superpoder1);
            printf("%s: %.2f\n", nomeCidade2, superpoder2);
            if (superpoder1 > superpoder2) printf("Vencedor: %s\n", nomeCidade1);
            else if (superpoder2 > superpoder1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    // --- Comparação de Cartas ---
    printf("\n###### Comparação de cartas #######\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); 
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);
  
    return 0;
}
