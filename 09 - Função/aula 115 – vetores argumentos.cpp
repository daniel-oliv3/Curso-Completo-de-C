#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 115 � vetores argumentos;*/

void atribui(int vetor[], int tamanho); //prototipo da fun��o atribuir
void mostrar(int vetor[], int tamanho); //prototipo da fun��o mostrar

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int tam=3, vet[3]; // vetor de inteiros de 3 posi�oes
	atribui(vet, tam); //chamando a fun��o
	mostrar(vet, tam); //chamando a fun��o
	system("Pause");
	return 0;
}

void atribui(int vetor[], int tamanho){ //FUN��O. atribuir valores ao vetor
	int i;
	for(i=0; i<tamanho; i++){
		vetor[i] = i+1;
	}
}

void mostrar(int vetor[], int tamanho){ //FUN��O. imprime na tela.
	int i;
	for(i=0; i<tamanho; i++){
		printf("A posi��o %d = %d\n",i,vetor[i]);
	}
}

/**/
