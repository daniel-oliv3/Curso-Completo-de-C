#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 106 � ponteiros para ponteiros 
//basta almentar o numero de asterisco(*) na declara��o, a logica e a mesmo.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int numero=10, *pint, **ppint;
	pint = &numero;
	ppint = &pint;
	printf("N�MERO: %d\n",numero);
	printf("PINT: %d\n",*pint);
	printf("PPINT: %d\n",**ppint);
	system("Pause");
	return 0;
}

