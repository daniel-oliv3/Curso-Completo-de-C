#include<stdio.h> //header
#include<stdlib.h>
#include<locale.h>
#include"se_for_par.h" // criando um header

/* aula 111 – cabecalho ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int resultado;
	printf("  Digite um número: ");
	scanf("%d",&resultado);
	if(se_for_par(resultado)){
		printf("  O número é par\n");
	}else{
		printf("  O número é impar\n");
	}
	
	system("Pause");
	return 0;
}

/**/
