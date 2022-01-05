#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 20

/* aula 185 - calloc e detalhamento de malloc;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	int i, valor=1, *pt;
	//pt = (int*)malloc(sizeof(int)*TAM);  //alocação dinâmica
	//pt = (int*)calloc(sizeof(int),TAM);  //
	pt = (int*)calloc(TAM,sizeof(int));  //
	for(i=0; i<TAM; i++){
		pt[i] = valor;
		valor++;
	}
	
	if(!pt){  //se não conseguir alocação (não pt).
		printf("Memória Insuficiente!\a\n");
		exit(1);
	}
	
	for(i=0; i<TAM; i++){
		printf("%d ",pt[i]);
	}
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

