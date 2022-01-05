#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int num1, num2, result;
	
	printf("Digite dois N%cmeros: \n",163);
	scanf("%d %d", &num1, &num2);
	
	//result = num1*num2+2/2; // prioridade *,/,+,
	result = num1*(num2+2)/2; // primeiro a soma, colocar entre (...)
	
	printf("O Resultado %c: %d\n",130,result);
	
system("pause");
return 0;	
}
