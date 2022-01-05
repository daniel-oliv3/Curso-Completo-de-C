#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 76 – strchr
//str "string" chr "character"
//ele procura a primeira ocorrencia de um caracter em uma string.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[100]="skatemanaus.com.br o site do skate board manauara";
	char caracter='s';
	char *pos; //ponteiro vai pegar a posição aonde estar o u
	pos = strchr(texto,caracter);
	printf("%s\n\n",texto);
	while(pos!=NULL){  //enquanto a posição for diferente de NULL 
			printf("O caracter %c esta na posição: %d\n",caracter,pos-texto+1);
			pos=strchr(pos+1,caracter);
	}
	printf("\n");
	system("Pause");
	return 0;
}

