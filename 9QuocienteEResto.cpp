/*
função: Receber 2 valores, e, deles mostrar o quociente e o resto.
nome:Joaby Oliveira.
data de criação:06/10/2019
data de alteração:12/11/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o dividendo: ");
	int dividen = 0;
	scanf("%i", &dividen);
	
	printf("Digite o divisor: ");
	int diver = 0;
	scanf("%i", &diver);
	
	int quoc = dividen / diver;
	int rest = dividen % diver;

	printf("O quociente é: %i e o resto é: %i", quoc, rest);

	system("pause");
	return(0);	
}
