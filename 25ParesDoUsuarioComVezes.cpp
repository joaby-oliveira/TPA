/*
fun��o: Receber quantas vezes o usuario quer dar um valor e ent�o, printar somente os pares.
nome:Joaby Oliveira.
data de cria��o:22/10/2019
data de altera��o:13/11/2019
*/

#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	int vezes = 1, value = 0;
	printf("\nProgama iniciado, caso queira encerrar digite 0");
	while(vezes != 0){
		
		printf("\nDigite quantas vezes voc� quer digitar: ");
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
