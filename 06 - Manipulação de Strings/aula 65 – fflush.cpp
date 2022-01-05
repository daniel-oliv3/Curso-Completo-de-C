#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 65 � fflush
// limpar o buff da memoria

void quadrado();
void cubo();

int main()
{
	setlocale(LC_ALL, "portuguese");
	char q;
	
	do
	{
		printf("\n\nOp��es\n");
		printf("Q-> quadrado\n");
		printf("C-> cubo\n");
		printf("S-> para sair\n");
		scanf("%c",&q);
		
		switch(q) // sele��o de casos.
		{
			case 'Q': case 'q': quadrado(); break;
			case 'C': case 'c': cubo(); break;
			case 'S': case 's': break;
			default: printf("Op��o invalida\n");
		}
		fflush(stdin);
	}while((q != 'S' ) && (q != 's'));
	
	
	system("Pause");
	return 0;
}

void quadrado()
{
	int num;
	printf("Digite um n�mero: \n");
	scanf("%d",&num);
	printf("O quadrado de %d �: %d\n ",num,(num*num));
}
void cubo()
{
	int num;
	printf("Digite um n�mero: \n");
	scanf("%d",&num);
	printf("O cubo de %d �: %d\n ",num,(num*num*num));
}
