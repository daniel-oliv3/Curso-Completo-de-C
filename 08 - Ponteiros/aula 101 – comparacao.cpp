#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 101 � comparacao 
//essa aula n�o deu muito certo... erros no compilador tipo char,
// consegui comparando 2 int
// 1 verdadeiro 0 falso


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int *pt_num, num=10;
	int *pt_num2, num2=5;
	//char *pt_nome, nome[30]="Daniel";
	pt_num = &num;
	pt_num2 =&num2;
	//pt_nome = &nome;
	
	printf("Endere�o de num: [%d]\n",pt_num);	
	printf("Endere�o de num2: [%d]\n",pt_num2);
	printf("Endere�o de num: [%d] > num2: [%d] = [%d]\n",pt_num,pt_num2,(pt_num > pt_num2));
	printf("Endere�o de num: [%d] < num2: [%d] = [%d]\n",pt_num,pt_num2,(pt_num < pt_num2));
	printf("Endere�o de num: [%d] == num2: [%d] = [%d]\n",pt_num,pt_num2,(pt_num == pt_num2));
	printf("Endere�o de num: [%d] != num2: [%d] = [%d]\n",pt_num,pt_num2,(pt_num != pt_num2));
//	printf("Endere�o de nome: [%d]\n",pt_nome);	//nesse caso %d para o endere�o de memoria. "posi��o"
	//printf("Endere�o de nome: [%d] > num: [%d] = [%d]\n",pt_nome,pt_num,(pt_nome > pt_num));
	system("Pause");
	return 0;
}

