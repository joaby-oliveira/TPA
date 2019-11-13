/*
Função: Mostra ímpares de 1 até o Nsimo numero
Data:09/11/2019
Autor: Joaby Oliveira
*/

#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	
	int nuser = 0;
	
	printf("Digite um numero: ");
	scanf(" %i", &nuser);	
	
	for(int i = 1; i<=nuser; i++){
		if(i%2 != 0){
			printf("%i\n", i);
		}
	}
	return 0;
	system("pause");
}
