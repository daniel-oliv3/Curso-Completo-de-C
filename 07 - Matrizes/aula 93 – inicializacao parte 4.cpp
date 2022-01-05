#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 93 – inicializacao
//vetores, matrizes...
//inicialização de string
//

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome2[30]={'D','a','n','i','e','l'};
	int count, linha, coluna;
	for(count=0; count<30; count++){
		printf("%c",nome2[count]);
	}
	printf("\n");
	system("Pause");
	return 0;
}

