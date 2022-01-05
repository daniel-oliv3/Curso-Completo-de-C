#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 103 – conteudo asterisco 
//deslocamento de conteudo atraves de ponteiro.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int vetor[5]={6,5,4,3,2};
	int *pt;
	pt = &vetor[0];
	printf("O valor da posição dois: = [%d]\n",*(pt+2)); //*(pt+2)); para o deslocamento o 4
	system("Pause");
	return 0;
}

