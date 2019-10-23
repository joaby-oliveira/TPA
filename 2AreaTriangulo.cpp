/*
função: Calcular a área de um triangulo.
nome: Joaby Oliveira dos Santos Silva.
data de criação:02/10/2019
data de alteração:02/10/2019
*/

#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main(){
	cout<<"Digite a base do triângulo: ";
	int b = 0;
	cin>>b;
	cout<<"Digite a altura do triângulo: ";
	int h = 0;
	cin>>h;
	int a = b * h / 2;
	cout<<"A área do triângulo é: "<<a<<endl;
	system("pause");
	return(0);
};
