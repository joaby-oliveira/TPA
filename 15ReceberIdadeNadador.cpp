/*
função: Receber a idade e classificar entre infantil, juvenil e adulto.
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
	cout<<"Digite a idade: ";
	int age = 0;
	cin>>age;
	
	if (age >= 5 && age <= 11){
		cout<<"Infantil";
	}
	else
	if(age >= 12 && age <= 17){
		cout<<"Juvenil";	
	}
	else
	if(age > 18){
		cout<<"Adulto";
	}
	system("pause");
	return(0);
	
}
