#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int dia, mes, ano;
	
	printf("INFORME SUA DATA DE NASCIMENTO \n\nDIA: ");
	scanf("%i",&dia);
	printf("\nM�S: ");
	scanf("%i",&mes);
	printf("\nANO: ");
	scanf("%i",&ano);
	printf("-----------------");

	if ((dia > 0 && dia <= 31 || mes <= 12 && mes > 0) || (mes == 2 && dia <= 28 && dia > 0) || (mes == 2 && dia > 0 && dia <= 29 && ano % 4 == 0 || ano % 400 == 0)){
		if((dia >= 21 && dia <= 31 && mes == 3) || (dia <= 20 && dia <= 30 && mes == 4)){
		printf("\nSEU SIGNO � �RIES!");
	}	if ((dia >= 21 && dia <= 30 && mes == 4) || (dia <= 20 && dia <= 31 && mes == 5)){
		printf("\nSEU SIGNO � TOURO!");
	}if ((dia >= 21 && dia <= 31 && mes == 5) || (dia <= 20 && dia <= 30 && mes == 6)){
		printf("\nSEU SIGNO � G�MEOS!");
	}if ((dia >= 21 && dia <= 30 && mes == 6) || (dia <= 21 && dia <= 31 && mes == 7)){
		printf("\nSEU SIGNO � C�NCER!");
	}if ((dia >= 22 && dia <= 31 && mes == 7) || (dia <= 22 && dia <= 31 && mes == 8)){
		printf("\nSEU SIGNO � LE�O!");
	}if ((dia >= 23 && dia <= 31 && mes == 8) || (dia <= 22 && dia <= 30 && mes == 9)){
		printf("\nSEU SIGNO � VIRGEM!");
	}if ((dia >= 23 && dia <= 30 && mes == 9) || (dia <= 22 && dia <= 31 && mes == 10)){
		printf("\nSEU SIGNO � LIBRA!");
	}if ((dia >= 23 && dia <= 31 && mes == 10) || (dia <= 21 && dia <= 30 && mes == 11)){
		printf("\nSEU SIGNO � ESCORPI�O!");
	}if ((dia >= 22 && dia <= 30 && mes == 11) || (dia <= 21 && dia <= 31 && mes == 12)){
		printf("\nSEU SIGNO � SARGIT�RIO!");
	}if ((dia >= 22 && dia <= 31 && mes == 12) || (dia <= 21 && dia <= 31 && mes == 1)){
		printf("\nSEU SIGNO � CAORIC�RNIO!");
	}if ((dia >= 21  && dia <= 31 && mes == 1) || (dia <= 19 && dia >= 28 && mes == 2 || ( mes == 2) && (dia <= 19 && dia > 29) && (ano % 4 == 0 || ano % 400 == 0))){
		printf("\nSEU SIGNO � AQU�RIO!");
	}if ((dia >= 20 && dia <= 28 && mes == 2) || ( mes == 2) && (dia >= 19 && dia <= 29) && (ano % 4 == 0 || ano % 400 == 0) || (dia <= 20 && dia <= 31 && mes == 3)){
		printf("\nSEU SIGNO � PEIXES!");
	}
	}else{
		printf("\nDATA INV�LIDA");
	}
	return 0;
}

