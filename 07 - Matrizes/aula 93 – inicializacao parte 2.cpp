#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 93 – inicializacao
//vetores, matrizes...
//inteiro bi dimensional
//

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num[5]={5,2,3,6,1}; //num[ate 5 elementos]=[elementos,,,,}; //inicializando elementos do vetor.
	int num_matriz[3][4]={2,3,8,9,12,8,10,11,22,33,41,78}; // tres linhas com 4 elementos, 3x4=12, 12 elementos
	int count, linha, coluna;
	for(linha=0; linha<3; linha++){ // vai percorrer todos os elementos de num[5,2,3,6,1];
		for(coluna=0; coluna<4; coluna++){
			printf("%d ",num_matriz[linha][coluna]); 
		}
		printf("\n");
	}
	printf("\n");
	system("Pause");
	return 0;
}

