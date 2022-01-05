#include<stdio.h>
#include<stdlib.h>

// Daniel
// D->0, a->1, n->2, i->3, e->4, l->5.


int main()
{
	char nome[50];
	
	printf("Digite Seu Nome: \n");
	scanf("%s", &nome);
	
	printf("......................................\n");
	printf("Seu Nome %c: %s\n",130,nome);
	printf("......................................\n\n");
	printf("A Primeira Letra %c: %c \n",130,nome[0]);
	printf("A Segunda Letra %c: %c\n",130,nome[1]); // index, nome[1], para acessar a segunda letra do nome "Daniel" segunda letra. = a.
	printf("A Terceira Letra %c: %c \n",130,nome[2]);
	printf("A Quarta Letra %c: %c \n",130,nome[3]);
	printf("A Quinta Letra %c: %c \n",130,nome[4]);
	printf("A Sexta Letra %c: %c \n\n",130,nome[5]);
	printf("......................................\n");
	
	nome[5] = 'u';
	
	printf("A Sexta Letra Agora %c: %c\n",130,nome[5]);
	printf("......................................\n");
	printf("A String Resultante %c: %s\n",130,nome);
	printf("......................................\n\n");
	
system("pause");
return 0;	
}
