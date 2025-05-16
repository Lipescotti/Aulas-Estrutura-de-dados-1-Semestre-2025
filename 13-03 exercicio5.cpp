#include <stdio.h>

//Utilize o codigo anterior e somar a linha 1 ;
main()
{
	int matriz[6][6] = { {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6} };
	int linha = 0;
	
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j<6; j++)
		{
			printf("%d ", matriz[i][j]);
			if(i == 0)
			{
				linha = linha + matriz[i][j];
				if(j == 5)
				{		
					printf(" <-- linha 1");
				}
			}
		}
		printf("\n");
	}
	printf("\nA soma da linha 1 == %d", linha);
}
