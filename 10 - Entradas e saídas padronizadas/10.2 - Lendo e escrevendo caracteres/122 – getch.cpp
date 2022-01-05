#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

/* 122 – getch 
ANSI = American National Standerd Institute
;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char caracter;
	printf("Digite um caracter: ");
	caracter = getch(); // getch e igual o scanf, congela a tela ate o caracter ser digitado
	printf("\nO caracter digitado foi: %c\n",caracter);
	system("Pause");
	return 0;
}

/**/
