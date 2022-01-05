#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 87 – strcpy
//Copia a string 'src' para a string 'dest', e retorna um ponteiro para 'dest'.
//ela tem a função de copiar o valor que ta na origem para o destino.
//strcpy(destino, origem);

int main()
{
	setlocale(LC_ALL, "portuguese");
	char str_um[100], str_dois[30], str_tres[30];
	printf("Digite seu nome: \n");
	gets(str_um);
	strcpy(str_dois, str_um); //copiar o que esta no str1 para o str2
	strcpy(str_tres, "Seu nome é:"); //copiou a string "Seu nome é:" para a variavel str_tres;
	printf("\n%s %s\n",str_tres,str_dois);
	system("Pause");
	return 0;
}

