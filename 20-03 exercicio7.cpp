#include <stdio.h>
#include <stdlib.h>

//Um programa jogo de damas
main()
{
	int tabuleiro[8][8], replica[8][8], ver = 12, pret = 12, jogador = 1;
	
	
	int a = 0;
	for(int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if(a%2 == 0)
			{
				if(i < 3)
				{
					tabuleiro[i][j] = 10;
				}
				else if (i > 4)
				{
					tabuleiro[i][j] = 20;
				}
				else
				{
					tabuleiro[i][j] = 0;
				}
				
			}
			else
			{
				tabuleiro[i][j] = 0;
			}
			a++;
		}
		a--;
	}
	
	do
	{
		for(int i = 0; i < 8; i++)
		{
			printf("%d --> ", i+1);
			for(int j = 0; j < 8; j++)
			{
				replica[i][j] = tabuleiro[i][j];
				
				if(tabuleiro[i][j] == 0)
				{
					printf(" # ");	
				}
				else if (tabuleiro[i][j] == 10)
				{
					printf(" v ");
				}
				else if (tabuleiro[i][j] == 15)
				{
					printf(" V ");
				}
				else if (tabuleiro[i][j] == 20)
				{
					printf(" p ");
				}
				else if (tabuleiro[i][j] == 25)
				{
					printf(" P ");
				}
			}
			printf("\n");
		}
		
		printf("\n\nJogador %d, ecolha qual peca quer jogar", jogador);
		
		if(jogador == 1)
		{
			
		}
		else
		{
			
		}
		
		scanf("%d", ver);
	}while(ver > 0 || pret > 0);
}
