#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 53 � goto;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int numero;
	while(numero != 3) // enquanto(numero, for diferente != de tres 3) continue enquanto (...)
	{
		INICIO: // dois pontos para marcar o rotulo,  
		printf("Digite um n�mero entre 1 e 3:\n");
		scanf("%d",&numero);
		if((numero > 3) || (numero <1)) // se, numero for maior que 3 ou menor que 1...\n
		{
			system("cls"); // limpe a tela
			goto INICIO; // v� para, ROTULO; "inicio"
		}
		switch(numero) //caso (sele��o de casos do numero digitado);
		{
			case 1:
				printf("Voc� digitou o n�mero 1: \n");
				break;
			case 2:
				printf("Voc� digitou o n�mero 2: \n");
				break;
			case 3:
				printf("Voc� digitou o n�mero 3: \n");
				break;	
		}
	}
	
	
	system("Pause");
	return 0;
}

