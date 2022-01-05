#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 114 – igualar enderecos ;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int *pt1, *pt2, numero=10;
	pt1 = &numero;
	pt2 = pt1; // igualando o endereço de memoria, 
	//*pt2 = 6;
	numero=7;
	printf("Número = %d\n",numero);
	printf("PT1 = %d\n",*pt1);
	printf("PT2 = %d\n",*pt2);
	system("Pause");
	return 0;
}

/*12- pt2 vai receber o que esta apontando pt1*/
/*  OBS: se você alterar o conteudo de qualquer um dos ponteiros, 
ou da variavel, você altera todo mundo ao mesmo tempo (nesse caso)*/
