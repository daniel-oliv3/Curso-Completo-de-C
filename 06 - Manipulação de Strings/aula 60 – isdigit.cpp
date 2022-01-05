#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#define TAMANHO 100

//aula 60 – isdigit
//Verificar se o caracter é um digito decimal

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[TAMANHO];
	int count = 0;
	printf("Digite um texto: \n");
	gets(texto);
	
	while(texto[count])
	{
		if(isdigit(texto[count])) //se(verifica se for digito "numero[
			printf("O caracter %c é digito (numero)\n",texto[count]);
		else	
			printf("O caracter %c não é digito (numero)\n",texto[count]);
		count++;	
	}
	
	system("Pause");
	return 0;
}

