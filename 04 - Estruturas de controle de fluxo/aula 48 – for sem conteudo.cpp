#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 48 – for sem conteudo
// ele e um loop no qual se omite a declaração.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i;
	
	printf("Antes da interação\n");
	for(i=0; i<50000000; i++)
	;
	printf("Depois da interação\n");
	
	
	system("Pause");
	return 0;
}

