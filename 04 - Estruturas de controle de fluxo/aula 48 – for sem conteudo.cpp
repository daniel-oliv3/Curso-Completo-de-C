#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 48 � for sem conteudo
// ele e um loop no qual se omite a declara��o.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i;
	
	printf("Antes da intera��o\n");
	for(i=0; i<50000000; i++)
	;
	printf("Depois da intera��o\n");
	
	
	system("Pause");
	return 0;
}

