/*
fun��o: Calcular a �rea de um triangulo.
nome: Joaby Oliveira dos Santos Silva.
data de cria��o:02/10/2019
data de altera��o:02/10/2019
*/

#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main(){
	cout<<"Digite a base do tri�ngulo: ";
	int b = 0;
	cin>>b;
	cout<<"Digite a altura do tri�ngulo: ";
	int h = 0;
	cin>>h;
	int a = b * h / 2;
	cout<<"A �rea do tri�ngulo �: "<<a<<endl;
	system("pause");
	return(0);
};
