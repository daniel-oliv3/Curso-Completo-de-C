#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//aula 50 � do while (do = fa�a)(while = enquanto)
// o do while, ele executa uma declara��o desta condi��o e se essa for verdadeira volta para a declara��o, a grande novidade nesse comando do while
// e que ele ao contrario do for e do, while garante que a declara��o sera execultada pelomenos uma vez.

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

