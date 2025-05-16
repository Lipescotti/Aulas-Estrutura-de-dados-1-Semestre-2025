#include <stdio.h>

//atividade 5

main()
{
	float in[10];
	int i=0;
	
	for(i = 0; i<10; i++)
	{
		printf("Escreva o %d numero: ", i+1);
		scanf("%f", &in[i]);
	}
	
	for(i =10; i>0; i--)
	{
		printf("%d) %0.2f\n", i, in[i-1]);
	}
}
