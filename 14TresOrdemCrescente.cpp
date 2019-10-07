/*
função: Receber três valores e imprimir o maior.
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
	int nums[3], maior = 0;
	for(int i = 0; i<3; i++){
		cout<<"Digite um número: ";
		cin>>nums[i];
	}
	
	 if (nums[0]<nums[1] && nums[1]<nums[2]){
        printf("%i %i %i", nums[0], nums[1], nums[2]);
    }else 
	if (nums[0]<nums[2] && nums[2]<nums[1]){
        printf("%i %i %i", nums[0], nums[2], nums[1]);
    }else 
	if (nums[1]<nums[0] && nums[0]<nums[2]){
        printf("%i %i %i ", nums[1], nums[0], nums[2]);
    }else 
	if (nums[1]<nums[2] && nums[2]<nums[0]){
        printf("%i %i %i ", nums[1], nums[2], nums[0]);
    }else 
	if (nums[2]<nums[0] && nums[0]<nums[2]){
        printf(" %i %i %i ", nums[2], nums[0], nums[1]);
    }else{
        printf("%i %i %i ", nums[2], nums[1], nums[0]);
	}	
	system("pause");
	return(0);
}
