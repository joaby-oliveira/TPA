/*
fun��o: Calcular a presta�ao atrasada com acrescimo de juros.
nome:Joaby Oliveira.
data de cria��o:02/10/2019
data de altera��o:02/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	
	cout<<"Digite o sal�rio: ";
	float sal = 0;
	cin>>sal;
	
	cout<<"Digite o percentual de aumento: ";
    float perc = 0;
	cin>>perc;
	

	float newSal = (perc * sal / 100) + sal;
	cout<<"O sal�rio atual �: "<<newSal;

	system("pause");
	return(0);
}
