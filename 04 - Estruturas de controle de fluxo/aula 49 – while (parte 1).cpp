#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 49 – while (enquanto)
// a estrutura while testa uma condição se esta for verdadeira a declaração e execultada, e faz o teste novamente e assim por diante.
// so para quando for falso

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i=0;
	while(i <= 50) // enquanto
	{
		printf("%d\n",i);
		i++;
	}
	printf("\n");
	system("Pause");
	return 0;
}

