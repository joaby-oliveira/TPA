#include  <stdio.h>
#include <windows.h>
#include <locale.h>
int main(){
	char resp, casas[3][3], O[30], X[30], bol = 'O', xis = 'X';
	int cont_jogadas, l, c, vez=0, i, j, s, placarX = 0, placarO = 0;
	setlocale(LC_ALL, "portuguese"); 
	printf("Digite o nome do jogador X: ");
	gets(O);
	fflush(stdin);
	printf("Digite o nome do jogador O: ");
	gets(X);
	fflush(stdin);
	do{	
		cont_jogadas = 1;
		for(i = 0; i <= 2; i++){
			for(j = 0; j <= 2; j++){
				casas[i][j] = ' ';
			}
		}
		do{
			printf("\n-------------");
			printf("\n| %c | %c | %c |", casas[0][0], casas[0][1], casas[0][2]);
			printf("\n+---+---+---+");
			printf("\n| %c | %c | %c |", casas[1][0], casas[1][1], casas[1][2         ]);
			printf("\n+---+---+---+");
			printf("\n| %c | %c | %c |", casas[2][0], casas[2][1], casas[2][2]);
			printf("\n-------------");

			if(vez % 2 != 0){
				printf("\nVez de %s", X);
			}
			else{
				printf("\nVez de %s", O);
			}
			
				printf("\nDigite a linha: ");
				scanf("%i", &l);
				printf("\nDigite a coluna: ");
				scanf("%i", &c);

			if(l<1 || c<1 || l>3 || c>3){
				printf("ERROR!!!");
			}
			
			else 
			if(casas[l-1][c-1] != ' '){
				printf("ERROR!!!");
			}
			else{
				if(vez % 2 == 0){
					casas[l-1][c-1] = xis;
				}
				else{
					casas[l-1][c-1] = bol;
					}
					vez ++;
					cont_jogadas ++;
				}
				if(casas[0][0] == 'X' && casas[0][1] == 'X' && casas[0][2] == 'X'){cont_jogadas = 11;}
				if(casas[1][0] == 'X' && casas[1][1] == 'X' && casas[1][2] == 'X'){cont_jogadas = 11;}
				if(casas[2][0] == 'X' && casas[2][1] == 'X' && casas[2][2] == 'X'){cont_jogadas = 11;}
				if(casas[0][0] == 'X' && casas[1][0] == 'X' && casas[2][0] == 'X'){cont_jogadas = 11;}
				if(casas[0][1] == 'X' && casas[1][1] == 'X' && casas[2][1] == 'X'){cont_jogadas = 11;}
				if(casas[0][2] == 'X' && casas[1][2] == 'X' && casas[2][2] == 'X'){cont_jogadas = 11;}
				if(casas[0][0] == 'X' && casas[1][1] == 'X' && casas[2][2] == 'X'){cont_jogadas = 11;}
				if(casas[0][2] == 'X' && casas[1][1] == 'X' && casas[2][0] == 'X'){cont_jogadas = 11;}

				if(casas[0][0] == 'O' && casas[0][1] == 'O' && casas[0][2] == 'O'){cont_jogadas = 12;}
				if(casas[1][0] == 'O' && casas[1][1] == 'O' && casas[1][2] == 'O'){cont_jogadas = 12;}
				if(casas[0][1] == 'O' && casas[1][1] == 'O' && casas[2][1] == 'O'){cont_jogadas = 12;}
				if(casas[2][0] == 'O' && casas[2][1] == 'O' && casas[2][2] == 'O'){cont_jogadas = 12;}
				if(casas[0][0] == 'O' && casas[1][0] == 'O' && casas[2][0] == 'O'){cont_jogadas = 12;}
				if(casas[0][2] == 'O' && casas[1][2] == 'O' && casas[2][2] == 'O'){cont_jogadas = 12;}
				if(casas[0][0] == 'O' && casas[1][1] == 'O' && casas[2][2] == 'O'){cont_jogadas = 12;}
				if(casas[0][2] == 'O' && casas[1][1] == 'O' && casas[2][0] == 'O'){cont_jogadas = 12;}
			} while(cont_jogadas <= 9);
			printf("\n-------------");
			printf("\n| %c | %c | %c |", casas[0][0], casas[0][1], casas[0][2]);
			printf("\n+---+---+---+");
			printf("\n| %c | %c | %c |", casas[1][0], casas[1][1], casas[1][2]);
			printf("\n+---+---+---+");
			printf("\n| %c | %c | %c |", casas[2][0], casas[2][1], casas[2][2]);
			printf("\n-------------");
			
			if(cont_jogadas == 10){
				printf("\nDeu velha que pena....!\n");
				}
			if(cont_jogadas == 11){
			printf("\nO vencedor é %s, parabens!\n", X);
			placarX++;
			}
			if(cont_jogadas == 12){
			printf("\nO vencedor é %s, parabens!\n", O);
			placarO++;
			}
			printf("\n__________________\n_____|PLACAR|_____|\n%s: %i\n%s: %i \n__________________\n|", X, placarX, O, placarO);
			printf("Deseja jogar novamente?\n[1]Sim [2]Não\n");
			fflush(stdin);
			scanf("%c", &resp);

			if(resp != '1'){
				printf("Obrigado por jogar\n");
				}
	}while(resp == '1');
	
	system("pause");
	return(0); 
}
