#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* sizeof()
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char *nome;
	nome = (char*)malloc(sizeof(char) * 100);
	strcpy(nome, "Skateboarder");
	printf("\nO texto e: %s\n",nome);
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

