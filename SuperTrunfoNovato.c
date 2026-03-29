#include <stdio.h>

// Objetivo: No nível novato você deve criar as cartas representando as cidades
//utilizando scanf para entrada de dados e printf para exibir as informações.

/*Exemplo:

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
*/
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cidade1[40], cidade2[40];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

  // Área para entrada de dados
  printf("=== Cadastro da Carta 1 ===\n");
  printf("Digite o nome da cidade (ex: Salvador): ");
  scanf(" %39[^\n]", cidade1);

  printf("Digite a populacao (ex: 45000): ");
  scanf("%d", &populacao1);

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
  scanf("%d", &populacao2);

  printf("Digite a area (em km2) (ex: 1591.00): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhoes) (ex: 18.70): ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos (ex: 25): ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  printf("\n=== Carta 1 ===\n");
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes\n", pib1);
  printf("Pontos turisticos: %d\n", pontosTuristicos1);

  printf("\n=== Carta 2 ===\n");
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes\n", pib2);
  printf("Pontos turisticos: %d\n", pontosTuristicos2);

return 0;
} 
