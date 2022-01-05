#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	printf("\tDaniel Oliveira \n"); // o "\t" pula 8 espaço na mesma linha, o "\n" passa para a linha de baixo "quebra de linha'.
	printf("\a\a\a"); // o "\a" da um bipe,
	printf("\"Entre Aspas Duplas\" \n"); // o \"...\" exibe o nome entre aspas duplas
	printf("\'Entre Aspas Simples ou Ap%cstrofo\' \n",162); // o \'...\' exibe o nome entre apóstrofo ou barra simples.
	printf("\\Barras\\\n"); // o \\...\\ exibe o nome entre barras 
	printf("\x80 \n"); // o \x80 exibe na tela o caractere ç da tabela ascii "hexi decimal"
	
system("pause");
return 0;	
}
