#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float num;
	printf("Digite um n�mero: ");
	scanf("%f",&num);
	if(num==5) //se(Condi��o)
	{
		printf("Voc� Acertou!\n");
		printf("Parab�ns!\n");
	}
	if(num>5)
		printf("Voc� digitou um n�mero maior que 5\n");
	if(num<5)
		printf("Voc� digitou um n�mero menor que 5:\n");	
	
	system("Pause");
	return 0;
}

