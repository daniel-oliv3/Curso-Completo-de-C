#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 78 � strcat
//ele concatena uma string, a string de origem permanecer� inalterada, e sera anexada ao fim da string de destino. 

int main()
{
	setlocale(LC_ALL, "portuguese");
	char str1[30], str2[30];
	printf("Digite seu nome: \n");
	gets(str1);
	strcpy(str2, "Seu Nome �: "); //Como copiar uma string em outra
	strcat(str2, str1); // vai concatena a string str1 ao final da string str2
	printf("%s\n",str2);
	system("Pause");
	return 0;
}

//Fornecemos a string de origem e ela � copiada e armazenada na string de destino, n�o importando como era a string de destino anteriormente.
