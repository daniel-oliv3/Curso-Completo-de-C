#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 89 – strcspn
//É o contrário da anterior, ou seja, retorna o tamanho máximo do segmento inicial na string 'dest' que consiste somente de elementos que NÃO ESTÃO na string 'src
//ele compara duas strings, e procura em uma delas

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto1[100]="portalcplusplus.com.br";
	char texto2[100]="am";
	int pos;
	pos=strcspn(texto1, texto2);//ele procura um caracter especifico texto2 para o texto1 e informa a posição. nesse exemplo: 5
	printf("Caracter encontrado na posição: %d\n",pos+1);
	system("Pause");
	return 0;
}

