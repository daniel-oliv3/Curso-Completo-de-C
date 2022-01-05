#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 47 – for loop infinito
// não existindo a condição ela sera sempre verdadeira, a não ser que ele seja interrompido
// para interromper um loop como esse usamos o comando break:
// o comando break vai quebrar o loop infinito e o programa continuara sua execução normalmente

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

