#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <ctype.h>

// isalnum, Verifica se o caracter é alfanumérico;

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
		if(isalnum(texto[cont])) // se(for alfanumerico,o texto, posicao. //verificar caracter por caracter
			printf("O caracter %c é alfanumerico:\n",texto[cont]); // imprimi os alfanumericos
		else // caso contrario
			printf("O caracter %c Não e alfanumerico:\n",texto[cont]); //imprimir os que não sao alfanumericos
		cont++;
	}
	
	system("Pause");
	return 0;
}

