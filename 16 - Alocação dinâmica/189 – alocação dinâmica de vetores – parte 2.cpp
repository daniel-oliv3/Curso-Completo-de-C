#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 50

/*189 – alocação dinâmica de vetores – parte 2 
alocação dinamica usando funções
;*/

char *alocar_memoria(int tamanho);

int *libera_memoria(char *vetor);



int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	char *nome;
	
	nome = alocar_memoria(TAM);
	
	if(nome==NULL){
		printf("Memória Insuficiente!\a\n");
		exit(1);
	}
	
	printf("Digite o seu nome: ");
	fgets(nome,TAM,stdin);
	putchar('\n');
	printf("\tSeu nome é: %s\n\n",nome);  
	libera_memoria(nome);
	system("Pause");
	return 0;
}

//função para alocar memoria
char *alocar_memoria(int tamanho){
	char *vetor;
	if(tamanho<1){
		printf("O tamanho não pode ser menor que um [1]\a\n");
		return NULL;
	}
	vetor = (char*)malloc(TAM*sizeof(char));
	/*if(nome==NULL){
		printf("Memória Insuficiente!\a\n");
		exit(1);
	}*/
	return vetor;
}

//função para liberar memoria 
char *libera_memoria(char *vetor){
	if(nome==NULL){
		printf("Memória Insuficiente!\a\n");
		exit(1);
	}
	free(nome);
	return NULL;
}

/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

