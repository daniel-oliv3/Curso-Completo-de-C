#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 83 � strtok 
//A fun��o strtok(), presente no biblioteca string.h, pode ser usada quando precisamos quebrar uma string 
//C usando um delimitador e retornar suas partes. Veja sua assinatura:

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[]="portalcplusplus.com.br, o site  . do programador";
	char *pt;
	pt = strtok(texto," ."); //vai procurar na string o espa�o " "; vai pegar tudo o texto ates do primeiro espa�o
	printf("PT: = %s\n",pt);
	while(pt!=NULL){  //enquanto(pt diferente de NULO)
		printf("PT: = %s\n",pt);
		pt = strtok(NULL," ."); //n�o ira aparecer o . "ponto"
	}
	system("Pause");
	return 0;
}

