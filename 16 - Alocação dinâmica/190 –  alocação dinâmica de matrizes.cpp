#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 190 -  aloca��o din�mica de matrizes.;*/


//prototipos das fun��es.
int **alocar_matriz(int linhas, int colunas);
int **liberar_matriz(int linhas, int colunas, int **matriz);

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	//declara��o de variaveis
	int **matriz, linhas, colunas, lin, col, cont=1;
	//
	printf("Digite a quantidade de linhas e colunas: ");
	scanf("%d %d",&linhas, &colunas);
	
	matriz = alocar_matriz(linhas, colunas);
	if(matriz==NULL){
		printf("Erro: Mem�ria Insuficiente!\a\n");
		exit(1);
	}
	
	//manipulando a matriz, atribuindo valores
	for(lin=0; lin<linhas; lin++){
		for(col=0; col<colunas; col++){
			matriz[lin][col] = cont;
			cont++;
		}
	}
	
	//imprimindo valores na tela
	printf("Imprimindo a Matriz[%d][%d]\n\n",lin,col);
	for(lin=0; lin<linhas; lin++){
		for(col=0; col<colunas; col++){
			printf("  Matriz[%d][%d] = %d",lin,col,matriz[lin][col]);
		}
		putchar('\n');
	}
	liberar_matriz(linhas, colunas, matriz);
	putchar('\n');
	system("Pause");
	return 0;
}

//Fun��es
int **alocar_matriz(int linhas, int colunas){
	int **mat, col, lin;
	if(linhas<1 || colunas<1){
		return NULL;
	}
	
	//aloca��o dinamica matriz linha
	mat = (int**)calloc(linhas,sizeof(int));  //nas linhas ** ponteiro para ponteiro
	if(mat==NULL){
		printf("Mem�ria Insuficiente!\n\a");
		exit(1);
	}
	
	//aloca��o dinamica matriz linha
	for(lin=0; lin<linhas; lin++){
		mat[lin] = (int*)calloc(colunas,sizeof(int)); //nas colunas * ponteiro
		if(mat[lin]==NULL){
		printf("Mem�ria Insuficiente!\n\a");
		exit(1);
		}
	}
	return mat;
}

int **liberar_matriz(int linhas, int colunas, int **matriz){
	int lin,**mat;
	if(linhas<1 || colunas<1){
		return NULL;
	}
	if(mat==NULL){
		printf("Mem�ria Insuficiente!\n\a");
		exit(1);
	}
	
	for(lin=0; lin<linhas; lin++)  //primeiro liberar as colunas depois as linhas
		free(matriz[lin]);
		
	free(matriz);
	return NULL;	
}

/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

