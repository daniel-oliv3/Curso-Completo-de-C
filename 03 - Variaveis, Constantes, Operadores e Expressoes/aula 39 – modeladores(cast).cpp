#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int num1;
	float result;
	
	printf("Digite Um N%cmero: ",163);
	scanf("%d",  &num1);
	
	result = num1/3; 
	printf("Sem Cast %d / 3 = %f\n",num1,result);
	
	result = (float)num1/3; // Modelador cast
	printf("Com Cast %d / 3 = %f\n",num1,result);
	
	
	
system("pause");
return 0;	
}
