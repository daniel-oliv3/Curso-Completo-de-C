#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 120 � importancia a respeito das fun�oes;*/

//int numero=10; // variavel GLOBAL

/*void mensagem(){ //Fun��o. sem prototipo.
	printf("Bem Vindo!\n");
}*/

void mensagem(); //prototipo da fun��o

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero=10; // variavel LOCAL
	printf("O n�mero = %d\n",numero);
	mensagem();
	system("Pause");
	return 0;
}

/*uma chamada a fun��o consome tempo e memoria.*/

void mensagem(){ //Fun��o. 
	printf("Bem Vindo!\n");
}
