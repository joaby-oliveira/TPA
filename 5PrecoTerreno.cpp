/*
fun��o: Calcular o pre�o de um terreno retangular
nome:Joaby Oliveira.
data de cria��o:02/10/2019
data de altera��o:02/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	cout<<"Digite a medida de frente do terreno(em metros): ";
	float mf = 0;
	cin>>mf;
	cout<<"Digite a medida de um dos lados do terreno(em metros): ";
	float ml = 0;
	cin>>ml;
	cout<<"Digite o valor do metro quadrado(reais): ";
	float mq = 0;
	cin >> mq;
	
	float at = ml * mf;
	float pf = mq*at;
	
	printf("Enquanto o preço por metro quadrado for %5.2f, o valor total deste terreno sera de R$%5.2f", mq, pf);

	system("pause");
	}
