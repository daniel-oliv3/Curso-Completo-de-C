#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 46 – for (parte 2)


int main()
{
	setlocale(LC_ALL, "portuguese");
	int cont, total=18;
	for(cont=0;cont<=total;cont++)
		printf("%d \n",cont);
	
	
	system("Pause");
	return 0;
}
