#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <ctype.h>

// isalpha
// Verificar se o caracter é uma letra do alfabeto
// A biblioteca ctype.h contém funções e macros para manipulação de caracteres.
//Utilizando as funções desta biblioteca podemos verificar se um caracter é númerico, ou se é maiúsculo, minúsculo, representa espaço em branco etc.

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
			printf("O caracter %c é alfa(letra):\n",texto[cont]); // imprimi os alfa(letra)
		else // caso contrario
			printf("O caracter %c Não e alfa(letra):\n",texto[cont]); //imprimir os que não sao alfa(letra)
		cont++;
	}
	
	system("Pause");
	return 0;
}
