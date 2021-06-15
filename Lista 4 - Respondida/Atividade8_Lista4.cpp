#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	float anacleto = 1.50, felisberto = 1.10;
	int anos = 1, confirmacao;
	
	printf("Anacleto tem 1,50 metro e cresce 2 centímetros por ano,\nenquanto Felisberto tem 1,10 metro e cresce 3 centímetros por ano.\n");
	printf("Para calcular em quantos anos Felisberto será mais alto, digite 1: ");
	scanf("%i",&confirmacao);
	if(confirmacao==1){
	do{
		anacleto + 0.2;
		felisberto + 0.3;
		anos++;
	}while(felisberto<=anacleto);
	
	printf("Em %i anos, Felisberto(%.2f) será maior que Anacleto(%.2f).", anos, felisberto, anacleto);
	
	return 0;
	
	}else{
		return 0;
	}
}

