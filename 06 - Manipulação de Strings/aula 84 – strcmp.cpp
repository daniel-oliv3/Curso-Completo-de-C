#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 84 – strcmp
// Essa função compara duas strings segundo sua ordem alfabética e retorna um inteiro.
//Se esse inteiro for negativo, é porque a primeira string é menor que a segunda.
//Se retornar um inteiro positivo, é porque a segunda string é maior que a segunda.
//Se retornar 0, é porque as strings são idênticas.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome1[50], nome2[50];
	printf("Digite um Nome: \n");
	gets(nome1);
	printf("Digite outro nome: \n");
	gets(nome2);
	if(strcmp(nome1,nome2) ) //se for 0
		printf("Os nomes são diferentes!\n");
	else
		printf("Os nomes são iguais!\n");	
	
	system("Pause");
	return 0;
}

//essa função ela compara a string 1 com a string 2, 
//se as duas forem identicas a função retorna 0 "zero".
//se as elas forem diferentes a função retorna false 0
