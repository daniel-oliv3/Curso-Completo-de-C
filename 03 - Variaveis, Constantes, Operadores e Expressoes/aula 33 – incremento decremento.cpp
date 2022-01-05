#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int num, result;
	
	printf("Digite Um N%cmero: \n",163);
	scanf("%d", &num);
	result = ++num; // pre-incremento.
	
	printf("num = ++num (%d)\n",num);
	printf("result = %d\n",result);
	
	
	
	
system("pause");	
return 0;
}
