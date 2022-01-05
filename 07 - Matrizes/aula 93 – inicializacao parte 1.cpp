#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 93 – inicializacao
//vetores, matrizes...
//tipo inteiro;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num[5]={5,2,3,6,1}; //num[ate 5 elementos]=[elementos,,,,}; //inicializando elementos do vetor.
	int count;
	for(count=0; count<5; count++){ // vai percorrer todos os elementos de num[5,2,3,6,1];
		printf("%d ",num[count]);
	}
	printf("\n");
	system("Pause");
	return 0;
}

