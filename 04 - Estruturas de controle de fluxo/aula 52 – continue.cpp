#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 52 – continue;
// o continue ele tem a função contraria do break, (o break, ele sai do loop interno para o loop mais esterno); 
// o continue ele tem a função de voltar para o inicio do mesmo loop;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int numero;
	while(numero != 3) // enquanto(numero, for diferente != de tres 3) continue enquanto (...)
	{
		printf("Digite um número entre 1 e 3:\n");
		scanf("%d",&numero);
		if((numero > 3) || (numero <1)) // se, numero for maior que 3 ou menor que 1...\n
		{
			system("cls"); // limpe a tela
			continue; // ele volta para o inicio do loop, não passa para o codigo de baixo
		}
		switch(numero) //caso (seleção de casos do numero digitado);
		{
			case 1:
				printf("Você digitou o número 1: \n");
				break;
			case 2:
				printf("Você digitou o número 2: \n");
				break;
			case 3:
				printf("Você digitou o número 3: \n");
				break;	
		}
	}
	
	
	system("Pause");
	return 0;
}

