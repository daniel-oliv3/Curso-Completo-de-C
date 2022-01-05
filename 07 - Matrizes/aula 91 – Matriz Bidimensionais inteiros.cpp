#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 91 – Matriz Bidimensionais inteiros
//matriz_int[]; unidimensional 1 dimensao
//matriz_int[][]; bidimensional 2 dimensao
//matriz_int[][][][]; multdimensional
//criar linha e colunas,
//1 2 3 4 5 6 7
//8 9 10 11 12 13 14
//15 16 17 18 19 20 21
//22 23 24 25 26 27 28
//29 30 31 32 33 34 35
//exemplo bidimensional


int main()
{
	setlocale(LC_ALL, "portuguese");
	int matriz_int[5][7]; //especificar, [linhas][colunas]; //tamanho
	int linha, coluna, valor=1; //variavel que vai percorrer as linhas e as colunas
	for(linha=0;linha<5;linha++){ // este for() vai percorrer as linhas.
		for(coluna=0;coluna<7;coluna++){  // este for() vai percorrer as colunas. //primeiro elemento da matriz e o 0, percorrer desdo 0 ate < 7 "6"
			matriz_int[linha][coluna]=valor; //atribuir as matrizes o valor [linha] [coluna] = receber valor
			valor++; //incremento // depois que atender toda as condiçoes do for(coluna). ele pasara para o for(linha); 0 a 7;
		}
	}
	for(linha=0;linha<5;linha++){
	for(coluna=0;coluna<7;coluna++){
		printf("%d ",matriz_int[linha][coluna]);	//imprimir linhas e colunas.		
		valor++;
		}
		printf("\n");	
	}
	system("Pause");
	return 0;
}


/* 0 1 2 3 4 5 6 
 1 1
 1 2 3 4 5 6 7 ok 
-> valo++; //incremento
*/
