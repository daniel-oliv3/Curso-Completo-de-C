#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int x, y;
	
	for(x=0,y=0; x+y<=100; x++,y++) // de 2 a 2 somente os numeros pares, usar expressão encadeada ',' virgula.
	printf("%d ",x+y);
	printf("\n");
	
	
system("pause");
return 0;	
}
