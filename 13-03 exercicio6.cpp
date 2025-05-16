#include <stdio.h>

//Utilize o codigo anterior e somar a coluna 2 ;
main()
{
	int matriz[6][6] = { {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6} };
	int coluna = 0;
	
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j<6; j++)
		{
	
			{
				printf(" %d", matriz[i][j]);
				if(j == 1)
				{
					coluna = coluna + matriz[i][j];
				}
			}
			
		}
		printf("\n");
	
	}
		printf("   ^\n   |\nSengunda coluna\n");
	printf("\nA soma da coluna 2 == %d", coluna);
}
