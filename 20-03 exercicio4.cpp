#include <stdio.h>
//Um programa que receba 2 matrizes de NxN (sendo n dado pelo usuario), imprima todos os elemetros da diagonal principal de cada um dele e calcule o produto das 2 diagonais secundarias. 
main()
{
	int n = 0, rep = 0;
	do
	{
		printf("Escreva o tamanho da matriz quadrada: ");
		scanf("%d", &n);
		if(n<0)
		{
			printf("ENTRADA INVALIDA\n\n");
		}
	}while(n<0);
	float principal[n][2], produto[2] = {1, 1};
	float prim[n][n], segun[n][n];
	
	do
	{
		for(int i= 0; i<n; i++)
		{
			for(int j= 0; j<n; j++)
			{
				if(rep == 0)
				{
					printf("Escreva o valor da primeira matriz[%d][%d]: ", j+1, i+1);
					scanf("%f", &prim[j][i]);
					if(j == i)
					{
						principal[i][rep] = prim[j][i];
					}
					
					if((i+j) == n-1)
					{
						produto[rep] = produto[rep]*prim[j][i];
					}
				}
				else
				{
					printf("Escreva o valor da segunda matriz[%d][%d]: ", j+1, i+1);
					scanf("%f", &segun[j][i]);
					if(j == i)
					{
						principal[i][rep] = segun[j][i];
					}
					
					if((i+j) == n-1)
					{
						produto[rep] = produto[rep]*segun[j][i];
					}
				}
			}
			printf("\n");
		}
		rep++;
	}while(rep < 2);
	
	

	for(int h = 0; h <2; h++)
	{
		for(int f= 0; f<n;f++)
		{
			for(int a=0;a<n;a++)
			{
				if(h==0)
				{
					printf("%0.2f ", prim[a][f]);
				}
				else
				{
					printf("%0.2f ", segun[a][f]);
				}
			}
			printf("\n");
		}
		printf("Diagonal principal da matriz %d \n\n", h+1);
		for(int i = 0; i<n; i++)
		{
					for(int j = 0; j<n; j++)
		{
			if(i == j)
			{
				printf("%0.2f ", principal[j][h]);
			}
			else
			{
				printf("    ");
			}
		}
		printf("\n");
		
		}
		printf("\n");
		printf("Produto da diagonal secundaria = %0.2f\n\n", produto[h]);
	}
	
}
