#include <stdio.h>

//atividade 6

main()
{
	int num[10], ref;
	int maior = 0, menor = 0, iqual = 0;
	
	for(int i = 0; i<10 ; i++)
	{
		printf("Escreva o %d numero: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("\nNumero de referencia: ");
	scanf("%d", &ref);
	
	for(int t = 0; t<10;t++)
	{
		if(ref == num[t])
		{
			iqual++;
		}
		else if(num[t] > ref)
		{
			maior++;
		}
		else
		{
			menor++;
		}
	}
	printf("\n\nTem %d numeros iquais a %d\nTem %d numeros menores que %d\nTem %d numeros maiores que %d", iqual, ref, menor, ref, maior, ref);
}
