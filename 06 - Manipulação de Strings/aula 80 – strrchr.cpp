#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 80 – strrchr
//ele porcura a ultima ocorrencia do caracter em uma string,
// ele procura a occorencia de um determinado caracter

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[]="portalcplusplus.com.br";
	char *pos;
	pos=strrchr(texto,'t');
	printf("A ultima ocorrencia esta na posição: %d\n",pos-texto+1);
	system("Pause");
	return 0;
}

