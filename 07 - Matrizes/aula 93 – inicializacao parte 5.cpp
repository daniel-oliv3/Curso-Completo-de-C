#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 93 – inicializacao
//vetores, matrizes...
//inicialização de string
// matriz bidimencional

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome3[3][100]={"Daniel","Oliveira","Souza"};
	int count, linha, coluna;
	for(count=0; count<3; count++){
		printf("%s\n",nome3[count]);
	}
	printf("\n");
	system("Pause");
	return 0;
}

