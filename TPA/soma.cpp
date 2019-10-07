/*
Função: Printar "Hello World"
Autor: "Joaby Oliveira", "Marcelo Magalhães"
Data de criação: 25/09/2019
Data de alteração: 25/09/2019
 */
#include <stdio.h>
#include <windows.h>

int main(){
	int num1, num2, sum = 0;

	printf("Digite um numero: ");
		scanf("%i", &num1);
	printf("Digite outro numero: ");
		scanf("%i", &num2);
	sum = num1 + num2;
	printf("Soma: %i + %i = %i \n \n \n", num1, num2, sum);
}

