#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// aula 73 – memcpy 
// ele copia um bloco de memoria, de uma para outra

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto1[100], result[100],texto2[100]="Portalcplusplus.com.br";
	//printf("Digite um texto: \n");
	//gets(texto1);
	//memcpy(result, texto1, strlen(texto1)+1); //mencpy(destino, origem, strlen(texto1+1)tamanho
	memcpy(result, texto2, strlen(texto2)+1);
	printf("Result = %s\n",result);
	printf("\n\n");
	system("Pause");
	return 0;
}

//Copia os 'count' primeiros caracteres da string 'src' e coloca nas primeiras 'count' da string 'dest'.

// Como implementar a função memcpy()
//Primeiro recebemos do usuário duas strings: a 'orig', que é a string de origem, e a 'dest', que é a string de destino.
//Ou seja, vamos pegar os 'n' primeiros caracteres da string de origem, e colocar nas 'n' primeiras posições da string de destino.
//Como estamos passando strings (vetores), estamos passando seu endereço.
//Logo, essa função vai alterar a string de destino.
//Para fazer isso, basta fazer com que a string dest receba os 'n' primeiros caracteres (da posição 0 até a n-1) da string orig.
