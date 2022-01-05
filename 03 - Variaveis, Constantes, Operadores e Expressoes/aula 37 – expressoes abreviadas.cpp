#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int num1, num2, result;
	
	printf("Digite Dois N%cmeros: ",163);
	scanf("%d %d", &num1, &num2);
	
	result = num1+num2;
	//result = result+2;
	result += 2; // expressão abreviada
	// result -= 2; // outra expressão abreviada
	// result /= 2; // outra expressão abreviada
	// result *= 2; // outra expressão abreviada
	
	printf("O Resultado %c: %d\n",130,result);
	
	
system("pause");
return 0;	
}
