#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

//aula 69 – toupper
//Converte caracter minúsculo em maiúsculo.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[100];
	int count=0;
	printf("Digite um texto: \n");
	gets(texto);
	while(texto[count])//enquanto(texto[posição 0])
	{
		//putc(texto[count], stdout); //stdout - é o arquivo de saída padrão. Até o momento, nossa saída padrão é a tela do computador, através do terminal de comando.
		putchar(toupper(texto[count]));
		count++;
		
	}
	printf("\n");
	system("Pause");
	return 0;
}

