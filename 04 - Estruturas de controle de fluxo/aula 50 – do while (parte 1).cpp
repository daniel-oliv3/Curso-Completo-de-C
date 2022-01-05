#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//aula 50 – do while (do = faça)(while = enquanto)
// o do while, ele executa uma declaração desta condição e se essa for verdadeira volta para a declaração, a grande novidade nesse comando do while
// e que ele ao contrario do for e do, while garante que a declaração sera execultada pelomenos uma vez.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i=0;
	do
	{
		printf("%d\n",i);
		i++;
	}while(i <= 50);
	printf("\n");
	
	system("Pause");
	return 0;
}

