#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 85 � strncmp e strcmp 
//Faz a  mesma compara��o da strcmp, mas ao inv�s de comparar toda a string, compara somente os 'count' primeiros caracteres
//procura a quantidade de carac que quiser.
int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto1[100]="porta#lcplusplus.com.br";
	//char texto2[100]="o site do programador";
	char texto2[100]="portalcplusplus.com.br";
	if(strncmp(texto1, texto2,6)) // quantidade "5" s�o iguais
		printf("N�o encontrou!\n"); // os dois n�o s�o iguais.
	else
		printf("Encontrou!\n");	 // os dois s�o iguais.
	printf("\n");
	system("Pause");
	return 0;
}

