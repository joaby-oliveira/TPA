/*
fun��o: Calcular a �rea de um triangulo.
nome: Joaby Oliveira dos Santos Silva.
data de cria��o:02/10/2019
data de altera��o:02/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");

	printf("Digite a base do tri�ngulo: ");
	int b = 0;
	scanf("%i", &b);
	printf("Digite a altura do tri�ngulo: ");
	int h = 0;
	scanf("%i", &h);
	int a = b * h / 2;
	printf("A �rea do ret�ngulo � %i \n", a);
	system("pause");
	return(0);
};
