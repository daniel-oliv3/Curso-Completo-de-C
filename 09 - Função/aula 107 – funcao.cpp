#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*107 � fun��o */

int mensagem(int numero){ //FUN��O
	numero++;
	return numero;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int valor;
	valor=mensagem(10); // passando o valor 10 por parametro.
	printf(" %d\n",valor);
	system("Pause");
	return 0;
}

