#include <stdio.h>
//Um programa que leia 2 matrizes de 3x3 e faça uma multiplicação entre elas (posição por posição). E esiba a matriz resultante. 
main()
{
	float n1[3][3], n2[3][3], resultado[3][3];
	int repeticao = 0;
	do
	{
		for(int i=0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				if(repeticao == 0)
				{
					printf("Digite o valor da matriz 1 no local[%d][%d]: ", j+1, i+1);
					scanf("%f", &n1[j][i]);
				}
				else
				{
					printf("Digite o valor da matriz 2 no local[%d][%d]: ", j+1, i+1);
					scanf("%f", &n2[j][i]);
				}
			}
			printf("\n");
		}
		repeticao++;
	}while(repeticao < 2);
	
	repeticao = 0;
	do
	{
		printf("\n\n");
		for(int I = 0; I < 3; I++)
		{
			for(int J = 0; J<3;J++)
				{
					if(repeticao == 0)
					{
						printf("%0.f ",n1[J][I]);
					}
					else if(repeticao == 1)
					{
						printf("%0.f ",n2[J][I]);
					}
					else
					{
						
					resultado[J][I] = (n1[J][I] * n2[J][I]);
					printf("%0.f ", resultado[J][I]);
				
					}
					
				}
		printf("\n");
		}
		repeticao++;
	}while(repeticao < 3);
	
}
