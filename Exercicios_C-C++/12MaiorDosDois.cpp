/*
função: Receber dois valores e mostrar o maior valor.
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
	printf("Digite um valor: ");
		int v1 = 0;
		scanf("%i", &v1);
	printf("Digite outro valor: ");
		int v2 = 0;
		scanf("%i", &v2);
	if(v1 > v2){
		printf("O maior valor é: %i", v1);
	}else 
	if(v1 == v2){
		printf("Os valores são iguais.");
	}else 
	if(v1 < v2){
		printf("O maior valor é: %i", v2);
	}
	system("pause");
	return(0);
}
