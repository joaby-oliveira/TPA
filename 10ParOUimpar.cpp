/*
fun��o: Ler um numero e retornar se ele � verdadeiro ou falso.
nome:Joaby Oliveira.
data de cria��o:06/10/2019
data de altera��o:06/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	cout<<"Digite um n�mero: ";
	int n = 0;
	cin>>n;
	if (n % 2 == 0){
		cout<<"Numero par";
	}else{
		cout<<"N�mero impar";
	}
}
