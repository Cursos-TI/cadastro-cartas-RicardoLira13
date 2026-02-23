#include <stdio.h>

int main() {

    //declaração de variaveis
    char letra, letra2;
    char codigo[5], codigo2[5];
    char cidade[10], cidade2[10];
    int populacao, populacao2;
    float quilometro, quilometro2;
    float pib, pib2;
    int ponto, ponto2;
    
    //comando de entrada e saida da primeira carta
    printf("*Insira os dados da Carta  1*\n");
    printf("Letra do estado(A-H): ");
    scanf("%c", &letra);

    printf("Codigo da carta: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("População da cidade: ");
    scanf("%d", &populacao);

    printf("Area(Km²): ");
    scanf("%f", &quilometro);

    printf("PIB (bilhões): ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &ponto);
    
     //comando de entrada e saida da segunda carta
    printf("\n*Insira os dados da Carta 2*\n");
	printf("Letra do estado(A-H): ");
    scanf("%s", &letra2);
    
    printf("Codigo da carta: ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("População da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Area(Km²): ");
    scanf("%f", &quilometro2);
    
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    
    printf("Numero de pontos turisticos: ");
    scanf("%d", &ponto2);
    
    //comando de saida das duas cartas
    printf("\n*Carta 1*\n");
    printf("Estado: %c\n", letra);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade );
    printf("População: %d\n", populacao);
    printf("Área: %.0f\n", quilometro);
    printf("PIB: %.0f Bilhões de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n\n", ponto);
    printf("*Carta 2*\n");
    printf("Estado: %c\n", letra2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.0f\n", quilometro2);
    printf("PIB: %.0f Bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n\n\n\n", ponto2);
    
    return 0;
} 
