#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 116 � ponteiros argumentos;*/

void atribuir(int vetor[], int tamanho); //prototipo da fun��o atribuir
void mostrar(int vetor[], int tamanho);  //prototipo da fun��o mostrar

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	int vet[3], tamanho=3;
	atribuir(&vet[0], tamanho); //chamada a fun��o atribuir
	mostrar(&vet[0], tamanho);  //chamada a fun��o mostrar
	system("Pause");
	return 0;
}

void atribuir(int *pt, int tamanho){ //passando *ponteiro como argumento da fun��o. 
	int i;
	for(i=0; i<tamanho; i++){
		pt[i]=i+1;
	}
}

void mostrar(int *pt, int tamanho){
	int i;
	for(i=0; i<tamanho; i++){
		printf("A posi��o %d� = %d\n",i,pt[i]);
	}
}

/**/
