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
	int op = 0;
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &a);
	
	printf("\nDigite o segundo n�mero: ");
	scanf("$i", &b);
	
	printf("\nDigite a opera��o desejada: [1]Adi��o \n[2]Subtra��o \n[3]Multiplica��o \n[4]Divis�o");
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
