#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 118 – argc argv – parte 2;*/
//nome_do_programa 14 08 11
//saida: dia 14/08/2001



int main(int argc, char *argv[]){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	if(argc == 4){
		printf(" dia %s /%s/%s/2011\n",argv[2],argv[3]);
	}else{
		printf("Erro: ex.: 1º nome_do_programa 14 08 11\n");
	}
	
	system("Pause");
	return 0;
}

/**/
