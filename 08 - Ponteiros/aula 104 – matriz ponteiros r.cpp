#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//aula 104 – matriz ponteiros
//aula 104 programa não escreveu os resultados.
//

int main()
{
	setlocale(LC_ALL, "portuguese");
	int matriz[3][5]; //matriz bidimencional [linha][colun];
	int linha, coluna, count=1;
	int *pt;
	pt = matriz[0];
	for(linha=0; linha<3; coluna++){
		for(coluna=0; coluna<5; coluna++){ //
			*pt = count; //
			count++; //
			//pt++ 			
		}
	}
  //for(linha=0; linha<3; coluna++){
//		for(coluna=0; coluna<5; coluna++){ //
//			matriz[linha][coluna]=count; //
//			count++; //
//		}
//	}

	for(linha=0; linha<3; coluna++){
		for(coluna=0; coluna<5; coluna++){ //
			printf("%d ",matriz[linha][coluna]);
		}
		printf("\n");
	}	
	printf("\n");
	system("Pause");
	return 0;
}

