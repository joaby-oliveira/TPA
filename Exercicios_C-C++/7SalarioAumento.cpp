/*
funï¿½ï¿½o: Calcular a prestaï¿½ao atrasada com acrescimo de juros.
nome:Joaby Oliveira.
data de criaï¿½ï¿½o:02/10/2019
data de alteraï¿½ï¿½o:02/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	
	cout<<"Digite o salário: ";
	float sal = 0;
	cin>>sal;
	
	cout<<"Digite o percentual de aumento: ";
    float perc = 0;
	cin>>perc;
	

	float newSal = (perc * sal / 100) + sal;
	cout<<"O salário atual é: "<<newSal;

	system("pause");
	return(0);
}
