#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 100 � alteracao conteudo
//

int main()
{
	setlocale(LC_ALL, "portuguese");
	int numero=10;
	int *pt;
	pt = &numero; // <- indica que pt esta apontando para o endere�o de memoria &numero.
	*pt = 15; // "alterando o conteudo do ponteiro" atribuindo 15 ao ponteiro (acessar um conteudo)
	printf("%p\n",pt);  //endere�o
	printf("%d\n",*pt);  // conteudo
	printf("%d\n",numero); // vai mostrar 15, alterado indiretamente pelo ponteiro.
	system("Pause");
	return 0;
}
//para acessar o endere�o da variavel: printf("%p ",pt);
//para acessar o conteudo da variavel: printf("%d ",*pt);
