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
	char op;
	printf("Digite o primeiro número: ");
	printf("Digite o segundo número: ");
	scanf("%i", &a);
	scanf("$i", &b);
	printf("Digite a operação desejada: ");
	scanf("%s", &op);
		switch(op){
		case "+":
			cout<<a+b;
			break;
		case "-":
			cout<<a-b;
			break;
		case "*":
			cout<<a*b;
			break;
		case "/":
			cout<<a/b;
			break;
	};
	system("pause");
	return 0;
}


