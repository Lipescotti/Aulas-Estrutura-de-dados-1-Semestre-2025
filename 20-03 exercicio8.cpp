#include <stdio.h>

//Um programa que cria uma matriz 5x5 com valores aleatorios que o usuario deve tentar acertar e acaba quando todos os numeros forem enconrados;
main()
{
	int escondidos = 25, chute, tentados[100], n = 0;
	int tabela[5][5] = {{1, 25, 100, 90, 48}, {12, 45, 78, 34, 89}, {56, 23, 67, 91, 14}, {38, 72, 5, 99, 41}, {64, 81, 10, 47, 26}};
	int achados[5][5];
	
	for(int i = 0;i<5;i++)
	{
		for (int j= 0; j<5;j++)
		{
			achados[i][j] = -1;
		}
	}
	
	do
	{
		for(int i = 0;i<5;i++)
		{
			for (int j= 0; j<5;j++)
			{
				if(achados[j][i] == -1)
				{
					printf("### ");
				}
				else if (achados[j][i] < 10)
				{
					printf("00%d ", achados[j][i]);
				}
				else if (achados[j][i] < 100)
				{
					printf("0%d ", achados[j][i]);
				}
				else
				{
					printf("%d ", achados[j][i]);
				}
			}
			printf("\n");
		}
		
		
		if(n > 0)
		{
			printf("Numeros tentados: ");
		}
		for (int t = 0; t < n; t++)
		{
			printf("%d, ", tentados[t]);
		}
		printf("\n\nEscreva um numero(de 0 a 100): ");
		do
		{
			scanf("%d", &chute);	
			if(chute < 0 || chute > 100)
			{
				printf("Entrada invalida tente novamente\n\n { ");
			}
		}while(chute < 0 || chute > 100);
	
		tentados[n] = chute;
		n++;
			for(int i = 0;i<5;i++)
				{
				for (int j= 0; j<5;j++)
				{
					if(tabela[i][j] == chute)
					{
						achados[i][j]  = chute;
						escondidos--;
					}
				}
			}
		printf("\n\n\n\n\n");
	
	}while(escondidos != 0);
	
	printf("\n\nPARABENS");
}
