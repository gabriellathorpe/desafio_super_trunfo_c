#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Primeira carta
  char estado1; // Aqui colocamos uma letra para o estado
  char numero1[10]; // Aqui vai o código da carta em 10 caracteres
  char cidade1[50]; // Nome da cidade 
  int pop1; // População da cidade em números inteiros
  float area1; // Área da cidade em km² em valor flutuante
  float pib1; // PIB da cidade em bilhões
  int turismo1; // Quantidade de pontos turísticos em número inteiro

  // Segunda carta
  char estado2;
  char numero2[10];
  char cidade2[50];
  int pop2;
  float area2;
  float pib2;
  int turismo2;

  // Área para entrada de dados
  // ---- Cadastro da carta 1 ----
  printf("Vamos jogar Super Trunfo! Digite uma letra (de A até H) para o estado: \n");
  scanf(" %c", &estado1);

  printf("Digite um código para essa carta: \n");
  scanf(" %s", numero1);

  printf("Digite o nome da cidade: \n");
  scanf(" %s", cidade1);

  printf("Digite a população dessa cidade: \n");
  scanf("%d", &pop1);

  printf("Qual a área dessa cidade em km²?\n");
  scanf(" %f", &area1);

  printf("E qual o PIB?\n");
  scanf(" %f", &pib1);

  printf("Quantos pontos turísticos ela tem? \n");
  scanf("%d", &turismo1);
  // ---- Cadastro da carta 2: ----
  printf("Vamos para segunda carta! Digite uma letra (de A até H) para o estado: \n");
  scanf(" %c", &estado2);

  printf("Digite um código para essa carta: \n");
  scanf(" %s", numero2);

  printf("Digite o nome da cidade: \n");
  scanf(" %s", cidade2);

  printf("Digite a população dessa cidade: \n");
  scanf(" %d", &pop2);

  printf("Qual a área dessa cidade em km²?\n");
  scanf(" %f", &area2);

  printf("E qual o PIB?\n");
  scanf(" %f", &pib2);

  printf("Quantos pontos turísticos ela tem? \n");
  scanf("%d", &turismo2);
  // Área para exibição dos dados da cidade
  // Informações da carta 1:
  printf("\n>> CARTA 1 <<\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", numero1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("Área: %fkm²\n", area1);
  printf("PIB: %f bilhões de reais\n", pib1);
  printf("Número de pontos turísticos: %d\n", turismo1);

   // Informações da carta 2:
  printf("\n>> CARTA 2 <<\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", numero2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Área: %fkm²\n", area2);
  printf("PIB: %f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d", turismo2);

return 0;
} 