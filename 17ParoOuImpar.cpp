/*
fun��o: Receber um valor e dizer se � par ou �mpar.
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
	
	cout<<"Digite um valor: ";
	int val = 0;
	cin>>val;
	
	if(val % 2 == 0){
		cout<<"O valor � par.";
	}
	else{
		cout<<"O valor � �mpar";

	}
}
