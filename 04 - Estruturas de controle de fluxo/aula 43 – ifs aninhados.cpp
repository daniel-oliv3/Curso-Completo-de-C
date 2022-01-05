#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// if alinhados
// o if alinhado e simplismente um if dentro da declaração de outro if, externo.


int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Digite um Número: \n");
	scanf("%d",&num);
	if(num==5)
		printf("Parabéns! Você Acertou!!\n ");
	else
	{
		if(num>5)
			printf("Você Errou o Número Não é Maior que 5\n");
		else
			printf("Você Errou o Número Não é Menor que 5\n");	
	}	
	
	
	system("Pause");
	return 0;
}

