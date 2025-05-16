#include <stdio.h>

//Utilize o codigo anterior e some a diagonal secundaria ;
main()
{
	int matriz[6][6] = { {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6} };
	int diagonal = 0;
	
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j<6; j++)
		{
			printf(" %d ", matriz[i][j]);
			if(j == 5-i)
			{
				diagonal = diagonal + matriz[i][j];
				printf("<--s");
			}
		}
		printf("\n");
	}
	printf("\nA soma da diagonal secundaria == %d", diagonal);
}
