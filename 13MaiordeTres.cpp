/*
fun��o: Receber tr�s valores e imprimir o maior.
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
	int nums[3], maior = 0;
	for(int i = 0; i<3; i++){
		cout<<"Digite um n�mero: ";
		cin>>nums[i];
		if(nums[i] > maior){
			maior = nums[i];
		}		
	}
	cout<<"O maior valor �: "<<maior;
	system("pause");
	return(0);
}
