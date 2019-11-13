/*
função: Ver a quantidade de dias de um mês
nome:Joaby Oliveira.
data de criação:22/10/2019
data de alteração:13/11/2019
*/

#include<iostream>
#include<windows.h>
#include<locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	printf("Digite o número do mês do qual deseja ver a quantidade de dias: ");
	int mes = 0;
	scanf("%i", &mes);
	
	switch(mes){
		case 1:
			printf("30");	
			break;
		case 2:
			printf("28");	
			break;
		case 3:
			printf("31");	
			break;
		case 4:
			printf("30");	
			break;
		case 5:
			printf("31");	
			break;
		case 6:
			printf("30");	
			break;
		case 7:
			printf("31");	
			break;	
		case 8:
			printf("31");	
			break;	
		case 9:
			printf("30");	
			break;	
		case 10:
			printf("31");	
			break;
		case 11:
			printf("30");	
			break;	
		case 12:
			printf("31");
			break;	
	}
	system("pause");
	return 0;
}


