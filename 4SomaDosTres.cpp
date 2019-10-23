/*
função: Calcular a soma de tres numeros elevada ao quadrado.
nome:Joaby Oliveira.
data de criação:02/10/2019
data de alteração:02/10/2019
*/
#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	cout<<"Informe o primeiro número: ";
	int n1 = 0;
	cin>>n1;
	cout<<"Digite o outro número: ";
	int n2 = 0;
	cin>>n2;
	cout<<"Digite o terceiro valor: ";
	int n3 = 0;
	cin>>n3;
	
	int sum = n1 + n2 + n3;
	int rootsum = sum * sum;
	printf("%i + %i + %i = %i² => %i", n1,n2,n3, sum, rootsum);
	
	system("pause");
	return(0);	
}
