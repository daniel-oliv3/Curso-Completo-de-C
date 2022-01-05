#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 71 – memchr 
//ele vai procurar a posicão do caracter no bloco de memoria.
int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[100] = "Portalcplusplus.com.br o site do programador";
	char caracter = 'a'; 
	char *pos; // *ponteiro do tipo char, chamado pos
	pos = (char*)memchr(texto,caracter,strlen(texto)); // 1* parametro, voce passa o texto aonde vc quer fazer a procura;
	printf("pos = %d\n",pos);
	printf("texto = %d\n",texto);
	printf("%d - %d + 1 = %d\n",pos,texto,pos-texto+1);
	if(pos!=NULL)
		printf("O caracter %c esta na posição %d\n",caracter,pos-texto+1);					// 2* parametro, voce passa o caracter que voce quer procurar;
	printf("\n");	
	system("Pause");
	return 0;
}

// bloco de memoria
// 10485184 10485185 10485186 10485187 10485188
//    p       o         r       t        a

// strlen, Essa função recebe um ponteiro que indica uma string e retorna quantos caracteres essa string possui.
