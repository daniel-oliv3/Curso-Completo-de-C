#include<stdio.h> //header
#include<stdlib.h>
#include<locale.h>
#include"se_for_par.h" // criando um header

/* aula 111 � cabecalho ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int resultado;
	printf("  Digite um n�mero: ");
	scanf("%d",&resultado);
	if(se_for_par(resultado)){
		printf("  O n�mero � par\n");
	}else{
		printf("  O n�mero � impar\n");
	}
	
	system("Pause");
	return 0;
}

/**/
