/*
fun��o: Receber dois valores e mostrar o maior valor.
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
	cout<<"Digite um valor: ";
		int v1 = 0;
		cin>>v1;
	cout<<"Digite outro valor: ";
		int v2 = 0;
		cin>>v2;
	if(v1 > v2){
		cout<<"O maior valor �: "<<v1;
	}else 
	if(v1 == v2){
		cout<<"Os valores s�o iguais.";
	}else 
	if(v1 < v2){
		cout<<"O maior valor �: "<<v2<<;
	}
	system("pause");
	return(0);
}
