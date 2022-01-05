#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 131 – sprintf 
string impresao formatada
;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num;
	char valor[30];
	printf("Digite um número inteiro: ");
	scanf("%d",&num);
	sprintf(valor,"O valor de num = %d",num);
	puts(valor);
	printf("\n");
	system("Pause");
	return 0;
}

/**/
