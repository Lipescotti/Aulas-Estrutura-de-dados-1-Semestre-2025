#include <stdio.h>

//Pedir do usuario os 36 valores ;
main()
{
	int matriz[6][6];
	
	
	for (int c = 0; c < 6; c++)
	{
		for (int l = 0; l<6; l++)
		{
			printf("Valor da matriz no local: [%d,%d]: ", c,l);
			scanf("%d", &matriz[c][l]);
			
		}
	}
	
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j<6; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
