#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int dia, mes, ano;
	
	printf("INFORME UMA DATA\n\nDIA: ");
	scanf("%i",&dia);
	printf("\nM�S: ");
	scanf("%i",&mes);
	printf("\nANO: ");
	scanf("%i",&ano);
	printf("-----------------");
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
		if (dia > 0 && dia <= 31){
			printf("\n\nDATA (%i/%i/%i) V�LIDA", dia, mes, ano);
		}else{
			printf("\n\nDATA (%i/%i/%i) INV�LIDA", dia, mes, ano);
		}	
	}
	if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
		if (dia > 0 && dia <= 30){
			printf("\n\nDATA (%i/%i/%i) V�LIDA", dia, mes, ano);
		}else{
			printf("\n\nDATA (%i/%i/%i) INV�LIDA", dia, mes, ano);
		}
	}
	if ((mes == 2) && (dia > 0 && dia <= 28)){
		printf("\n\nDATA (%i/%i/%i) V�LIDA", dia, mes, ano);
	}else if ((mes == 2) && (dia > 0 && dia <= 29) && (ano % 4 == 0 || ano % 400 == 0)){
			printf("\n\nDATA (%i/%i/%i) V�LIDA.\nO ANO %i � BISSEXTO!", dia, mes, ano, ano);
		}else {
			printf("\n\nDATA (%i/%i/%i) INV�LIDA", dia, mes, ano);
				}	
		}
	

/*datas validas
mes
1--31
2--28/29(bissexto)
3--31
4--30
5--31
6--30
7--31
8--31
9--30
10--31
11--30
12--31

ano bissexto-->n�o terminar em 00 e for divis�vel por 4 dizemos que ele � bissexto,
00 ser�o bissextos se a divis�o deles por 400 for exata, isto �, o resto da divis�o precisa ser igual a zero

datas invalidas

1>dia>31
1>mes>12
mes=2 dia>28
*/











