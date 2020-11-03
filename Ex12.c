#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int n, i, vetor[6], lado;

	printf("Entre com o numero de vezes que o dado foi lancado:");
	scanf("%d", &n);

		for(i = 1; i <= 6; i++)
		{
	vetor[i] = 0;	
			}

	for(i = 1; i <= n; i++)
	{
		printf("Digite a face do dado:");
		scanf("%d", &lado);
			vetor[lado]++;
	}

	for(i = 1; i <= n; i++)
	{
	if(vetor[i] != 0) { printf("A face %d caiu %d vezes. \n", i, vetor[i]); }	
	} 

return 0;	
}

