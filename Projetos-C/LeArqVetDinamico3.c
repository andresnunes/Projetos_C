// site com modelos clictec.com/ilp500
/* ler todos os  valores em um arquivo txt e colocar em um vetor dinamico
->apresentar a soma de todos os valores na tela.
  
 137
 962
 25
 143
 12
 195
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *Arq;
	int x, i;
	i=0;
	Arq=fopen("lista.txt","r");//r -> read (w->write)
	while (fscanf(Arq, "%d\n", &x) != EOF){
		fscanf(Arq,"%d\n", &x);
		printf("Valor lido para x = %n\n",&x);
	        i++;
	}
	int *P=NULL;
	P=(int*)malloc(sizeof(int)*i);
	
	for(int z; z <= i; z++){
		fscanf(Arq, "%d\n", &P[z]);
	}
	free(P);
	printf("\nFim do programa\n");

}
