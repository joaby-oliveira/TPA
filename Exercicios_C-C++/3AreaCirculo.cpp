/*
fun��o: Calcular a area de um circulo.
nome:Joaby Oliveira.
data de cria��o:02/10/2019
data de altera��o:02/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite o raio do circulo: ");
	int r = 0;
	scanf("%i", &r);
	float pi = 3.14;
	float a = pi*(r*r); 
	printf("A �rea do circulo �: %f", a);

	system("pause");
	return(0);
}
