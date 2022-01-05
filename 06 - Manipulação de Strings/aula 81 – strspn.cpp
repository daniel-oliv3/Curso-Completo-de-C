#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 81 – strspn
//Retorna o tamanho máximo do primeiro segmento na string 'dest' que consiste de elementos da string 'src'.
// retorna o tamanho inicial contino na string 2 "texto2" testa cada caracter se ele tiver vai somando...

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto1[]="portalcplusplus.com.br";
	char texto2[]="ral123op";
	int pos;
	pos = strspn(texto1,texto2);
	printf("O tamanho inicial é: %d\n",pos);
	system("Pause");
	return 0;
}

