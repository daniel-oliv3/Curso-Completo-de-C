#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 50

/*188 � aloca��o din�mica de vetores � parte 1 ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	char *nome;
	
	nome = (char*)malloc(TAM*sizeof(char));  //alocando memoria dinamicamente para o vetor de ponteiros
	
	if(nome==NULL){
		printf("Mem�ria Insuficiente!\a\n");
		exit(1);
	}
	
	printf("Digite o seu nome: ");
	fgets(nome,TAM,stdin);
	putchar('\n');
	printf("\tSeu nome �: %s\n\n",nome);  
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

