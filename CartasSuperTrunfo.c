#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    char estado1[50], estado2[50];
    char codigo_da_carta1[40], codigo_da_carta2[40];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    int população1, população2 ;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

     //cadastro das cartas
    printf("defina os valores das cartas\n");
    printf("CARTA 1\n");

    printf("estado:");
    scanf("%s", estado1);

    printf("codigo da carta:");
    scanf("%s", codigo_da_carta1);

    printf("cidade:");
    scanf("%s", nome_da_cidade1);

    printf("população da cidade:");
    scanf("%d", &população1);

    printf("área da cidade:");
    scanf("%f", &area1);

    printf("pib:");
    scanf("%f", &pib1);

    printf("pontos turisticos:");
    scanf("%d", &pontos_turisticos1);

    printf("valores da carta 1 definidos\n\n");
    
    //definiçoes de valores da segunda carta
    printf("defina os valores da carta 2\n\n");

    printf("estado:");
    scanf("%s", estado2);

    printf("codigo da carta:");
    scanf("%s", codigo_da_carta2);

    printf("cidade:");
    scanf("%s", nome_da_cidade2);

    printf("população da cidade:");
    scanf("%d", &população2);

    printf("área da cidade:");
    scanf("%f", &area2);

    printf("pib:");
    scanf("%f", &pib2);

    printf("pontos turisticos:");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos Dados das Cartas:
    printf("\nvalores configurados\n");

    printf("carta 1\n");
    printf("estado: %s\n", estado1);
    printf("codigo da carta: %s\n", codigo_da_carta1);
    printf("nome da cidade: %s\n", nome_da_cidade1);
    printf("população: %d\n", população1);
    printf("área: %.2f\n", area1);
    printf("pib: %.2f\n", pib1);
    printf("pontos turisticos: %d\n", pontos_turisticos1);

    printf("carta 2\n");
    printf("estado: %s\n", estado2);
    printf("codigo da carta: %s\n", codigo_da_carta2);
    printf("nome da cidade: %s\n", nome_da_cidade2);
    printf("população: %d\n", população2);
    printf("área: %.2f\n", area2);
    printf("pib: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}
