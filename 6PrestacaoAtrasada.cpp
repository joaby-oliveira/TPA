/*
função: Calcular a prestaçao atrasada com acrescimo de juros.
nome:Joaby Oliveira.
data de criação:02/10/2019
data de alteração:02/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite o valor em poupança: ");
	float val = 0;
	scanf("%f", &val);
	
	printf("Digite o valor da taxa: ");
	float tax = 0;
	scanf("%f", &tax);
	
	printf("Digite quantos dias este valor esta acumulado: ");
	int tim = 0;
	scanf("%i", &tim);
	
	float prest = 0;
	prest = val + (val * (tax / 100) * tim);
	
	printf("O valor da prestaçao e: %5.2f", prest);

	system("pause");
	return(0);
}
