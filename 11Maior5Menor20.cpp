/*
fun��o: Receber um valor, e, se ele for maior que 5 e menor que 20 mostrar seu cubo
nome:Joaby Oliveira.
data de cria��o:06/10/2019
data de altera��o:06/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	cout<<"Digite um n�mero: ";
	int n = 0;
	cin >> n;
	if(n>5 && n <20){
		cout<<"O cubo de "<<n<<" �: "<<n*n*n;
	}
}
