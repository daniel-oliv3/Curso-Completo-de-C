#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//aula 50 – do while, menu (parte 2)

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i;
	do
	{
		system("cls"); // limpa a tela
		printf("\tEscolha uma Opção:\n");
		printf("\t(1) Inserir\n");
		printf("\t(2) Pesquisar\n");
		printf("\t(3) Deletar\n");
		scanf("%d",&i);
	}while((i<1)||(i>3));
	switch(i)
	{
		
		case 1:
			printf("\nVocê escolheu inserir\n");
			break;
		case 2:
			printf("\nVocê escolheu Pesquisar\n");
			break;
		case 3:
			printf("\nVocê escolheu Deletar\n");
			break;		
	}
	
	system("Pause");
	return 0;
}

