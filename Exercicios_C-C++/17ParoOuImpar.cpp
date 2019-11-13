/*
função: Receber um valor e dizer se é par ou ímpar.
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
	
	cout<<"Digite um valor: ";
	int val = 0;
	scanf("%i", &val);
	
	if(val % 2 == 0){
		printf("O valor é par.\n");
	}
	else{
		printf("O valor é ímpar\n");

	}
	system("pause");
	return(0);
}
