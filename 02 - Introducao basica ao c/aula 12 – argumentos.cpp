#include<stdio.h> 
#include<stdlib.h>

int quadrado(int x)
{
	printf("O Quadrado %c: %d \n",130,(x*x));
return 0;	
}


int main()
{
	int num;
	
	printf("Entre Com Um N%cmero: \n",163);
	scanf("%d", &num);
	
	quadrado(num); //num "numero" digitado ira passar como ARGUMENTO na FUNÇÃO "quadrado"
	
	
	
system("pause");
return 0;	
}
