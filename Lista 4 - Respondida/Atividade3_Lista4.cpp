#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char pais1[30], pais2[30], pais3[30];
	int total1, total2, total3, ouro1, ouro2, ouro3, prata1, prata2, prata3, bronze1, bronze2, bronze3;
	
	printf("Informe o primeiro pa�s: ");
	scanf("%s",&pais1);
	printf("\nInforme o segundo pa�s: ");
	scanf("%s",&pais2);
	printf("\nInforme o terceiro pa�s: ");
	scanf("%s",&pais3);
	
	system("cls");
	printf("Quantas medalhas de ouro foram conquistadas pelo pa�s %s? ", pais1);
	scanf("%i",&ouro1);
	printf("Quantas medalhas de prata foram conquistadas pelo pa�s %s? ", pais1);
	scanf("%i",&prata1);
	printf("Quantas medalhas de bronze foram conquistadas pelo pa�s %s? ", pais1);
	scanf("%i",&bronze1);
	
	total1 = ouro1*3 + prata1*2 + bronze1*1;
	
		
	system("cls");
	printf("Quantas medalhas de ouro foram conquistadas pelo pa�s %s? ", pais2);
	scanf("%i",&ouro2);
	printf("Quantas medalhas de prata foram conquistadas pelo pa�s %s? ", pais2);
	scanf("%i",&prata2);
	printf("Quantas medalhas de bronze foram conquistadas pelo pa�s %s? ", pais2);
	scanf("%i",&bronze2);
	
	total2 = ouro2*3 + prata2*2 + bronze2*1;
		
	system("cls");
	printf("Quantas medalhas de ouro foram conquistadas pelo pa�s %s? ", pais3);
	scanf("%i",&ouro3);
	printf("Quantas medalhas de prata foram conquistadas pelo pa�s %s? ", pais3);
	scanf("%i",&prata3);
	printf("Quantas medalhas de bronze foram conquistadas pelo pa�s %s? ", pais3);
	scanf("%i",&bronze3);
	
	total3 = ouro3*3 + prata3*2 + bronze3*1;
	
	system("cls");
	
	if(total1 > total2 && total1 > total3 && total2 > total3){
		printf("P�DIO:\n\n");
		printf("1� LUGAR: %s\n",pais1);
		printf("2� LUGAR: %s\n",pais2);
		printf("3� LUGAR: %s\n",pais3);
	}
		if(total1 > total2 && total1 > total3 && total2 < total3){
		printf("P�DIO:\n\n");
		printf("1� LUGAR: %s\n",pais1);
		printf("2� LUGAR: %s\n",pais3);
		printf("3� LUGAR: %s\n",pais2);
	}
		if(total1 < total2 && total1 > total3 && total2 > total3){
		printf("P�DIO:\n");
		printf("1� LUGAR: %s\n",pais2);
		printf("2� LUGAR: %s\n",pais1);
		printf("3� LUGAR: %s\n",pais3);
	}
		if(total1 < total2 && total1 < total3 && total2 > total3){
		printf("P�DIO:\n\n");
		printf("1� LUGAR: %s\n",pais2);
		printf("2� LUGAR: %s\n",pais3);
		printf("3� LUGAR: %s\n",pais1);
	}
		if(total1 < total2 && total1 < total3 && total2 < total3){
		printf("P�DIO:\n");
		printf("1� LUGAR: %s\n",pais3);
		printf("2� LUGAR: %s\n",pais2);
		printf("3� LUGAR: %s\n",pais1);
	}
		if(total1 > total2 && total1 < total3 && total2 < total3){
		printf("P�DIO:\n");
		printf("1� LUGAR: %s\n",pais3);
		printf("2� LUGAR: %s\n",pais1);
		printf("3� LUGAR: %s\n",pais2);
	}
	return 0;
	}
