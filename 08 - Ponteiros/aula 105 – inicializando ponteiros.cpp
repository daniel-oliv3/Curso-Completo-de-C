#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 105 – inicializando ponteiros
//quando voce for utilizar uma string varias vezes, voce pode inicializalas com ponteiros.
//string constante, toda string que o pragamador inseri no programa e colocado num banco de string que o compilador cria, 
//no local aonde estar uma string no programa o compilador coloca o endereço no inicio daquela string que esta no banco de string.
// devemos apenas tomar cuidado ao usar esse ponteiro se alteramos poderemos perder a string.
// se uzarmos para alterar a string podemos facimente corromper banco de string que o compilador criou. #prof: Roberto Carlos Neves.

int main()
{
	setlocale(LC_ALL, "portuguese");
	//char nome[30]="Daniel";
	char *nome="Daniel"; //inicialização do ponteiro *nome="Daniel";
	printf("%s\n",nome);
	system("Pause");
	return 0;
}

