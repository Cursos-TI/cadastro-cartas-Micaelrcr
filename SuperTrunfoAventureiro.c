#include <stdio.h>
/* Objetivo: No nível aventureiro você deve criar as cartas representando as cidades
utilizando scanf para entrada de dados e printf para exibir as informações.
Calcular a Densidade Populacional e o PIB per Capita

Modelo exemplo:

Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais
*/
int main() {
  // Definição das variáveis
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char cidade1[40], cidade2[40];
  int populacao1, populacao2;
  float area1, area2;
  double pib1, pib2;
  float densidade1, densidade2;
  double pibPerCapita1, pibPerCapita2;
  int pontosTuristicos1, pontosTuristicos2;


  // Entrada de dados
  printf("=== Cadastro da Carta 1 ===\n");
  printf("Digite o estado (ex: A): ");
  scanf(" %c", &estado1);
  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%3s", codigo1);

  printf("Digite o nome da cidade (ex: Salvador): ");
  scanf(" %39[^\n]", cidade1);

  printf("Digite a populacao (ex: 45000): ");
  scanf("%d", &populacao1);

  printf("Digite a area (em km2) (ex: 1120.50): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em reais) (ex: 2350000000.00): ");
  scanf("%lf", &pib1);

  printf("Digite o numero de pontos turisticos (ex: 8): ");
  scanf("%d", &pontosTuristicos1);

  printf("\n=== Cadastro da Carta 2 ===\n");
  printf("Digite o estado (ex: B): ");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta (ex: B02): ");
  scanf("%3s", codigo2);

  printf("Digite o nome da cidade (ex: Recife): ");
  scanf(" %39[^\n]", cidade2);

  printf("Digite a populacao (ex: 380000): ");
  scanf("%d", &populacao2);

  printf("Digite a area (em km2) (ex: 1591.00): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em reais) (ex: 18700000000.00): ");
  scanf("%lf", &pib2);

  printf("Digite o numero de pontos turisticos (ex: 25): ");
  scanf("%d", &pontosTuristicos2);

  // Cálculo da Densidade Populacional e PIB per Capita
  densidade1 = populacao1 / area1;
  densidade2 = populacao2 / area2;

  pibPerCapita1 = pib1 / populacao1;
  pibPerCapita2 = pib2 / populacao2;

  // Exibicao dos dados da cidade
  printf("\n========================================\n");
  printf("           CARTA 1 - RESUMO            \n");
  printf("========================================\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d habitantes\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2lf reais\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2lf reais\n", pibPerCapita1);

  printf("\n========================================\n");
  printf("           CARTA 2 - RESUMO            \n");
  printf("========================================\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d habitantes\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2lf reais\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2lf reais\n", pibPerCapita2);
  printf("========================================\n");

return 0;
} 
