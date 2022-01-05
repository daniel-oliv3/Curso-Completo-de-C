#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int num;
	
	printf("Digite Um N%cmero: ",163);
	scanf("%d", &num);
	
	if(num>10)
		printf("N%cmero Maior Que 10!\n\n",163);
	if(num==10)	
	{
		printf("Voc%c Acertou!\n",136);
		printf("N%cmero Igual a 10!\n\n",163);
	}
	if(num<10)
		printf("N%cmero Menor Que 10!\n\n",163);
	
	
system("pause");
return 0;	
}
