#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 82 – strstr 
//Retorna um ponteiro que indica a primeira ocorrencia da string 'substr' na string 'str'.
//

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[]="Manaos Skate Shop A Loja do Skatista Manauara!";
	char *pesquisa;
	pesquisa = strstr(texto,"Loja"); // ele vai procurar a "Loja" na string texto;
	printf("Pesquisa: = %s\n",pesquisa);
	system("Pause");
	return 0;
}

