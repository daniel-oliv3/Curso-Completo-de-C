#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


// else if, caso contrario, se
//o else if e uma exten��o da estrutura, if else

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Digite um n�mero: \n");
	scanf("%d",&num);
	if(num==5)
		printf("Voc� acertou!\n");
	else if(num> 5)
		printf("O n�mero n�o � maior que 5\n");
	else
		printf("O n�mero n�o � menor que 5\n");
	system("Pause");
	return 0;
}

