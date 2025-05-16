#include <stdio.h>

//Utilize o codigo anterior e some a diagonal principal ;
main()
{
	int matriz[6][6] = { {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6} };
	int diagonal = 0;
	
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j<6; j++)
		{
			printf(" %d", matriz[i][j]);
			if(i == j)
			{
				diagonal = diagonal + matriz[i][j];
				printf("<--p ");
			}
		}
		printf("\n");
	}
	printf("\nA soma da diagonal princlipal == %d", diagonal);
}
