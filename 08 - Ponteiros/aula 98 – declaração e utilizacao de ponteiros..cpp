#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 98 � declara��o e utilizacao de ponteiros.
//Tipo_ponteiro *nome_variavel;
//int *pt;
//char *tempo, *pt2;
// E o asterisco (*) que faz o compilador saber que aquela variavel n�o vai guardar um valor mais sim um endere�o para aquele tipo especifico.
//- O ponteiro deve ser inicializado (apontando para algum lugar conhecido) antes de ser usado! isso e de suma import�ncia.
//- o ponteiro aponta para a variavel do tipo que foi especificado.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num=10;
	int *pt;
	pt = &num; // *pt vai apontar para o endere�o da variavel num;
	printf("%d \n",*pt); //para ver o conteudo de pt, (dentro do pt esta o conteudo da variavel num);
	system("Pause");
	return 0;
}

//para atribuir um valor a um ponteiro recem-criado poderiamos iguala-los a um valor de memoria, mais como saber a posi��o na memoria de uma variavel do nosso programa?
//seria muito dificil saber o endere�o de cada variavel que usamos, mesmo porque estes endere�oes s�o determinados pelo compilador na hora da compila��o e realocados na execu��o.
//podemos ent�o deixar que o compilador fa�a este trabalho por nos, para saber o endere�o de uma variavel bastar usar o operador &. ex;
//int count=10;
//int *pt;
//pt=&count;
//como nos colocamos um endere�o em pt, ele esta agora "liberado" para ser usado. podemos , por exemplo alterar o valor de count usando pt.
//uma observa��o importante: apesar do simbolo ser o mesmo o operador (multiplica��o) n�o e o mesmo operador que o *(referencia de ponteiros). para come�ar o primeiro e binario e o segundo e unario pre-fixado.
