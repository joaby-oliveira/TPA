/*
Função: mostra todos os numeros pares entre os informados pelo usuario
Data:09/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	
	
	cout<<"Progama iniciado, caso queira encerrar digite 0";
	do{
		
		cout<<"Digite quantas vezes você quer digitar: ";
		int vezes = 0;
		cin>>vezes;
		int valores[vezes];
		for(int i = 0; i <= vezes; i++){
			cout<<"Digite o valor: ";
			int value;
			cin>>value;
			int valores[vezes] = value; 
		}
		
		
	}while(value != 0);
}
