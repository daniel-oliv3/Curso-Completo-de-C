#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

// aula 63 � isupper
// Verifica se o caracter � uma letra mai�scula

#define TAMANHO 100
int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[TAMANHO];
	int cont = 0;
	printf("Digite um texto: \n");
	fgets(texto,TAMANHO,stdin); // ler o texto,(texto, ..., ler no teclado);
	
	while(texto[cont]) //enquanto(texto, a partir da posicao "cont que e 0 // varrer o texto digitado com while 
	{
		if(isupper(texto[cont])) // se(for maiuscula,o texto, posicao. //verificar caracter por caracter
			printf("O caracter %c � maiuscula:\n",texto[cont]); // imprimi os maiuscula
		else // caso contrario
			printf("O caracter %c N�o e maiuscula:\n",texto[cont]); //imprimir os que n�o sao maiuscula
		cont++;
	}
	
	system("Pause");
	return 0;
}
