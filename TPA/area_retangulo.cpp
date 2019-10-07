/*
Função: Calcular a área de um retangulo
Autor: "Joaby Oliveira"
Data de criação: 28/09/2019
Data de alteração: 28/09/2019
 */
#include <stdio.h>
#include<stdlib.h>
#include <windows.h>

int main(){
    int b, h, a;

    printf(" _____________________ \n|                     | \n|        Area         |\n|         do          |\n|      Retangulo      |\n|_____________________|\n");
    Sleep(3000);
    system("cls");

    printf("\nDigite o comprimento base: ");
    scanf("%i", &b);
    Sleep(90);
    system("cls");
    printf("\nDigite a altura: ");
    scanf("%i", &h);
    a = b * h;
    Sleep(90);
    system("cls");
    printf("______________________\n     A area eh: %i", a), "\n";
    Sleep(5000);
    return 0;
}
