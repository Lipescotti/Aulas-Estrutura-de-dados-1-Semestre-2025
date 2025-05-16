#include <stdio.h>

//atividade 7

main()
{
	int i, pares[10], num[10];
	int n = 0;

	for(i = 0; i<10; i++)
	{
		printf("Escreva o %d numero: ", i+1);
		scanf("%d", &num[i]);
		
		if(num[i]%2 == 0)
		{
			pares[n] = num[i];
			n++;
		}
	}
	printf("\nOs numeros pare(s) == ");
	for(i = 0; i < n; i++)
	{
		printf("%d, ", pares[i]);
		
	}
}
