#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 108 � return;*/

int menssagem(){ //FUN��O.
	printf("  Bem vindo ao Portalcplusplus.com.br\n");
	return 0;
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	menssagem(); // chamada a fun��o
	system("Pause");
	return 0;
}

/**/
