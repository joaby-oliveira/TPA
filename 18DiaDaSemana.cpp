/*
fun��o: Receber um numero e dizer seu respectivo dia da semana no calend�rios.
nome:Joaby Oliveira.
data de cria��o:06/10/2019
data de altera��o:12/12/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	int dia = 0;
	printf("[1]Domingo [2]Segunda [3]Ter�a [4]Quarta \n[5]Quinta [6]Sexta [7]S�bado");
	scanf("%i", &dia);
	switch (dia){
			case 1:
				printf("Domingo");
				break;
				
		case 2:
				printf("Segunda");
				break;
				
		case 3:
				printf("Ter�a");
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
				printf("S�bado");
				break;
				
			}
			system("pause");
			return(0);
	}
