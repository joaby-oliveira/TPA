/*
função: Receber quatro notas e calcular sua media
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
	int notas[4];
	for (int i = 0; i <= 3; i++){
		printf("Digite a nota: ");
		scanf("%i", &notas[i]);
	}
	float media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;
	printf("A média é: %5.2f", media);

	system("pause");
	return(0);
	
}
