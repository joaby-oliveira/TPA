/*
fun��o: Receber um valor e dizer se � par ou �mpar.
nome:Joaby Oliveira.
data de cria��o:22/10/2019
data de altera��o:22/10/2019
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
	printf("Digite o primeiro n�mero: ");
	printf("Digite o segundo n�mero: ");
	scanf("%i", &a);
	scanf("$i", &b);
	printf("Digite a opera��o desejada: ");
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


