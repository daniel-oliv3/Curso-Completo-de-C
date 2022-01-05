#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// aula 72 – memcmp
// a função memcmp(), que recebe duas strings e compara seus 'n' primeiros elementos, de forma lexicográfica
//compara 2 blocos de memoria

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto1[256], texto2[256];
	int num;
	printf("Digite um texto: \n");
	gets(texto1);
	printf("Digite outro texto: \n");
	gets(texto2);
	num = memcmp(texto1, texto2,256);
	printf("num = %d\n",num); 
	if(num > 0) // se(num maior que 0)
		printf("Texto 1 > texto 2\n"); // imprima
	else if(num < 0)// caso contrario, se(num menor que 0)
		printf("Texto 1 < texto 2\n"); // imprima
	else // caso contrario
		printf("Texto 1 > texto 2\n"); // imprima
	system("Pause");
	return 0;
}



// Compara os 'count' primeiros caracteres das strings.
//Retorna negativo se os 'count' primeiros caracteres da primeira string forem menor que a segunda.
//Retorna positivo se os 'count' primeiros caracteres da primeira string forem maior que a segunda.
//Retorna 0 se os 'count' primeiros caracteres das duas strings são iguais.
