#include <stdio.h>
//Crie um programa que receba um veto de nº inteiros de tamanho definido pelo usuario e indique o maior e o menor valor presente, alem de suas posições//

main()
{
	int tamanho, maior, maiorLocal, menor, menorLocal;
	
	
	do
	{
		printf("Tamanho do vetor: ");
		scanf("%d", &tamanho);
		if(tamanho < 0)
		{
			printf("ENTRADA INVALIDA\n\n");	
		}	
	}while(tamanho < 0);
	int vetor[tamanho];
	
	for(int i = 0; i < tamanho; i++)
	{
		printf("Valor do %d numero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	maior = vetor[0];
	maiorLocal = 0;
	menor = vetor[0];
	menorLocal = 0;
	for(int f = 0; f < tamanho; f++)
	{
		if(maior < vetor[f])
		{
			maior = vetor[f];
			maiorLocal = f;
		}
		
		if(menor > vetor[f])
		{
			menor = vetor[f];
			menorLocal = f;
		}
	}
	for(int j = 0; j < tamanho; j++ )
	{
		printf("%d, ", vetor[j]);
	}
	printf("\n\nMenor valor: %d\nNa %d posicao", menor, menorLocal+1);
	
	printf("\n\nMaior valor: %d\nNa %d posicao", maior, maiorLocal+1);
}
