#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int numPar, soma = 0, quantNum = 0;
	float media;
	
	do{
	printf("Digite 0 para encerrar o programa.\n\n");
	printf("Informe um número inteiro par para realizar a soma: ");
	scanf("%i",&numPar);
	if (numPar%2 == 0 && numPar != 0){
		soma = soma + numPar;
		quantNum++;
	}
	}while (numPar != 0);
	if (numPar == 0){
		media = soma/quantNum;
	
	printf("==================================");
	printf("\n\nMedia da soma dos números pares informados é igual a: %.2f", media);
	}
	
	return 0;
}
