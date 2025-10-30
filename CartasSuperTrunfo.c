#include <stdio.h>

int main() {

    // Variáveis das cartas:
    char estado1, estado2;
    char numero1[4], numero2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    float densidade1, densidade2;
    float percapita1, percapita2; 
    float superpoder1, superpoder2;
    float inversodens1, inversodens2;
    
    int escolha_atributo1; 
    int escolha_atributo2;
    int resultado1 = 0;
    int resultado2 = 0;

    // ---- Informações da carta 1 ----
    printf("--- Cadastro da CARTA 1 ---\n");
    printf("Digite uma letra (de A até H) para o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite um código para essa carta. Exemplo: A01\n");
    scanf("%s", numero1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", cidade1);

    printf("Digite a população dessa cidade:\n");
    scanf(" %lu", &populacao1);

    printf("Qual a área dessa cidade em km²?\n");
    scanf(" %f", &area1);
    
    printf("E qual o PIB (em bilhões de reais)?\n");
    scanf(" %f", &pib1);
    
    printf("Quantos pontos turísticos ela tem?\n");
    scanf(" %d", &turismo1);

    // Calculando densidade e PIB per capita da carta 1:
    densidade1 = (float) populacao1 / area1; 
    percapita1 = (pib1 * 1000000000.0f) / (float) populacao1; 
    inversodens1 = 1.0f / densidade1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + percapita1 + inversodens1; 

    // ---- Informações da carta 2: ----
    printf("\n--- Cadastro da CARTA 2 ---\n");
    printf("Digite uma letra (de A até H) para o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite um código para essa carta:\n");
    scanf("%s", numero2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", cidade2);

    printf("Digite a população dessa cidade:\n");
    scanf(" %lu", &populacao2);

    printf("Qual a área dessa cidade em km²?\n");
    scanf(" %f", &area2);
    
    printf("E qual o PIB (em bilhões de reais)?\n");
    scanf(" %f", &pib2);
    
    printf("Quantos pontos turísticos ela tem?\n");
    scanf(" %d", &turismo2);

    // Calculando densidade e PIB per capita da carta 2:
    densidade2 = (float) populacao2 / area2; 
    percapita2 = (pib2 * 1000000000.0f) / (float) populacao2;
    inversodens2 = 1.0f/densidade2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + percapita2 + inversodens2;

    printf("\n\n*-+*-+*-+*-+*-+*-+*-+*-+\n");
    printf("RODADA ATUAL: %s (CARTA 1) vs %s (CARTA 2)\n", cidade1, cidade2);
    printf("*-+*-+*-+*-+*-+*-+*-+*-+\n");
    
    // --- Menu 1 ---
    printf("\n--- CHEGOU A HORA DA BATALHA! ESCOLHA O PRIMEIRO ATRIBUTO PARA BATALHAR! ---\n");
    printf("1 - POPULAÇÃO (em pessoas)\n");
    printf("2 - ÁREA (em km²)\n");
    printf("3 - PIB (em bilhões de R$)\n");
    printf("4 - PONTOS TURÍSTICOS (em unidades)\n");
    printf("5 - DENSIDADE DEMOGRÁFICA (hab/km² - VENCE O MENOR!)\n");
    printf("Digite apenas uma opção de 1 a 5: ");
    
    if (scanf("%d", &escolha_atributo1) != 1) {
        printf("\nERRO: Entrada inválida. Reinicie o jogo ;)\n");
        return 1;
    }

    switch (escolha_atributo1) {
        case 1: 
            printf("Atributo 1: POPULAÇÃO\n");
            resultado1 = (populacao1 > populacao2) ? 1 : 0;
            break;
        case 2: 
            printf("Atributo 1: ÁREA\n");
            resultado1 = (area1 > area2) ? 1 : 0;
            break;
        case 3: 
            printf("Atributo 1: PIB\n");
            resultado1 = (pib1 > pib2) ? 1 : 0;
            break;
        case 4: 
            printf("Atributo 1: PONTOS TURÍSTICOS\n");
            resultado1 = (turismo1 > turismo2) ? 1 : 0;
            break;
        case 5: 
            printf("Atributo 1: DENSIDADE DEMOGRÁFICA (Regra INVERSA)\n");
            resultado1 = (densidade1 < densidade2) ? 1 : 0; // Lógica inversa
            break;
        default: 
            printf("Opa, opção inválida! Digite de novo. Escolha um número de 1 a 5: \n");
            return 1;
    }

    // --- Menu 2 ---
    printf("\n--- AGORA ESCOLHA O SEGUNDO ATRIBUTO PARA BATALHAR! ---\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
    printf("1 - POPULAÇÃO (em pessoas)\n");
    printf("2 - ÁREA (em km²)\n");
    printf("3 - PIB (em bilhões de R$)\n");
    printf("4 - PONTOS TURÍSTICOS (em unidades)\n");
    printf("5 - DENSIDADE DEMOGRÁFICA (hab/km² - VENCE O MENOR!)\n");
    printf("Digite outra opção de 1 a 5: ");

    if (scanf("%d", &escolha_atributo2) != 1) {
        printf("\nERRO: Entrada inválida. Reinicie o jogo ;)\n");
        return 1;
    }

    if (escolha_atributo1 == escolha_atributo2) {
        printf("\nERRO! Voce escolheu o mesmo atributo duas vezes!\n");
        return 1;
    } else {
        switch (escolha_atributo2) {
            case 1: 
                printf("Atributo 2: POPULAÇÃO\n");
                resultado2 = (populacao1 > populacao2) ? 1 : 0;
                break;
            case 2: 
                printf("Atributo 2: ÁREA\n");
                resultado2 = (area1 > area2) ? 1 : 0;
                break;
            case 3: 
                printf("Atributo 2: PIB\n");
                resultado2 = (pib1 > pib2) ? 1 : 0;
                break;
            case 4: 
                printf("Atributo 2: PONTOS TURÍSTICOS\n");
                resultado2 = (turismo1 > turismo2) ? 1 : 0;
                break;
            case 5: 
                printf("Atributo 2: DENSIDADE DEMOGRÁFICA (Regra INVERSA)\n");
                resultado2 = (densidade1 < densidade2) ? 1 : 0; // Lógica inversa
                break;
            default: 
                printf("Opa, opção inválida! Escolha um número de 1 a 5: \n");
                return 1;
        }
    }

    printf("\n>>> RESULTADO FINAL DA BATALHA <<<\n");

    if (resultado1 && resultado2) {
        printf(">>> PARABENS, %s VENCEU! <<<\n", cidade1);
        printf("(Ganhou nos dois atributos!)\n");
    
    } else if (resultado1 != resultado2) {
        printf(">>> HOUVE UM EMPATE! <<<\n");
        printf("(Cada carta ganhou em um atributo.)\n");
    
    } else {
        printf(">>> %s PERDEU... (%s venceu) <<<\n", cidade1, cidade2);
        printf("(Perdeu ou empatou nos dois atributos.)\n");
    }

    printf("\n*-+*-+*-+*-+ FIM DA RODADA *-+*-+*-+*-+\n");

    return 0;
}