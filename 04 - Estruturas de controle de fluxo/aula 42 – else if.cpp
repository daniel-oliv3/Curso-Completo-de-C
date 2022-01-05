#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


// else if, caso contrario, se
//o else if e uma extenção da estrutura, if else

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Digite um número: \n");
	scanf("%d",&num);
	if(num==5)
		printf("Você acertou!\n");
	else if(num> 5)
		printf("O número não é maior que 5\n");
	else
		printf("O número não é menor que 5\n");
	system("Pause");
	return 0;
}

