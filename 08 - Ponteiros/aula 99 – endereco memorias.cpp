#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 99 – endereco memorias
//o ponteiro aponta para o endereço de memoria.

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero=10;
	int *pt;
	pt = &numero; //pt esta apontando para o endereço de memoria da variavel numero.
	printf("Hexadecimal: %p\n", pt); //%p para ponteiro, para imprimir o endereço de memoria do numero, mais coloca o pt.
	printf("Decimal: %d\n", pt);
	system("Pause");
	return 0;
}
// %d para decimal
// %p para hexadecimal
