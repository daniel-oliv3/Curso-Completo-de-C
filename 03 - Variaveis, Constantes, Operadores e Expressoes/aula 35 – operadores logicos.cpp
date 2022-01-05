#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int num1, num2;
	
	printf("Digite Dois N%cmeros (Cada Um Sendo 0 ou 1): \n",163);
	scanf("%d %d", &num1, &num2);
	printf("%d And %d %c %d\n",num1,num2,130,num1&&num2);
	printf("%d Or %d %c %d\n",num1,num2,130,num1||num2);
	printf("NOT %d %c %d\n",num1,130,!num1);
	
system("pause");
return 0;	
}
