#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 130 – scanf;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2;
	printf("Digite dois números: ");
	scanf("%d %d",&num1, &num2);
	printf("Você digitou os números %d e %d\n",num1,num2);
	system("Pause");
	return 0;
}

/**/
