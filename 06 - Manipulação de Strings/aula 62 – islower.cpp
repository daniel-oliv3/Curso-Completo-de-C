#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <ctype.h>

// aula 62 – islower 
// Verifica se o caracter é minúsculo


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
		if(islower(texto[cont])) // se(for minusculo,o texto, posicao. //verificar caracter por caracter
			printf("O caracter %c é minusculo:\n",texto[cont]); // imprimi os minusculo
		else // caso contrario
			printf("O caracter %c Não e minusculo:\n",texto[cont]); //imprimir os que não sao minusculo
		cont++;
	}
	
	system("Pause");
	return 0;
}

