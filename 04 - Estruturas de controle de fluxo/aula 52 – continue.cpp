#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 52 � continue;
// o continue ele tem a fun��o contraria do break, (o break, ele sai do loop interno para o loop mais esterno); 
// o continue ele tem a fun��o de voltar para o inicio do mesmo loop;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int numero;
	while(numero != 3) // enquanto(numero, for diferente != de tres 3) continue enquanto (...)
	{
		printf("Digite um n�mero entre 1 e 3:\n");
		scanf("%d",&numero);
		if((numero > 3) || (numero <1)) // se, numero for maior que 3 ou menor que 1...\n
		{
			system("cls"); // limpe a tela
			continue; // ele volta para o inicio do loop, n�o passa para o codigo de baixo
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

