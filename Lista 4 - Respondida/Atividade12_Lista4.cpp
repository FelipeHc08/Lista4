#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	
	int voto, joyce = 0, milton = 0, wesley = 0, sebastiao = 0, branco = 0, nulo = 0, total = 0;
	float porcentagemJ, porcentagemM, porcentagemS, porcentagemW, porcentagemB, porcentagemN;

	do{
	printf("VOTAÇÃO PARA PRESIDENTE:\n\n");
	printf("[0]--FIM DA EXECUÇÃO\n[1]--JOYCE\n[2]--MILTON\n[3]--WESLEY\n[4]--MILTON\n[5]--NULO\n[6]--BRANCO");
	printf("\n\nInforme o número do candidato: ");
	scanf("%i",&voto);
	system("cls");

	
	if(voto == 0){
				
		porcentagemJ = 100*joyce/total;
		porcentagemM = 100*milton/total;
		porcentagemM = 100*milton/total;
		porcentagemS = 100*sebastiao/total;
		porcentagemN = 100*nulo/total;
		porcentagemB = 100*branco/total;
	
		printf("==========================================\n");
		printf("TOTAL DE VOTOS:%i", total);
		printf("\nJOYCE: %i VOTOS (%.2f%%)", joyce, porcentagemJ);
		printf("\nMILTON: %i VOTOS (%.2f%%)", milton, porcentagemM);
		printf("\nWESLEY: %i VOTOS (%.2f%%)", wesley, porcentagemW);
		printf("\nSEBASTIÃO: %i VOTOS (%.2f%%)", sebastiao, porcentagemS);
		printf("\nNULO: %i VOTOS (%.2f%%)", nulo, porcentagemN);
		printf("\nBRANCO: %i VOTOS (%.2f%%)", branco, porcentagemB);
	}
	if(voto == 1){
		joyce++;
		total++;
	}
		if(voto == 2){
		milton++;
		total++;
	}
		if(voto == 3){
		wesley++;
		total++;
	}
		if(voto == 4){
		sebastiao++;
		total++;
	}
	if(voto == 5){
		nulo++;
		total++;
	}
	if(voto == 6){
		branco++;
		total++;
	}
	}while (voto != 0);
		

	return 0;
}

