#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 94 – inicializacao sem tamanho 
//a inicialização sem especificação de tamanho, vetores, matrizes, sem especificação de tamanho.


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int matriz[][3]={1,5,89,76,4,67,8,45,2,33,54,78}; // o compilador ja sabe que e [4]linhas[3]colunas
	int linha, coluna;
	for(linha=0; linha<4; linha++){
		for(coluna=0; coluna<3; coluna++){
			printf("%d ",matriz[linha][coluna]);
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}

