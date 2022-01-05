#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

// aula 68 – tolower 
// Converte o caracter em minúsculo

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	char texto[100];
	int count;
	printf("Digite um Texto: \n");
	gets(texto);
	
	for(count=0; texto[count]; count++)
		putc(tolower(texto[count]),stdout); // Converte o caracter em minúsculo
		
	printf("\n");
	system("Pause");
	return 0;
}

