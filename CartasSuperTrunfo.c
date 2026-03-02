#include <stdio.h>

int main() {

    //declaração de variaveis
    char letra, letra2;
    char codigo[5], codigo2[5];
    char cidade[10], cidade2[10];
    unsigned long int populacao, populacao2;
    float quilometro, quilometro2;
  	double pib, pib2;
    int ponto, ponto2;
    float densidade, densidade2;
    float percapita, percapita2;
    float superpoder1, superpoder2;
    
    //variaveis de comparação das cartas
    int comparativoPoder;
    int comparativoPopulacao;
    int comparativoArea;
    int comparativoPIB;
    int comparativoTurismo;
    int comparativoDensidade;
    int comparativoPercapita;
    
    //comando de entrada e saida da primeira carta
    printf("*Insira os dados da Carta  1*\n");
    printf("Letra do estado(A-H): ");
    scanf("%c", &letra);

    printf("Codigo da carta: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("População da cidade: ");
    scanf("%u", &populacao);

    printf("Area(Km²): ");
    scanf("%f", &quilometro);

    printf("PIB (bilhões): ");
    scanf("%lf", &pib);

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
    scanf("%u", &populacao2);
    
    printf("Area(Km²): ");
    scanf("%f", &quilometro2);
    
    printf("PIB (bilhões): ");
    scanf("%lf", &pib2);
    
    printf("Numero de pontos turisticos: ");
    scanf("%d", &ponto2);
    
    //calculo de densidade populacional e pib percapita
    densidade = populacao / quilometro;
    densidade2 = populacao2 / quilometro2;
	
	percapita = pib / populacao;
	percapita2 = pib2 / populacao2;
   
    //calculo do superpoder das cartas
   	superpoder1 = (float)populacao + quilometro + pib + ponto + percapita + densidade;
	superpoder2 = (float)populacao2 + quilometro2 + pib2 + ponto2 + percapita2 + densidade2;
	
	//comparativo entre as duas cartas
	comparativoPopulacao = populacao > populacao2;
	comparativoArea = quilometro > quilometro2;
	comparativoPIB = pib > pib2;
	comparativoTurismo = ponto > ponto2;
	comparativoDensidade = densidade < densidade2;
	comparativoPercapita = percapita > percapita2;
	comparativoPoder = superpoder1 > superpoder2;

    //comando de saida das duas cartas
   	printf("\n*Carta 1*\n");
    printf("Estado: %c\n", letra);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade );
    printf("População: %u\n", populacao);
    printf("Área: %.2f\n", quilometro);
    printf("PIB: %.2lf Bilhões de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", ponto);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB percapita: %.2f\n", percapita);
    printf("SuperPoder: %.2f\n\n", superpoder1);
   
    printf("*Carta 2*\n");
    printf("Estado: %c\n", letra2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f\n", quilometro2);
    printf("PIB: %.2lf Bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", ponto2);
    printf("Densidade Demografica: %.2f\n", densidade2);
    printf("PIB percapita: %.2f\n", percapita2);
    printf("SuperPoder: %.2f\n\n", superpoder2);
    
    //comando de saida da comparação entre as cartas
    printf("*Comparação de Cartas: \n(1 para verdade - A carta vence || 0 para falso - A carta perde)\n");
	printf("População: Carta 1 venceu (%d)\n", comparativoPopulacao);
	printf("Área: Carta 1 venceu (%d)\n"), comparativoArea;
	printf("PIB: Carta 1 venceu (%d)\n", comparativoPIB);
	printf("Pontos Turísticos: Carta 1 venceu (%d)\n", comparativoTurismo);
	printf("Densidade Populacional: Carta 2 venceu (%d)\n", comparativoDensidade);
	printf("PIB per Capita: Carta 1 venceu (%d)\n", comparativoPercapita);
	printf("Super Poder: Carta 1 venceu (%d)\n\n", comparativoPoder);

    return 0;
} 
