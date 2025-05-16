#include <stdio.h>
//Um programa que receba uma matrizes de 4x4 e faça um soma dos valores de cada linha e exiba qual a maior soma. 
main()
{
	float soma[4] = {0, 0, 0, 0}, matriz[4][4], maior;
	int local[4], dup = 0;
	
	for(int i = 0;i<4;i++)
	{
		for(int j = 0; j<4; j++)
		{
			printf("Escreva o valor da matriz no local[%d][%d]: ", j+1,i+1);
			scanf("%f", &matriz[j][i]);
			soma[i] = soma[i] + matriz[j][i];
		}
		printf("\n");
	} 
	
	maior = soma[0];

	
	for(int a = 0;a<4;a++)
	{
		for(int b = 0;b<4;b++)
		{
			printf("%0.2f ", matriz[b][a]);
		}
		printf("----> Soma da linha: %0.f\n", soma[a]);
		if(soma[a] > maior )
		{
			maior = soma[a];
			local[0] = a+1;
			dup = 0;
		}
		else if (soma[a] == maior)
		{
			
			local[dup] = a+1;
	
			dup++;
		}
	}
	printf("\nA maior linha = %d\n", local[0]);
	int f = 1;
	while(f < dup)
	{
		printf("A maior linha = %d\n", local[f]);
		f++;
	}
	
}
