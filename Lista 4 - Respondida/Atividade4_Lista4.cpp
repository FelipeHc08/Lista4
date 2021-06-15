#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int valor1, valor2, soma, i, n = 20;
	printf("Informe 2 valores para que seja aplicado a sequêcia de Fibonacci\n"); 
 	
	printf("Valor 1: ");
	scanf("%d", &valor1);
	printf("\nValor 2: ");
	scanf("%d", &valor2);
	
	for(i = 2; i <= n; i++){
		soma = valor1 + valor2;
		valor1 = valor2;
		valor2 = soma;
		printf("\n%d\n",soma);
	}
	
	return 0;
}
