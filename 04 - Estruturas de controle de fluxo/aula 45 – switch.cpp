#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 45 � switch
// o comando if e else, e o comando switch s�o 2 comando de tomada de deciz�o, o mais importante e o if, mais o comando switch tem aplica��es valiosas.
// o comando switch e proprio para se testar uma variavel em rela��o a diversos valores estabelecidos.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Digite um n�mero equivalente ao dia da semana (entre 1 e 7)\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("Hoje e domingo\n");
			break;
		case 2:
			printf("Hoje e segunda\n");
			break;
		case 3:
			printf("Hoje e ter�a\n");
			break;	
		case 4:
			printf("Hoje e quarta\n");
			break;
		case 5:
			printf("Hoje e quinta\n");
			break;
		case 6:
			printf("Hoje e sexta\n");
			break;
		case 7:
			printf("Hoje e sabado\n");
			break;		
		default:
			printf("O n�mero tem que estar entre 1 e 7\n");
			
	}
	
	
	system("Pause");
	return 0;
}

