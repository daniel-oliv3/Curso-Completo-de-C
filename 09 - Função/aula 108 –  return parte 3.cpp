#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 108 – return;*/

int quadrado(int numero){ // função "quadrado" parametro tipo (inteiro numero)
	
	return (numero*numero);
}

int se_for_par(int numero){
	if(numero%2){ // se: resto da divisão for igual a 1:  impar
		return 0;
	}else{ // caso contrario:
		return 1;  // resto da divisão e 0: par
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int resultado;
	printf("  Digite um número: ");
	scanf("%d",&resultado);
	if(se_for_par(resultado)){ // se(chamada a função(passagem de parametro))
		printf("  O número e par\n");
	}else{
		printf("  O número e impar\n");
	}
	printf("\n");
	system("Pause");
	return 0;
}

/* informa se o número digitado e par ou impar*/
/* printf("  %d\n",(10%2)); teste, mod, resto da divisão. 
   10%2 vai retornar 0, resto da divisão de 9%2 = 1;*/
