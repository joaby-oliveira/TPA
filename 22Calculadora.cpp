/*
função: Receber um valor e dizer se é par ou ímpar.
nome:Joaby Oliveira.
data de criação:22/10/2019
data de alteração:22/10/2019
*/

#include<iostream>
#include<windows.h>
#include<locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");

	int a = 0;
	int b = 0;
	int op = 0;
	printf("Digite o primeiro número: ");
	scanf("%i", &a);
	
	printf("\nDigite o segundo número: ");
	scanf("$i", &b);
	
	printf("\nDigite a operação desejada: [1]Adição \n[2]Subtração \n[3]Multiplicação \n[4]Divisão");
	scanf("%i", &op);
	
		switch(op){
		case 1:
			cout<<a+b;
			break;
		case 2:
			cout<<a-b;
			break;
		case 3:
			cout<<a*b;
			break;
		case 4:
			cout<<a/b;
			break;
	};
	system("pause");
}
