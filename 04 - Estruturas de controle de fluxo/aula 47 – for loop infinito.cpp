#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 47 � for loop infinito
// n�o existindo a condi��o ela sera sempre verdadeira, a n�o ser que ele seja interrompido
// para interromper um loop como esse usamos o comando break:
// o comando break vai quebrar o loop infinito e o programa continuara sua execu��o normalmente

int main()
{
	setlocale(LC_ALL, "portuguese");
	int cont;
	char c;
	printf("Digite um caracter: (Digite <q> para sair)\n");
	for(cont=1; ;cont++)
	{
		scanf("%c",&c);
		if(c=='q') break;
		printf("Caracter digitado = %c\n",c);
		scanf("%c",&c);
	}
	
	
	system("Pause");
	return 0;
}

