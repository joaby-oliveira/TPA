/*
função: Receber um valor e dizer se é par ou ímpar.
nome:Joaby Oliveira.
data de criação:22/10/2019
data de alteração:22/10/2019
*/

#include<iostream>
#include<windows.h>
#include<locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	char nome, totnome;
	for(int i = 0; i < 6; i++){	
		printf("Digite o nome: ");
		 
		scanf("%s", &nome);
		
		totnome = totnome + nome;
	}
	
	printf("%s", totnome);
	system("pause");
	return 0;
}


