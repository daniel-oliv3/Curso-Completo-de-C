#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 94 � inicializacao sem tamanho 
//a inicializa��o sem especifica��o de tamanho, vetores, matrizes, sem especifica��o de tamanho.


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[]="Daniel"; //
	printf("%s\n",nome);
	system("Pause");
	return 0;
}

