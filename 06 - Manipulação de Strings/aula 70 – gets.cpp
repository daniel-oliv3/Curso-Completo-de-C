#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//aula 70 – gets
//ler string
//gets, ele imprime o que for digitado no teclado, comando gets não e recomendado ele não e seguro. 
//ele pega todo o texto independente do numero de nome[..] vetor [tamanho]<- que for declarado
	

int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome[100];
	
	printf("Digite seu nome: \n");
	gets(nome); 
	printf("Seu nome é: %s\n",nome);
	
	system("Pause");
	return 0;
}

