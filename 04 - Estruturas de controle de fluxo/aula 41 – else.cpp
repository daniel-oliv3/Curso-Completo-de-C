#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// o else e um complemento do if.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num;
	printf("Digite um N�mero: ");
	scanf("%f",&num);
	if(num==5) // se(condi��o)
		printf("Voc� Acertou!\n");
	else // Caso contrario, executa a linha de baixo
		{
			printf("Voc� Errou!\n");
			printf("Tente novamente\n");
		}
	system("Pause");
	return 0;
}

