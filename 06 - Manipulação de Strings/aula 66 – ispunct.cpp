#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

// aula 66 � ispunct 
// Verifica se o caracter � um ponto

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
		if(ispunct(texto[cont])) // se(for caracter de pontua��o,o texto, posicao. //verificar caracter por caracter.
			printf("O caracter %c � de pontua��o:\n",texto[cont]); // imprimi os de pontua��o.
		else // caso contrario
			printf("O caracter %c N�o e de pontua��o:\n",texto[cont]); //imprimir os que n�o sao de pontua��o.
		cont++;
	}
	
	system("Pause");
	return 0;
}
