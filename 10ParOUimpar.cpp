/*
função: Ler um numero e retornar se ele é verdadeiro ou falso.
nome:Joaby Oliveira.
data de criação:06/10/2019
data de alteração:06/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	printf("Digite um número: ");
	int n = 0;
	scanf("%i", &n);
	if (n % 2 == 0){
		printf("Numero par");
	}else{
		printf("Número impar");
	}
	system("pause");
	return(0);
}
