#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 64 – isprint
// Verifica se o caracter é imprimível.


int main()
{
	setlocale(LC_ALL, "portuguese");
	FILE *arquivo; //criar arquivo
	char c;
	arquivo = fopen("arquivo.txt","r"); //arquivo, aberto, para leitura r,
	if(!arquivo) // se não conseguir abrir o arquivo pra leitura. \n
		exit(1); // sai
	
	while(!feof(arquivo)) // enquanto(não chegar no fim do arquivo
	{
		c = getc(arquivo); // c vai pegar o arquivo, cada caracter
		if(isprint(c)) //
			putc(c,stdout); // imprimir na tela, na saida padrão
	}
	
	printf("\n\n");
	fclose(arquivo); // se conseguir fecha o arquivo
	system("Pause");
	return 0;
}
