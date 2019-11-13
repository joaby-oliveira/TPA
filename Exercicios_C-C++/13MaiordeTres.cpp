/*
função: Receber três valores e imprimir o maior.
nome:Joaby Oliveira.
data de criação:06/10/2019
data de alteração:12/11/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	int nums[3], maior = 0;
	for(int i = 0; i<3; i++){
		printf("Digite um número: ");
		scanf("%i", &nums[i]);
		if(nums[i] > maior){
			maior = nums[i];
		}		
	}
	printf("O maior valor é: %i", maior);
	system("pause");
	return(0);
}
