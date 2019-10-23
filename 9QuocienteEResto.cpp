/*
função: Receber 2 valores, e, deles mostrar o quociente e o resto.
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
	
	cout<<"Digite o dividendo: ";
	int dividen = 0;
	cin>>dividen;
	
	cout<<"Digite o divisor: ";
	int diver = 0;
	cin>>diver;
	
	int quoc = dividen / diver;
	int rest = dividen % diver;
	
	cout<<"O quociente é: "<<quoc<<" e o resto é: "<<rest;

	system("pause");
	return(0);	
}
