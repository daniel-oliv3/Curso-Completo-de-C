#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 90 � strlen 
//Essa fun��o recebe um ponteiro que indica uma string e retorna quantos caracteres essa string possui.
//strlen tem a fun��o de retornar o tamanho da string.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int tamanho;
	char nome[50];
	printf("Digite seu nome: \n");
	gets(nome);
	tamanho = strlen(nome)+1; //+1 para o caracter nulo \0;
	printf("%d\n",tamanho);
	
	system("Pause");
	return 0;
}

