/*
fun��o: Receber um valor, e, se ele for maior que 5 e menor que 20 mostrar seu cubo
nome:Joaby Oliveira.
data de cria��o:06/10/2019
data de altera��o:12/11/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	printf("Digite um n�mero: ");
	int n = 0;
	scanf("%i", &n);
	int cuboN = n*n*n;
	if(n>5 && n <20){
		printf("O cubo de %i �: %i \n", n, cuboN);
	}
	else{
		printf("O valor tem que ser maior que 5 e menor que 7 \n");
	}
	system("pause");
	return(0);
}
