/*
função: Calcular a área de um triangulo.
nome: Joaby Oliveira dos Santos Silva.
data de criação:02/10/2019
data de alteração:02/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");

	printf("Digite a base do triângulo: ");
	int b = 0;
	scanf("%i", &b);
	printf("Digite a altura do triângulo: ");
	int h = 0;
	scanf("%i", &h);
	int a = b * h / 2;
	printf("A área do retângulo é %i \n", a);
	system("pause");
	return(0);
};
