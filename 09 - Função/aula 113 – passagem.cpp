#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 113 – passagem – ;*/

int mais_tres(int numero); //prototipo da função.

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero, mais;
	printf("Digite um número: ");
	scanf("%d",&numero);
	mais=mais_tres(numero); //mais, = vai receber o retorno da função + 3
	printf("O valor original de número é: %d\n",numero);
	printf("O mais três é: %d\n",mais);
	system("Pause");
	return 0;
}

int mais_tres(int numero){ //FUNÇÃO.
	numero=numero+3;
	return numero;
}

/**/
