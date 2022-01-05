#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 132 – sscanf  ;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2, num3;
	char str_num[]="5 6 9";
	sscanf(str_num,"%d %d %d",&num1,&num2,&num3);
	printf("Os valores lidos são: %d %d %d\n",num1,num2,num3);
	system("Pause");
	return 0;
}

/**/
