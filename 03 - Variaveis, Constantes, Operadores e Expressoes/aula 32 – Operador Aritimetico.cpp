#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, num2;
	
	printf("Digite Dois Valores Inteiros: \n");
	scanf("%d %d", &num1, &num2);
	printf("%d + %d = %d\n ",num1,num2,num1+num2); // soma de 2 numeros
	printf("%d - %d = %d\n ",num1,num2,num1-num2);  // subtra��o de 2 numeros
	printf("%d * %d = %d\n ",num1,num2,num1*num2); // multiplica��o de 2 numeros
	printf("%d / %d = %d\n ",num1,num2,num1/num2); // divis�o de 2 numeros
	printf("%d %% %d = %d\n ",num1,num2,num1%num2); // mod resto da divis�o
	
system("pause");
return 0;	
}
