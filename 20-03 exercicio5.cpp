#include <stdio.h>
//Um programa leia uma matriz 3x3 e um vetor de tamanho 3. O programa deve somar cada linha da matriz com o elemento correspondente do vetor e exiba a matriz resultante
main()
{
	float vetor[3], matriz[3][3], resul[3][3];
	int rep = 0;
	for(int i=0; i<3;i++)
	{
		printf("Escreva o valor da casa %d do vetor: ", i+1);
		scanf("%f", &vetor[i]);
	}
	for(int i = 0; i <3;i++)
	{
		for(int j =0;j<3;j++)
		{
			printf("Escreva o valor da matriz[%d][%d]: ", j+1, i+1);
			scanf("%f", &matriz[j][i]);
			resul[j][i] = matriz[j][i]+vetor[i];
		}
		printf("\n");
	}
	
	do
	{
		if(rep == 0)
		{
			printf("Matriz\n\n");
		}
		else
		{
			printf("\n\nResuldado matriz + vetor\n\n");
		}
		for(int i = 0; i<3;i++)
		{
			for(int j = 0; j<3;j++)
			{
				if(rep == 0)
				{
					printf("%0.2f ", matriz[j][i]);	
				}
				else
				{
					printf("%0.2f ", resul[j][i]);
				}
			}
			printf("\n");
		}
	rep++;
	}while(rep < 2);
}
