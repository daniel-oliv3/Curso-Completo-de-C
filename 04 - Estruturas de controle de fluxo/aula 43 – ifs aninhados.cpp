#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// if alinhados
// o if alinhado e simplismente um if dentro da declara��o de outro if, externo.


int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Digite um N�mero: \n");
	scanf("%d",&num);
	if(num==5)
		printf("Parab�ns! Voc� Acertou!!\n ");
	else
	{
		if(num>5)
			printf("Voc� Errou o N�mero N�o � Maior que 5\n");
		else
			printf("Voc� Errou o N�mero N�o � Menor que 5\n");	
	}	
	
	
	system("Pause");
	return 0;
}

