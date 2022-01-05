#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*aula 117 – argc argv – parte 1 ;*/

int main(int argc, char *argv[]){ //argumentos
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	if(argc == 3)
		printf("Primeiro %s segundo %s terceiro %s\n",argv[0],argv[1],argv[2]);
	else
		printf("Erro! Ex: Nome_Programa, Segundo_arg, Terceiro_arg\n");
	//system("Pause");
	return 0;
}

/*
  argumento count "quantidade de argumentos."
  argumento value "valor do argumento."
*/
/*argc demostra a quantidade de argumentos passados pelo argv*/
