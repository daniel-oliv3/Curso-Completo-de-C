#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 46 – for (parte 4)


int main()
{
	setlocale(LC_ALL, "portuguese");
	int cont;
	for(cont=0;cont<=10;cont+=2) //imprime de 2 em 2
		printf("%d \n",cont);
	
	
	system("Pause");
	return 0;
}

