#include <stdio.h>

/*
Neste nivel, o programa cadastra duas cartas e compara os atributos.

Ele calcula:
- densidade populacional
- PIB per capita
- super poder (soma dos atributos + inverso da densidade)

Comparacao:
- maior valor vence em tudo
- na densidade, o menor valor vence

No fim, mostra os dados das cartas e o resultado de cada disputa (1 ou 0).
*/

int main() {
  // Definição das variáveis
  char cidade1[40], cidade2[40];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidade1, densidade2;
  float pibPerCapita1, pibPerCapita2;
  float superPoder1, superPoder2;
  float inversoDensidade1, inversoDensidade2;

  // Entrada de dados
  printf("=== Cadastro da Carta 1 ===\n");
  printf("Digite o nome da cidade (ex: Salvador): ");
  scanf(" %39[^\n]", cidade1);

  printf("Digite a populacao (ex: 45000): ");
  scanf("%lu", &populacao1);

  printf("Digite a area (em km2) (ex: 1120.50): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhoes) (ex: 2.35): ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos (ex: 8): ");
  scanf("%d", &pontosTuristicos1);

  printf("\n=== Cadastro da Carta 2 ===\n");

  printf("Digite o nome da cidade (ex: Recife): ");
  scanf(" %39[^\n]", cidade2);

  printf("Digite a populacao (ex: 380000): ");
  scanf("%lu", &populacao2);

  printf("Digite a area (em km2) (ex: 1591.00): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhoes) (ex: 18.70): ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos (ex: 25): ");
  scanf("%d", &pontosTuristicos2);

  // Cálculos dos atributos derivados
  densidade1 = (area1 > 0.0f) ? ((float)populacao1 / area1) : 0.0f;
  densidade2 = (area2 > 0.0f) ? ((float)populacao2 / area2) : 0.0f;

  pibPerCapita1 = (populacao1 > 0) ? (pib1 / (float)populacao1) : 0.0f;
  pibPerCapita2 = (populacao2 > 0) ? (pib2 / (float)populacao2) : 0.0f;

  inversoDensidade1 = (densidade1 > 0.0f) ? (1.0f / densidade1) : 0.0f;
  inversoDensidade2 = (densidade2 > 0.0f) ? (1.0f / densidade2) : 0.0f;

  superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + inversoDensidade1;
  superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

  // Exibição dos dados da cidade
  printf("\n=== Carta 1 ===\n");
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes\n", pib1);
  printf("Pontos turisticos: %d\n", pontosTuristicos1);
  printf("Densidade populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per capita: %.6f bilhoes por habitante\n", pibPerCapita1);
  printf("Super poder: %.2f\n", superPoder1);

  printf("\n=== Carta 2 ===\n");
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes\n", pib2);
  printf("Pontos turisticos: %d\n", pontosTuristicos2);
  printf("Densidade populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per capita: %.6f bilhoes por habitante\n", pibPerCapita2);
  printf("Super poder: %.2f\n", superPoder2);

  // Comparação de cartas
  printf("\nComparacao de Cartas:\n\n");
  printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

return 0;
} 
