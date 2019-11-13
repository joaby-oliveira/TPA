/*
função: Calcular o preço de um terreno retangular
nome:Joaby Oliveira.
data de criaïção:02/10/2019
data de alteração:02/10/2019
*/
#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Digite a medida de frente do terreno(em metros): ");
	float mf = 0;
	scanf("%f" ,&mf);
	printf("Digite a medida de um dos lados do terreno(em metros): ");
	float ml = 0;
	scanf("%f", &ml);
	printf("Digite o valor do metro quadrado(reais): ");
	getchar();
	float mq = 0;
	scanf("%f", &mq);
	
	float at = ml * mf;
	float pf = mq*at;
	
	printf("Enquanto o preço por metro quadrado for %5.2f, o valor total deste terreno sera de R$%5.2f", mq, pf);

	system("pause");
	return(0);
}
