#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 109 – prototipo;*/

int cubo(int numero);  // prototipo da função

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int resultado;
	resultado=cubo(10);
	printf("   %d\n",resultado);
	system("Pause");
	return 0;
}

int cubo(int numero){
	return (numero*numero*numero);
}

/*o prototipo deve ser colocado antes da função principal "main"*/
