#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 126 – gets;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[100];
	printf("Digite um nome: ");
	gets(nome); //get ler "s" string
	printf("Seu nome é: %s\n",nome);
	system("Pause");
	return 0;
}

/**/
