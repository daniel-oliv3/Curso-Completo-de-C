#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 113 � passagem � ;*/

int mais_tres(int numero); //prototipo da fun��o.

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero, mais;
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	mais=mais_tres(numero); //mais, = vai receber o retorno da fun��o + 3
	printf("O valor original de n�mero �: %d\n",numero);
	printf("O mais tr�s �: %d\n",mais);
	system("Pause");
	return 0;
}

int mais_tres(int numero){ //FUN��O.
	numero=numero+3;
	return numero;
}

/**/
