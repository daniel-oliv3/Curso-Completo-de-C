#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 119 � recursividade FATORIAL;*/

int fatorial(int numero); //Prototipo da fun��o.

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	printf("Fatorial (%d) = %d\n",numero,fatorial(numero));
	system("Pause");
	return 0;
}

int fatorial(int numero){  //FUN��O. fatorial
	if(numero) //se (tem numero, numero diferente de 0)fa�a
		return numero*fatorial(numero-1); //recursividade
	else  // caso-contrario
		return 1;
}

/**/
