#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 110 – void ;*/

/*void = vazio. */

void mensagem();  // prototipo da função.

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	mensagem(); //chamando a função
	
	system("Pause");
	//e nessesario tirar o return 0;
}

void mensagem(){
	printf("  Bem vindo ao Portalcplusplus.com.br\n");
}

/*outro exemplo: void mensagem(void);*/
