#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 127 – puts 
putchar = colocar um caracter na tela
puts = colocar um string na tela
;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[100];
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("Seu nome é: ");
	puts(nome);
	printf("\n");
	system("Pause");
	return 0;
}

/**/
