#include <stdio.h>

int main() {
    //declaração de variaveis
    char letra;
    char codigo[5];
    char cidade[10];
    int populacao;
    float quilometro;
    float pib;
    int ponto;
    //comando de entrada e saida de dados
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

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &ponto);

    return 0;
} 
