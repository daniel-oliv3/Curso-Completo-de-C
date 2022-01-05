#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 55 – vetores-parte 2

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int vetor_de_numeros[100];
	int pos = 0;
	int total_de_numeros;
	do //faça
	{
		printf("Digite menos um para sair: (Digite -1 para sair)\n");
		scanf("%d",&vetor_de_numeros[pos]);
		pos++; // pos, posição vai ser encrementada;
	}while(vetor_de_numeros[pos-1] != -1 ); // enquanto, que (numero digitado for diferente de -1), volta e pede para digitar outro numero;
		total_de_numeros = pos-1;
		printf("Os números que você digitou foram: \n");
		for(pos=0; pos<total_de_numeros; pos++)
		{
			printf("%d ", vetor_de_numeros[pos]);
		}
	printf("\n");
	system("Pause");
	return 0;
}

