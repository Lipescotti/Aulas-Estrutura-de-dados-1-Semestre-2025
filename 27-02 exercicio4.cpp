#include <stdio.h>

//atividade 4

main()
{
	int num[5], soma[5] = {0, 0, 0, 0};
	float media;
	
	for(int i = 0; i<5;i++)
	{
		printf("Escreva o %d numero: ", i + 1);
		scanf("%d", &num[i]);
		
		if(i==0)
		{
			soma[i] = num[i];	
		}
		else
		{
			soma[i] = num[i] + soma[i-1];
		}
	}
	
	for(int f = 0; f <5; f++)
	{
		printf("Soma dos primeiros %d valores == %d\n", f+1, soma[f]);
	}
	
	media = (float)soma[4]/5;
	printf("\nMedia da soma %d == %0.2f\n\n", soma[4], media);

	for(int f = 0; f<5; f++)
	{	
		if(media < num[f])
		{
			printf("O %d numero > media\n", f+1);
		}
		else
		{
			printf("O %d numero <= media\n", f+1);
		}
	}
}
