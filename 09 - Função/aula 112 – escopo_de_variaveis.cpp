#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* aula 112 – escopo_de_variaveis;*/

int numero=10; // variavel global.

int teste(int numero){
	printf("Número dentro do parametro: %d\n",numero);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	printf("Número Global: %d\n",numero);
	teste(7); // chmando a função e passando o valor 7 por parametro
	int count, numero=5; // variavel local, "local a main()" variavel local tem preferencia
	printf("Antes do for: %d\n",numero);
	for(count=0; count<1; count++){
		int numero=2;
		printf("Dentro do for: %d\n",numero);
	}
	printf("Depois do for: %d\n",numero); // local a o main valor 5
	system("Pause");
	return 0;
}

/**/
