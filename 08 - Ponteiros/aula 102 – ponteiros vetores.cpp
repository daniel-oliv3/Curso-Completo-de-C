#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 102 – ponteiros vetores 
//

int main()
{
	setlocale(LC_ALL, "portuguese");
	int vetor[6]={6,5,4,3,2,1}; //elementos, valores atribuidos
	int *pt;
	pt = &vetor[0]; // ponteiro esta apontando para nome vetor do tipo inteiro da posição 0
	printf("O valor da segunda posição é: [%d]\n",pt[2]); //pega na memoria da variavel declarada e inicializada do tipo inteiro vetor o elemento 4,. &01234
	system("Pause");
	return 0;
}

