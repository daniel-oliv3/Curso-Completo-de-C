#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 5

/*malloc ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	int i, valor=1, *pt;
	
	pt = (int*)malloc(sizeof(int) * TAM);  //alocação dinamica de memoria malloc.
	
	//preenchendo o pt(ponteiro vetor)
	for(i=0; i<TAM; i++){
		pt[i] = valor;
		valor++;
	}
	//imprimindo na tela
	for(i=0; i<TAM; i++){
		printf(" %d ",pt[i]);
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

