#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//o operador de enterroga��o e limitado, n�o atende a uma gama grande de caso mais pode ser usado para simplificar expre��es complicadas.
//


int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome[7] = "Daniel";
	int i, indice=0;
	for(i=0; i<90; i++)
	{	
		printf("%c ",nome[indice]);
    	(indice ==7)?indice=0: indice++; // quando chega em 7 ele sera zera e volta para o come�o e volta a zero.
	}
		printf("\n");
	
	system("Pause");
	return 0;
}

