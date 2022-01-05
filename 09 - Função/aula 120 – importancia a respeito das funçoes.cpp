#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 120 – importancia a respeito das funçoes;*/

//int numero=10; // variavel GLOBAL

/*void mensagem(){ //Função. sem prototipo.
	printf("Bem Vindo!\n");
}*/

void mensagem(); //prototipo da função

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero=10; // variavel LOCAL
	printf("O número = %d\n",numero);
	mensagem();
	system("Pause");
	return 0;
}

/*uma chamada a função consome tempo e memoria.*/

void mensagem(){ //Função. 
	printf("Bem Vindo!\n");
}
