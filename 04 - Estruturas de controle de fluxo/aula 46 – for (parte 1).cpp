#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 46 – for


int main()
{
	setlocale(LC_ALL, "portuguese");
	int cont;
	for(cont=0;cont<=10;cont++)
		printf("%d \n",cont);
	
	
	system("Pause");
	return 0;
}

