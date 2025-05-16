#include <stdio.h>

//Utilize o codigo anterior e mostre a matriz em formato matemaico organizado ;
main()
{
	int matriz[6][6] = { {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6} };	
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j<6; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
