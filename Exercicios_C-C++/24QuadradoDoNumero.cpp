/*
fun��o: Receber um valor e dizer seu quadrado
nome:Joaby Oliveira.
data de cria��o:22/10/2019
data de altera��o:13/11/2019
*/

#include<iostream>
#include<windows.h>
#include<locale.h>

using namespace std;

int main (){
	int num = 0;
	setlocale(LC_ALL,"portuguese");
	do{
	printf("Digite o n�mero: ");
	
	scanf("%i", &num);
	printf("O quadrado de %i � %i \n", num, num*num);
	
	}while(num != 0);
		

	system("pause");
	return 0;
}


