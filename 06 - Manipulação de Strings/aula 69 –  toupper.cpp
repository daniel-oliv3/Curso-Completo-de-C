#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

//aula 69 � toupper
//Converte caracter min�sculo em mai�sculo.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[100];
	int count=0;
	printf("Digite um texto: \n");
	gets(texto);
	while(texto[count])//enquanto(texto[posi��o 0])
	{
		//putc(texto[count], stdout); //stdout - � o arquivo de sa�da padr�o. At� o momento, nossa sa�da padr�o � a tela do computador, atrav�s do terminal de comando.
		putchar(toupper(texto[count]));
		count++;
		
	}
	printf("\n");
	system("Pause");
	return 0;
}

