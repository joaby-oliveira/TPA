/*
fun��o: Ler um numero, mostrar seu respectivo m�s do calend�rio.
nome:Joaby Oliveira.
data de cria��o:22/10/2019
data de altera��o:12/11/2019
*/

#include<iostream>
#include<windows.h>
#include<locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	
	int mes = 0;
	printf("Digite o numero de 1 a 12 do m�s do ano: ");
	scanf("%i", &mes);
	
	
	switch(mes){
		case 1:
			printf("Janeiro");	
			break;
		case 2:
			printf("Fevereiro");	
			break;
		case 3:
			printf("Mar�o");	
			break;
		case 4:
			printf("Abril");	
			break;
		case 5:
			printf("Maio");	
			break;
		case 6:
			printf("Junho");	
			break;
		case 7:
			printf("Julho");	
			break;	
		case 8:
			printf("Agosto");	
			break;	
		case 9:
			printf("Setembro");	
			break;	
		case 10:
			printf("Outubro");	
			break;
		case 11:
			printf("Novembro");	
			break;	
		case 12:
			printf("Dezembro \n");
			break;	
	}
	system("pause");
	return 0;
}


