#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 85 – strncmp e strcmp 
//Faz a  mesma comparação da strcmp, mas ao invés de comparar toda a string, compara somente os 'count' primeiros caracteres
//procura a quantidade de carac que quiser.
int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto1[100]="porta#lcplusplus.com.br";
	//char texto2[100]="o site do programador";
	char texto2[100]="portalcplusplus.com.br";
	if(strncmp(texto1, texto2,6)) // quantidade "5" são iguais
		printf("Não encontrou!\n"); // os dois não são iguais.
	else
		printf("Encontrou!\n");	 // os dois são iguais.
	printf("\n");
	system("Pause");
	return 0;
}

