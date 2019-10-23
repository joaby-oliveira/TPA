/*
função: Receber um valor e dizer se é par ou ímpar.
nome:Joaby Oliveira.
data de criação:06/10/2019
data de alteração:06/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	int dia = 0;
	printf("[1]Domingo [2]Segunda [3]Terça [4]Quarta \n[5]Quinta [6]Sexta [7]Sábado");
	scanf("%i", &dia);
	switch (dia){
			case 1:
				printf("Domingo");
				break;
				
		case 2:
				printf("Segunda");
				break;
				
		case 3:
				printf("Terça");
				break;
				
		case 4:
				printf("Quarta");
				break;
				        	
		case 5:
				printf("Quinta");
				break;
				
		case 6:
				printf("Sexta");
				break;
				
		case 7:
				printf("Sábado");
				break;
				
			}
	}
