#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float num;
	printf("Digite um número: ");
	scanf("%f",&num);
	if(num==5) //se(Condição)
	{
		printf("Você Acertou!\n");
		printf("Parabéns!\n");
	}
	if(num>5)
		printf("Você digitou um número maior que 5\n");
	if(num<5)
		printf("Você digitou um número menor que 5:\n");	
	
	system("Pause");
	return 0;
}

