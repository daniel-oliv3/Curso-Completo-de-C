#include<stdlib.h>
#include<stdio.h>


int mult(int x, int y, int z)
{
	printf("O Multiplica%c%co %c: %d \n",135,132,130,(x*y*z));
return 0;	
}

int main()
{
	
	int num, num2, num3;
	
	printf("Entre Com Tr%cs N%cmeros: \n",136,163);
	scanf("%d %d %d", &num, &num2, &num3);
	
	mult(num,num2,num3);
	
system("pause");
return 0;	
}
