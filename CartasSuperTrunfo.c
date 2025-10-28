#include <stdio.h>

int main() {
 
  // Variáveis da carta 1:
  char estado1; 
  char numero1[5]; 
  char cidade1[50]; 
  int populacao1; 
  float area1;
  float pib1; 
  int turismo1; 
  float densidade1; 
  float percapita1; 

  // Variáveis da carta 2:
  char estado2;
  char numero2[5];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int turismo2;
  float densidade2; 
  float percapita2; 

  // ---- Cadastro da carta 1 ----
  printf("Vamos jogar Super Trunfo! Digite uma letra (de A até H) para o estado: \n");
  scanf(" %c%*c", &estado1);

  printf("Digite um código para essa carta:\n");
  scanf("%s%*c", numero1);

  printf("Digite o nome da cidade:\n");
  scanf(" %s%*c", cidade1);

  printf("Digite a população dessa cidade:\n");
  scanf(" %d%*c", &populacao1);

  printf("Quantos pontos turísticos ela tem?\n");
  scanf(" %d%*c", &turismo1);

  printf("Qual a área dessa cidade em km²?\n");
  scanf(" %f%*c", &area1);

  printf("E qual o PIB?\n");
  scanf(" %f%*c", &pib1);

  densidade1 = populacao1 / area1;
  percapita1 = pib1 / populacao1;
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", percapita1);

  // ---- Cadastro da carta 2: ----
  printf("Vamos para segunda carta! Digite uma letra (de A até H) para o estado:\n");
  scanf(" %c%*c", &estado2);

  printf("Digite um código para essa carta:\n");
  scanf(" %s%*c", numero2);

  printf("Digite o nome da cidade:\n");
  scanf(" %s%*c", cidade2);

  printf("Digite a população dessa cidade:\n");
  scanf(" %d%*c", &populacao2);

  printf("Qual a área dessa cidade em km²?\n");
  scanf(" %f%*c", &area2);

  printf("Quantos pontos turísticos ela tem?\n");
  scanf(" %d%*c", &turismo2);

  printf("E qual o PIB?\n");
  scanf(" %f%*c", &pib2);

  densidade2 = populacao2 / area2;
  percapita2 = pib2 / populacao2;
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", percapita2);

  // Exibição da carta 1:
  printf("\n===> CARTA 1 <===\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", numero1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de pontos turísticos: %d\n", turismo1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", percapita1);

  // Exibição da carta 1:
  printf("\n===> CARTA 2 <===\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", numero2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d\n", turismo2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", percapita2);

return 0;
} 