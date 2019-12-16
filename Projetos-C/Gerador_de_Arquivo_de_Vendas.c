/*
Gera arquivo vendas.txt
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct TProdutos{
	int Cod;
	char c;
	float Est, Preco, Luc;
};


int main() {
	FILE *Arq;
	int leCod;
	char lec;
	float leEst,lePreco, leLuc;
	int l = 0;
		
	float QtdVendida, PrecoVenda, x;
	int m , a, QtdVendasDia, NDiasMes, Cod;
	int Qtd, i, j, b, ix;
	
	struct TProdutos *A;

	Arq = fopen("PRODUTOS.txt", "r");
	A = NULL;
	//leitura dos valores de PRODUTOS.txt
    while (fscanf(Arq, "%d;%c;%f;%f;%f;\n", &leCod, &lec, &leEst, &lePreco, &leLuc) != EOF) {
    l++;
    A = (struct TProdutos *)realloc(A, sizeof(struct TProdutos) * l);
    A[l-1].Cod = leCod;
    A[l-1].c = lec;
    A[l-1].Est = leEst;
    A[l-1].Preco = lePreco;
    A[l-1].Luc = leLuc;
  }
	fclose(Arq);
  
  
	printf("Digite o mes e o ano (mm/aaaa): ");
	scanf("%d/%d", &m, &a);
	
	if (m == 1)
		NDiasMes = 31;
	else if (m == 2)
		NDiasMes = 28;
	else if (m == 3)
		NDiasMes = 31;
	else if (m == 4)
		NDiasMes = 30;
	else if (m == 5)
		NDiasMes = 31;
	else if (m == 6)
		NDiasMes = 30;
	else if (m == 7)
		NDiasMes = 31;
	else if (m == 8)
		NDiasMes = 31;
	else if (m == 9)
		NDiasMes = 0;
	else if (m == 10)
		NDiasMes = 31;
	else if (m == 11)
		NDiasMes = 30;
	else
		NDiasMes = 31;

	printf("\nQual a quantidade de Vendas/Dia? ");
	scanf("%d", &QtdVendasDia);
	
	Qtd = QtdVendasDia * 30;
	
	srand(time(NULL));
		
	Arq = fopen("vendas.txt", "w");
	
		for (j=1; j<=NDiasMes; j++){
			for(b=0; b<QtdVendasDia; b++) {
				Cod = rand() % 8;
				if(A[Cod].c == 'P') {
					ix = (int)x;
					ix = A[Cod].Est;
					QtdVendida = (rand() % (10000*ix)) / 1000.0;
				}
				else {
					ix = (int)x;
					ix = A[Cod].Est;
					QtdVendida = rand() % ix;
				}

				PrecoVenda = ((A[Cod].Preco * (A[Cod].Luc / 100)) * QtdVendida);
				
				//float val = *((float)(rand())/RAND_MAX);
				//printf("%f\n", val);
				
				fprintf(Arq, "%d;%02d;%02d;%d;%.3f;%.2f;\n", a, m , j, A[Cod].Cod , QtdVendida, PrecoVenda);
			}
		}
	fclose(Arq);
	
	printf("\nGravacao feita com sucesso!!\n");
	
	system("PAUSE");
}

