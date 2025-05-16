#include <stdio.h>

//Um programa jogo da velha
main()
{
	int tabela[3][3];
	int escolha, n = 1, jogador = 1, local;
	
	
		for(int i = 0; i<3; i++)
		{
			for(int j=0;j<3;j++)
			{
				tabela[j][i] = n;
				n++;
			}
		}
		
		
	for(int jogo = 0; jogo < 9; jogo++)
	{
		local = 0;
		for(int i = 0; i<3; i++)
		{
			for(int j=0;j<3;j++)
			{
				if(tabela[j][i] < 10)
				{
					printf("%d ", tabela[j][i]);
				}
				else if (tabela[j][i] == 10)
				{
					printf("X ");
				}
				else
				{
					printf("O ");
				}
			}
			printf("\n");
		}
		
		printf("\nJogador %d escolha uma casa: ", jogador);
		do
		{
			scanf("%d", &escolha);
			for(int i = 0; i<3; i++)
			{
				for(int j=0;j<3;j++)
				{
					if(tabela[j][i] == escolha && tabela[j][i] < 10)
					{
						local = 1;
						if(jogador == 1)
						{
							tabela[j][i] = 10;
						}
						else
						{
							tabela[j][i] = 20;
						}
					}
				}
			}
			if(local == 0)
			{
				printf("LOCAL INVALIDO TENTE NOVAMENTE\nnova tentativa: ");	
			}	
		}while(local == 0);
		if(jogador == 1)
		{
			jogador = 2;
		}
		else
		{
			jogador = 1;
		}
		
		printf("\n\n");
	}
			for(int i = 0; i<3; i++)
		{
			for(int j=0;j<3;j++)
			{
				if(tabela[j][i] < 10)
				{
					printf("%d ", tabela[j][i]);
				}
				else if (tabela[j][i] == 10)
				{
					printf("X ");
				}
				else
				{
					printf("O ");
				}
			}
			printf("\n");
		}
}
