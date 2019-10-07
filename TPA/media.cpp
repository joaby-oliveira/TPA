# include<stdio.h>
#include<windows.h>
int main(){
		int n1, n2, n3, media = 0;
			printf("Digite um numero");
			scanf("%i", &n1);
			printf("Digite outro numero");
			scanf("%i", &n2);
			printf("Digite mais um numero");
			scanf("%i", &n3);
		media = (n1 + n2 + n3) / 2;
		printf("A media entre %i, %i e %i é %i", n1, n2, n3, media);
		system("pause");

}
