#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 84 � strcmp
// Essa fun��o compara duas strings segundo sua ordem alfab�tica e retorna um inteiro.
//Se esse inteiro for negativo, � porque a primeira string � menor que a segunda.
//Se retornar um inteiro positivo, � porque a segunda string � maior que a segunda.
//Se retornar 0, � porque as strings s�o id�nticas.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome1[50], nome2[50];
	printf("Digite um Nome: \n");
	gets(nome1);
	printf("Digite outro nome: \n");
	gets(nome2);
	if(strcmp(nome1,nome2) ) //se for 0
		printf("Os nomes s�o diferentes!\n");
	else
		printf("Os nomes s�o iguais!\n");	
	
	system("Pause");
	return 0;
}

//essa fun��o ela compara a string 1 com a string 2, 
//se as duas forem identicas a fun��o retorna 0 "zero".
//se as elas forem diferentes a fun��o retorna false 0
