#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<errno.h>

//aula 77 – strerror 
//ele retorna uma mensagem se não conseguir abrir um arquivo, ai ele envia uma mensagem para a tela

int main()
{
	setlocale(LC_ALL, "portuguese");
	FILE *arquivo;
	arquivo=fopen("arquivo.txt","r");
	if(arquivo==NULL)
		printf("ERRO: %s\n",strerror(errno));
	system("Pause");
	return 0;
}

