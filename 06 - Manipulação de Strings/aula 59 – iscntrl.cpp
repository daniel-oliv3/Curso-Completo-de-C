#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

//aula 59 � iscntrl 
//Verificar se o caracter � um caracter de controle( \n, \t)
// n�o imprime \n, \t,

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[50] = "Bem Vindos\n ao site do brogramador\n";
	int cont = 0;
	
	while(!iscntrl(texto[cont])) // enquanto(n�o, for caracter de controle,texto [desda posi��o inicial 0];
	{
		putchar(texto[cont]); // imprimir na tela,texto[desda posi��o inicial 0];
		cont++; // cont, tem que ser encrementado se n�o entra do loop infinito
	}
	printf("\n");
	system("Pause");
	return 0;
}

