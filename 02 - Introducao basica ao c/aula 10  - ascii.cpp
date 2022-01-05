#include<stdio.h>
#include<stdlib.h>


int main()
{

printf("%c %c %c TABELA ASCII \xB0 \xB1 \xB2 \n\n\n\n",176,177,178);


printf("***** EM Decimal - %c %c %c %c %c %c *****\n\n\n",176,177,178,219,206,217);
printf("Ol%c !\n",160);
printf("At%c a Pr%cxima Aula _\\|/_\n\n\n",130,162);

printf("***** Em Hexadecimal - \xB0 \xB1 \xB2 *****\n\n\n");

printf("Ol\xA0 !\n",160);
printf("At\x82 a Pr\xA2xima Aula _\\|/_\n\n");

printf("");

system("pause");	
return 0;	
}
