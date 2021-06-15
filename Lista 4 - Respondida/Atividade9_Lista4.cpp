#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, tentativas = 1;
	printf("Jogador 1, escreva um número inteiro: ");
	scanf("%i", &num1);
	do{
	system("cls");
	printf("Jogador 2, tente adivinhar número inteiro escolhido pelo jogador 1: ");
	scanf("%i", &num2);
	if(num1>num2){
		printf("\nChute abaixo do valor.\n\n");
		system("pause");
	}else if(num1<num2){
		printf("\nChute acima do valor.\n\n");
		system("pause");
	}else if (num1==num2){
		printf("\n\nPARABÉNS, VOCÊ ACERTOU!\n\n");
	system("pause");
	return 0;
}
	}while(num1!=num2);
	
	}
		

