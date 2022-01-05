#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 88 – strncpy e strcpy
//Faz a mesma coisa da strcpy, mas em vez de copiar todos os elementos, copia somente os 'count' primeiros elementos da 'src' para a 'dest'.
//ele copia uma string de origem para um destino, o "n" str"n"cpy, determina o numeros de caracteres que eu quero copiar 

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto1[100]="portalcplusplus.com.br o site do programador";
	char texto2[100];
	strncpy(texto2,texto1,29); //texto2 vai receber o que tem no texto1, numero); indica quantos caracter na string.
	printf("Texto2 Vale: %s\n",texto2);
	system("Pause");
	return 0;
}

