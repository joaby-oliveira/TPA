/*
função: Receber a media de um aluno e retornar se ele foi aprovado ou reprovado.
nome:Joaby Oliveira.
data de criação:06/10/2019
data de alteração:13/11/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	printf("Digite sua media");
	int med;
	scanf("%i", med);
	if(med > 6 ){
		printf("Aluno aprovado");
	}
	else{
		printf("Reprovado!");
	}
	system("pause");
	return(0);
}

