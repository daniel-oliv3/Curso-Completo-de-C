#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 46 – for (parte 3)

int valor_total() //variavel global.
{
	return 41;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	int cont;
	for(cont=0;cont<=valor_total();cont++)
		printf("%d \n",cont);
	
	
	system("Pause");
	return 0;
}

