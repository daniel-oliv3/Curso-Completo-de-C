#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 79 – strncat e strcat.
//ele concatena uma string de origem na de destino, no entanto com o numero de caracteres informados.
//strncat(...,..., quantidade de caracter a imprimir); //texto2

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto1[100]="Manaos Skate Shop";
	char texto2[100]=" O melhor Preço de Manaus!";
	strncat(texto1,texto2,100);
	printf("%s\n",texto1);
	system("Pause");
	return 0;
}

