#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, num2;
	
	printf("Digite Dois Valores Inteiros: \n");
	scanf("%d %d", &num1, &num2);
	
	printf("%d == %d %c %d\n", num1,num2,130,num1==num2);
	printf("%d != %d %c %d\n", num1,num2,130,num1!=num2);
	printf("%d <= %d %c %d\n", num1,num2,130,num1<=num2);
	printf("%d >= %d %c %d\n", num1,num2,130,num1>=num2);
	printf("%d < %d %c %d\n", num1,num2,130,num1<num2);
	printf("%d > %d %c %d\n", num1,num2,130,num1>num2);
	
	
	
system("pause");
return 0;	
	
}
