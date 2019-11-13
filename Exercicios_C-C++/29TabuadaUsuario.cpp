/*
Função: Mostrar a tabuada do N
Data:09/11/2019
Autor: Joaby Oliveira
*/

#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	int mult, num = 0;
	printf("Digite o número do qual deseja ver a tabuada: ");
	scanf("%i", &num);
	
	for(int i=0;i<11;i++){
		mult = i * num;
		printf("%i x %i = %i \n", i, mult, mult);
	}
	return 0;	
	system("pause");
}
