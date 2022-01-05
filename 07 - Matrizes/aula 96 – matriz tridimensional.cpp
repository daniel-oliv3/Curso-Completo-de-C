#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 96 – matriz tridimensional
//

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int linha, coluna, tabela;
	int matriz_tri[3][2][4]={ //[linhas][colunas][valores];"tabela".
		{{2,3,5,1},{4,1,2,8}},
		{{8,5,21,47},{85,21,45,65}},
		{{98,67,2,5,},{4,7,8,62}}
	};
	 for(linha=0; linha<3; linha++) // for para percorrer o vetor, matriz_tri[][][];
 		for(coluna=0; coluna<2; coluna++)
 			for(tabela=0; tabela<4; tabela++)
 				printf("O valor: [%d] [%d] [%d] = [%d]\n",linha,coluna,tabela,matriz_tri[linha][coluna][tabela]);

	
	
	system("Pause");
	return 0;
}

