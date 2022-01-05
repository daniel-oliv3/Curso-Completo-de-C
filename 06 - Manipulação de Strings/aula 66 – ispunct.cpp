#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

// aula 66 – ispunct 
// Verifica se o caracter é um ponto

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
		if(ispunct(texto[cont])) // se(for caracter de pontuação,o texto, posicao. //verificar caracter por caracter.
			printf("O caracter %c é de pontuação:\n",texto[cont]); // imprimi os de pontuação.
		else // caso contrario
			printf("O caracter %c Não e de pontuação:\n",texto[cont]); //imprimir os que não sao de pontuação.
		cont++;
	}
	
	system("Pause");
	return 0;
}
