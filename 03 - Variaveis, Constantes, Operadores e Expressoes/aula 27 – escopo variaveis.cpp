#include<stdio.h>
#include<stdlib.h>

int numero = 10; // variavel global. (antes da função MAIN)

int teste(int numero) // Parametro
{
	printf("N%cmero Dentro do Parametro %d\n",163,numero);
}


int main() // Função Principal. 
{
	
	printf("N%cmero Global %d\n",163,numero);
	
	teste(7);
	
	int count, numero = 5; // variavel local.. (tem preferencia sobre a variavel global)
	printf("Antes do FOR %d\n",numero);
	
	for(count=0; count<5; count++) // Estrutura de Repetição FOR.
	{
		int numero = 2; // variavel local ao FOR
		printf("Dentro do FOR %d \n",numero);
	}


	printf("Depois do FOR %d \n",numero); // variavel local ao MAIN
return 0;
	
}
