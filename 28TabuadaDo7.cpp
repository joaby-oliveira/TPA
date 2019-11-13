/*
Função: Mostrar a tabuada do 7
Data:09/11/2019
Autor: Joaby Oliveira
*/

#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	int mult = 0;
	for(int i=0;i<8;i++){
		mult = i * 7;
		printf("%i x 7 = %i \n", i, mult);
	}
	return 0;	
	system("pause");
}
