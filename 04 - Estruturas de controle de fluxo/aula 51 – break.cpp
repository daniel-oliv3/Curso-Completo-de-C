#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//aula 51 – break
// o break ele tem a função de interromper a execução de qualquer loop, 
// o break faz com que a execução do programa continue na primeira linha seguinte ao loop ou bloco que esta sendo interrompido
int main()
{
	setlocale(LC_ALL, "portuguese");
	int i, cont;
	for(i = 1; i<=50; i++)
	{
		cont = 1;
		for( ; ; )
		{
			printf("%d",cont);
			if(cont == 5)
			{
				printf("\n");
				break;
			}
			cont++;
		}
	}
	
	
	system("Pause");
	return 0;
}

