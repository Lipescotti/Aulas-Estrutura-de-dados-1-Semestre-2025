#include <stdio.h>

//Pedir do usuario os 36 valores e pergunte qual lnha ele quer somar ;
main()
{
	int matriz[6][6];
	int soma = 0;
	int linha;
	
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
		printf("Qual linha deseja somar(1 a 6) ?\n");
		scanf("%d", &linha);
		
		if(linha < 1 || linha > 6)
		{
			printf("\n\nENTRADA INVALIDA\nTENTE NOVAMENTE\n\n");
		}
	}while(linha < 1 || linha > 6);
	
		printf("\n\n");
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j<6; j++)
		{
			printf("%d ", matriz[i][j]);
			if(i == linha - 1)
			{
				soma = soma + matriz[i][j];
				if(j == 5)
				{
					printf("<-- linha %d", linha);
				}
			}
		}
		printf("\n");
	}
	printf("\nA soma dos valores da linha %d == %d", linha, soma);
}
