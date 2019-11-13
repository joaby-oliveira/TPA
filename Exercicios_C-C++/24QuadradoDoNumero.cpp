/*
função: Receber um valor e dizer seu quadrado
nome:Joaby Oliveira.
data de criação:22/10/2019
data de alteração:13/11/2019
*/

#include<iostream>
#include<windows.h>
#include<locale.h>

using namespace std;

int main (){
	int num = 0;
	setlocale(LC_ALL,"portuguese");
	do{
	printf("Digite o número: ");
	
	scanf("%i", &num);
	printf("O quadrado de %i é %i \n", num, num*num);
	
	}while(num != 0);
		

	system("pause");
	return 0;
}


