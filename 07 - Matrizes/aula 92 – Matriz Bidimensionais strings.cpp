#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 92 � Matriz Bidimensionais strings
//matriz de string

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[3][50]; //[quantidade de string][tamanho];
	int contador;
	for(contador=0; contador<3; contador++){ // for que vai percorrer a string, 
		printf("  Digite um nome: ");
		gets(nome[contador]); //ler (string na variavel nome[contador]); //especificar a posi��o[contador];
	}	
	printf("  Os nomes que foram digitados s�o\n");
	for(contador=0; contador<3; contador++){ //contador vai come�ar em 0, contador vai ate menor que 3, contador incrementa mais 1;
		printf("    %s\n",nome[contador]); // imprima(nome[posi��o]);
	}
	system("Pause");
	return 0;
}

