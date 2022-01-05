#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//#include<string.h>

//aula 95 – matriz multidimensionais 

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int matriz_int[5][7][3][6]; // quanto mais a direita mais ele vareia, 5x7x3x5=630;
	int linha, coluna, linha2, coluna2, valor=1;
	for(linha=0; linha<5; linha++){
		for(coluna=0; coluna<7; coluna++){
			for(linha2=0; linha2<3;linha2++){
				for(coluna2=0; coluna2<6; coluna2++){
					matriz_int[linha][coluna][linha2][coluna2]=valor;
					valor++;
				}
			}
		}
	} //IMPRESSÃO NA TELA.
	for(linha=0; linha<5; linha++){
		for(coluna=0; coluna<7; coluna++){
			for(linha2=0; linha2<3; linha2++){
				for(coluna2=0; coluna2<6; coluna2++){
					printf("%d ",matriz_int[linha][coluna][linha2][coluna2]);
				}
				printf("\n");
			}
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}
	
/**/	
