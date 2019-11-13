/*
função: Receber quantas vezes o usuario quer dar um valor e então, printar somente os pares.
nome:Joaby Oliveira.
data de criação:22/10/2019
data de alteração:13/11/2019
*/

#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	int vezes = 1, value = 0;
	printf("\nProgama iniciado, caso queira encerrar digite 0");
	while(vezes != 0){
		
		printf("\nDigite quantas vezes você quer digitar: ");
		scanf("%i", &vezes);
		vezes --;
		int valores[vezes];
		for(int i = 0; i <= vezes; i++){
			printf("Digite o valor: ");
			scanf("%i", &value);
			valores[i] = value;
		}
		for(int i = 0; i <= vezes; i++){
			if(valores[i] % 2 == 0){
				printf("\n%i", valores[i]);
			}
		}
	}
	system("pause");
	return(0);
}
