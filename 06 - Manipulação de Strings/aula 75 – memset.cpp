#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 75 – memset
//"preenche um bloco de memoria"

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[100] ="skatemanaus.com.br o site do skate board manauara";
	memset(texto, '*',5); //preenche(texto,com '*', 6); //tamanho
	printf("O texto agora é: %s\n",texto);
	system("Pause");
	return 0;
}

