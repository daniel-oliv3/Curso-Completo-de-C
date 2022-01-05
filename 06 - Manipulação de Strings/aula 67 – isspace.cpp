#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

//aula 67 – isspace 
// Verificar se o caracter é um espaço em branco

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
		if(isspace(texto[cont])) // se(for caracter  tem espaço,o texto, posicao. //verificar caracter por caracter.
			printf("O caracter %c tem espaço:\n",texto[cont]); // imprimi os tem espaço.
		else // caso contrario
			printf("O caracter %c Não tem espaço:\n",texto[cont]); //imprimir os que não sao tem espaço.
		cont++;
	}
	
	system("Pause");
	return 0;
}
