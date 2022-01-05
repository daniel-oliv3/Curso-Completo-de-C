#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <ctype.h>

// isalpha
// Verificar se o caracter � uma letra do alfabeto
// A biblioteca ctype.h cont�m fun��es e macros para manipula��o de caracteres.
//Utilizando as fun��es desta biblioteca podemos verificar se um caracter � n�merico, ou se � mai�sculo, min�sculo, representa espa�o em branco etc.

#define TAMANHO 100
int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[TAMANHO];
	int cont = 0;
	printf("Digite um texto: \n");
	gets(texto);
	while(texto[cont]) //enquanto(texto, a partir da posicao "cont que e 0 // varrer o texto digitado com while 
	{
		if(isalpha(texto[cont])) // se(for alfa(letra),o texto, posicao. //verificar caracter por caracter
			printf("O caracter %c � alfa(letra):\n",texto[cont]); // imprimi os alfa(letra)
		else // caso contrario
			printf("O caracter %c N�o e alfa(letra):\n",texto[cont]); //imprimir os que n�o sao alfa(letra)
		cont++;
	}
	
	system("Pause");
	return 0;
}
