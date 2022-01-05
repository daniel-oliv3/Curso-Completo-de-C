#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// aula 56 – string vetores parte 2;

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string_um[30], string_dois[30]="Daniel";
	int pos;
	for(pos=0; string_dois[pos]; pos++)
	{
		string_um[pos] = string_dois[pos];
	}
	string_um[pos] ='\0';
	printf("String um %s\n",string_um);
	printf("String dois %s\n",string_dois);
	printf("\n");
	system("Pause");
	return 0;
}

