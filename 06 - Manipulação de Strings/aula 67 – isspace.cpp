#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

//aula 67 � isspace 
// Verificar se o caracter � um espa�o em branco

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
		if(isspace(texto[cont])) // se(for caracter  tem espa�o,o texto, posicao. //verificar caracter por caracter.
			printf("O caracter %c tem espa�o:\n",texto[cont]); // imprimi os tem espa�o.
		else // caso contrario
			printf("O caracter %c N�o tem espa�o:\n",texto[cont]); //imprimir os que n�o sao tem espa�o.
		cont++;
	}
	
	system("Pause");
	return 0;
}
