#include <stdio.h>

//atividade 2

main()
{
	float nota1[4], nota2[4], soma[4];
	
	for (int i = 0; i <4; i++)
	{
		do
		{
			printf("Escreva a %d nota do grupo 1(de 0 a 10) = ", i+1);
			scanf("%f", &nota1[i]);
			if (nota1[i] < 0 || nota1[i] > 10)
			{
				printf("NOTA INVALIDA\n\n");
			}
		}while(nota1[i] < 0 || nota1[i] > 10);
		
		do
		{
			printf("Escreva a %d nota do grupo 2(de 0 a 10) = ", i+1);
			scanf("%f", &nota2[i]);
			if (nota2[i] < 0 || nota2[i] > 10)
			{
				printf("NOTA INVALIDA\n");
			}
		}while(nota2[i] < 0 || nota2[i] > 10);
		
		soma[i] = nota1[i] + nota2[i];
	}
	for(int f = 0; f < 4;f++)
	{
		printf("%d) Soma: %0.2f + %0.2f == %0.2f\n", f+1, nota1[f], nota2[f], soma[f]);
	}
}
