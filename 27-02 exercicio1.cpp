#include <stdio.h>

//atividade 1

main()
{
	float vet[10];
	
	for (int i = 0; i <10; i++)
	{
		printf("Escreva o %d numero: ", i+1);
		scanf("%f", &vet[i]);
	}
	for( int f = 0; f <10; f++)
	{
		printf("%0.2f", vet[f]);
		if(f < 9)
		{
			printf(" ,");
		}
	}
}
