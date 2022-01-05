#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//aula 49 – while, char (parte 2)

int main()
{
	setlocale(LC_ALL, "portuguese");
	char caracter='\0'; // caracter = cacarter nulo
	while(caracter != 's')
	{
		scanf("%c", &caracter);
		printf("%c", caracter);
	}
	
	system("Pause");
	return 0;
}

