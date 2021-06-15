#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	char entrada;
	int tinto = 0, branco = 0, rose = 0, total = 0;
	float porcentagemT, porcentagemB, porcentagemR;

	do{
	printf("LEVANTAMENTO DE ESTOQUE DE VINHOS\n\n");
	printf("[T]--TINTO\n[B]--BRANCO\n[R]--ROSÊ\n[F]--FIM DA EXECUÇÃO");
	printf("\n\nInforme a letra de acordo com a informação que cada uma representa: ");
	scanf("%c",&entrada);
	fflush(stdin);
	entrada = toupper(entrada);
	system("cls");

	
	if(entrada == 'T'){
		tinto++;
		total++;
	}
		if(entrada == 'B'){
		branco++;
		total++;
	}
		if(entrada == 'R'){
		rose++;
		total++;
	}
	}while (entrada != 'F');
		
		if(entrada == 'F'){
				
		porcentagemT = 100*tinto/total;
		porcentagemB = 100*branco/total;
		porcentagemR = 100*rose/total;
	
		printf("==========================================\n");
		printf("TOTAL DE VINHOS NO ESTOQUE:%i", total);
		printf("\nTINTOS:%.2f%%\nBRANCOS:%.2f%%\nROSÊ:%.2f%%\n",porcentagemT, porcentagemB, porcentagemR);
	}

	return 0;
}

