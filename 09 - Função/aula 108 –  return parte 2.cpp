#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 108 – return;*/

int quadrado(int numero){ // função "quadrado" parametro tipo (inteiro numero)
	return (numero*numero);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int resultado;
	resultado=quadrado(10);
	printf("  %d\n",resultado);
	system("Pause");
	return 0;
}

/**/
