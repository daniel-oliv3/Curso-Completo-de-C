#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 74 – memmove
//"Mover um bloco de memoria" 
//nesse programa ele copia a string da variavel texto e move para a variavel result.
//memmove();
//

int main()
{
	setlocale(LC_ALL, "portuguese");
	char result[100], texto[100]="skatemanaus.com.br o site do skate board manauara";
	memmove(result,texto,100);  //mevor-bloco-de-memoria(destino, origem, tamanho)
	printf("Result = %s\n",result);
	printf("\n\n");
	system("Pause");
	return 0;
}

