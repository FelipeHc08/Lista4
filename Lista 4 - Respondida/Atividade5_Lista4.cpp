#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int x, y, soma;

	printf("POSSIBILIDADE DA SOMA DO LANÇAMENTO DE DOIS DADOS TENHAM O VALOR 7 COMO RESULTADO DA SOMA DOS VALORES DE CADA DADO\n\n");
	for(int x = 1; x <= 6; x++) {
		for(int y = 1; y <= 6; y++){
			int soma = x + y;
			if(soma == 7){
				printf("%d + %d = 7 \n", x, y);
			}
		}
	}
	
	return 0;
}
