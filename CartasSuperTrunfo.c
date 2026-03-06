#include <stdio.h>

int main(){
	
	//variaveis de entrada e saida
	int escolha, atributo;
    char cidade[10], cidade2[10];
    unsigned long int populacao, populacao2;
    float quilometro, quilometro2;
  	double pib, pib2;
    int ponto, ponto2;
    float densidade, densidade2;
    float superpoder1, superpoder2;
    
    //layout do menu inicial do game
	printf("=======================================|\n");
	printf("\n");
	printf("         *SuperTrunfo Cidades*          |");
	printf("\n");
	printf("\n=======================================|\n");
	printf("Bem-Vindo ao SuperTrunfo Cidades:\n\n");
	printf("1 - Iniciar Jogo\n2 - O que é o SuperTrunfo\n3 - Sair do Jogo\n");
	scanf("%d", &escolha);
	
	//switch case do menu interativo
	switch(escolha){
		case 1:
			printf("*------------------------------*");
			printf("\n*Insira os dados da Carta  1*\n");
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
		    //calculo do superpoder das cartas
		   	superpoder1 = (float)populacao + quilometro + pib + ponto  + densidade;
			superpoder2 = (float)populacao2 + quilometro2 + pib2 + ponto2  + densidade2;
		    
		    //saida de dados das duas cartas
		    printf("\n*------------------------------*");
		    printf("\n*Carta 1*\n");
		    printf("Nome da cidade: %s\n", cidade );
		    printf("População: %u\n", populacao);
		    printf("Área: %.2f\n", quilometro);
		    printf("PIB: %.2lf Bilhões de reais\n", pib);
		    printf("Numero de pontos turisticos: %d\n", ponto);
		    printf("Densidade Demografica: %.2f\n", densidade);
		    printf("SuperPoder: %.2f\n\n", superpoder1);
		   
		    printf("*Carta 2*\n");
		    printf("Nome da cidade: %s\n", cidade2);
		    printf("População: %u\n", populacao2);
		    printf("Área: %.2f\n", quilometro2);
		    printf("PIB: %.2lf Bilhões de reais\n", pib2);
		    printf("Numero de pontos turisticos: %d\n", ponto2);
		    printf("Densidade Demografica: %.2f\n", densidade2);
		    printf("SuperPoder: %.2f\n\n", superpoder2);
		    
		    //menu para escolher qual atributo comparar
		    printf("Qual Atributo deseja comparar?\n");
		    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - Super Poder\n");
		    scanf("%d", &atributo);
		    
		    switch(atributo){
		    	case 1:
		    		printf("**Duelo de População**\n");
		    		printf("População de %s: %u\n", cidade, populacao);
		    		printf("População de %s: %u\n", cidade2, populacao2);
		    		if(populacao > populacao2){
		    			printf("População de %s venceu!\n\n", cidade);
					}
					else if(populacao < populacao2){
						printf("População de %s venceu!\n\n", cidade2);
					}
					else{
						printf("Empate!\n\n");
					}
				break;
				case 2:
					printf("**Duelo de Área**\n");
		    		printf("Área de %s: %.2f\n", cidade, quilometro);
		    		printf("Área de %s: %.2f\n", cidade2, quilometro2);
		    		if(quilometro > quilometro2){
		    			printf("Área de %s venceu!\n\n", cidade);
					}
					else if(quilometro < quilometro2){
						printf("Área de %s venceu!\n\n", cidade2);
					}
					else{
						printf("Empate!\n\n");
					}
					break;
					case 3:
						printf("**Duelo de PIB**\n");
		    		printf("PIB de %s: %.2lf Bilhões\n", cidade, pib);
		    		printf("PIB de %s: %.2lf Bilhões\n", cidade2, pib2);
		    		if(pib > pib2){
		    			printf("PIB de %s venceu!\n\n", cidade);
					}
					else if(pib < pib2){
						printf("PIB de %s venceu!\n\n", cidade2);
					}
					else{
						printf("Empate!\n\n");
					}
					break;
					case 4:
						printf("**Duelo de Pontos Turisticos**\n");
		    		printf("Numero de pontos turisticos de %s: %d\n", cidade, ponto);
		    		printf("Numero de pontos turisticos de %s: %d\n", cidade2, ponto2);
		    		if(ponto > ponto2){
		    			printf("Numero de pontos turisticos de %s venceu!\n\n", cidade);
					}
					else if(ponto < ponto2){
						printf("Numero de pontos turisticos de %s venceu!\n\n", cidade2);
					}
					else{
						printf("Empate!\n\n");
					}
					break;
					case 5:
						printf("**Duelo de Densidade Demografica**\n");
		    		printf("Densidade Demografica de %s: %.2f\n", cidade, densidade);
		    		printf("Densidade Demografica de %s: %.2f\n", cidade2, densidade2);
		    		if(densidade < densidade2){
		    			printf("Densidade Demografica de %s venceu!\n\n", cidade);
					}
					else if(densidade > densidade2){
						printf("Desidade Demografica  de %s venceu!\n\n", cidade2);
					}
					else{
						printf("Empate!\n\n");
					}
					break;
					case 6:
						printf("**Duelo de Super Poder**\n");
		    		printf("Super Poder da Carta 1: %s: %.2f\n", cidade, superpoder1);
		    		printf("Super Poder da Carta 2: %s: %.2f\n", cidade2, superpoder2);
		    		if(superpoder1 > superpoder2){
		    			printf("Super Poder de %s venceu!\n\n", cidade);
					}
					else if(superpoder1 < superpoder2){
						printf("Super Poder de %s venceu!\n\n", cidade2);
					}
					else{
						printf("Empate!\n\n");
					}
					break;
					default:
						printf("Opçao Invalida!");
			}    
		break;
		case 2:
			printf("\n***O que é o Super Trunfo***\n");
			printf("-O Super Trunfo é um jogo de cartas rápido e estratégico onde o objetivo é vecer a outra carta com base em atributos de maior valor (PIB, Numero de pontos turisticos, População...\n\n");
		break;
		case 3:
			printf("Jogo Encerrado....\n");
		break;
		default:
			printf("Opção Invalida!\n");
	};
	
	return 0;
}