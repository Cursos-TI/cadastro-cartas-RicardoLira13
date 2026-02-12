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
    printf("Estado: %c\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\nNumero de pontos turisticos: %d\n", inicial1, codigo1, cidade1, populacao1, km1, pib1, turismo1);

   
    return 0;
} 
