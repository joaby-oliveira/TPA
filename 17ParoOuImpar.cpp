/*
função: Receber um valor e dizer se é par ou ímpar.
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
	
	cout<<"Digite um valor: ";
	int val = 0;
	cin>>val;
	
	if(val % 2 == 0){
		cout<<"O valor é par.";
	}
	else{
		cout<<"O valor é ímpar";

	}
}
