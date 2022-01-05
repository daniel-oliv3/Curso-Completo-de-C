#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

//aula 59 – iscntrl 
//Verificar se o caracter é um caracter de controle( \n, \t)
// não imprime \n, \t,

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[50] = "Bem Vindos\n ao site do brogramador\n";
	int cont = 0;
	
	while(!iscntrl(texto[cont])) // enquanto(não, for caracter de controle,texto [desda posição inicial 0];
	{
		putchar(texto[cont]); // imprimir na tela,texto[desda posição inicial 0];
		cont++; // cont, tem que ser encrementado se não entra do loop infinito
	}
	printf("\n");
	system("Pause");
	return 0;
}

