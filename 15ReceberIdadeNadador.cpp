/*
função: Receber a idade e classificar entre infantil, juvenil e adulto.
nome:Joaby Oliveira.
data de criação:06/10/2019
data de alteração:12/11/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	printf("Digite a idade: ");
	int age = 0;
	scanf("%i", &age);
	
	if (age >= 5 && age <= 11){
		printf("Infantil");
	}
	else
	if(age >= 12 && age <= 17){
		printf("Juvenil");	
	}
	else
	if(age > 18){
		printf("Adulto");
	}
	system("pause");
	return(0);
	
}
