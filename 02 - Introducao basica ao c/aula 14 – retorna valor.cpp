#include<stdio.h>
#include<stdlib.h>

int entrada(int x)
{	
	return x*x;
}

int main()
{
	int num;
	int result;

	printf("Entre com Um N%cmero: ",163);
	scanf("%d", &num);
	result = entrada(num);
	printf("A Sua Multiplica%c%co %c: %d \n\n",128,132,130,result);	
	
	
system("pause");	
return 0;
	
}
