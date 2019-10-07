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
	cout<<"Digite um número: ";
	int n = 0;
	cin>>n;
	if (n % 2 == 0){
		cout<<"Numero par";
	}else{
		cout<<"Número impar";
	}
}
