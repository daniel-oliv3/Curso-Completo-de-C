#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

/* 187 � realloc e diretivas;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	int i, valor=1, *pt;
	pt = (int*)calloc(TAM,sizeof(int));  //aloca��o dinamica
	for(i=0; i<TAM; i++){
		pt[i] = valor;
		valor++;
	}
	
	if(!pt){  //se n�o conseguir aloca��o (n�o pt).
		printf("Mem�ria Insuficiente!\a\n");
		exit(1);
	}
	
	for(i=0; i<TAM; i++){
		printf("%d ",pt[i]);
	}
	
	putchar('\n');  // quebra de linha
	
	#if(TAM==10)  //se(tam for igual a 10)
		#undef TAM  //tira a defini��o(apaga ele)
		#define TAM 25  //definindo tam
	#endif  //	
	
	//valor=1;  //para fazer com que o valor inicie de 1. (n�o seja mais encrementado.) 
	pt = (int*)realloc(pt,TAM*sizeof(int));  //realoca��o de memoria.
	for(i=0; i<TAM; i++){
		pt[i] = valor;
		valor++;
	}
	
	if(!pt){  //se n�o conseguir aloca��o (n�o pt).
		printf("Mem�ria Insuficiente!\a\n");
		exit(1);
	}
	
	for(i=0; i<TAM; i++){
		printf("%d ",pt[i]);
	}
	
	free(pt);
	putchar('\n');
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

