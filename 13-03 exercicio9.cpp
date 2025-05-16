#include <stdio.h>

//Pedir do usuario os 36 valores e pergunte qual coluna ele quer somar ;
main()
{
	int matriz[6][6];
	int soma = 0;
	int coluna;
	
	for (int c = 0; c < 6; c++)
	{
		for (int l = 0; l<6; l++)
		{
			printf("Valor da matriz no local: [%d,%d]: ", c,l);
			scanf("%d0", &matriz[c][l]);
			
		}
	}
	
	do
	{
		printf("Qual coluna deseja somar(1 a 6) ?\n");
		scanf("%d", &coluna);
		
		if(coluna < 1 || coluna > 6)
		{
			printf("\n\nENTRADA INVALIDA\nTENTE NOVAMENTE\n\n");
		}
	}while(coluna < 1 || coluna > 6);
	
		printf("\n\n");
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j<6; j++)
		{
			printf("%d ", matriz[i][j]);
			if(j == coluna - 1)
			{
				soma = soma + matriz[i][j];
			}
		}
		printf("\n");
	}
	printf("\nA soma dos valores da coluna %d == %d", coluna, soma);
}
