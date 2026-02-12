#include <stdio.h>

int main() {
    //declaração de variaveis
    char inicial1, inicial2, codigo1[10], cidade1[10], codigo2[10], cidade2[10];
    int populacao1, turismo1, populacao2, turismo2;
    float km1, pib1, km2, pib2;
    
    //codigos de entrada e saida da primeira carta
    printf("Digite a inicial do estado: ");
    scanf("%c", &inicial1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em quilometros quadrados: ");
    scanf("%f", &km1);

    printf("Digite o PIB (Produto interno bruto) da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &turismo1);
    
    //codigos de exibição do que o usuario digitou (primeira carta).
    printf("\nCarta 1:\n");

    printf("Estado: %c\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\nNumero de pontos turisticos: %d\n", inicial1, codigo1, cidade1, populacao1, km1, pib1, turismo1);

    //codigos de entrada e saida da segunda 
    printf("Digite a inicial do estado: ");
    scanf("%c", &inicial2);

    printf("\nDigite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em quilometros quadrados: ");
    scanf("%f", &km2);

    printf("Digite o PIB (Produto interno bruto) da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &turismo2);
    
    //codigos de exibição do que o usuario digitou (segunda carta).
    printf("\nCarta 2:\n");

    printf("Estado: %c\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\nNumero de pontos turisticos: %d\n\n\n\n", inicial2, codigo2, cidade2, populacao2, km2, pib2, turismo2);

    return 0;
} 
