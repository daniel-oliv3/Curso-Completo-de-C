//NUMERO DE DIAS POR ANO

#include<stdio.h> //entrada e saida de dados
#include<stdlib.h> //biblioteca padrão

int main() 
{
	int dias;
	float anos;
	
	printf("Entre Com o N%cmero de Dias: ",163);
	scanf("%d",&dias);
	
	anos = dias/365.25;
	printf("%d Dias Equivale a %f Anos\n",dias,anos);
	
	
	system("pause");
	return 0;
}
