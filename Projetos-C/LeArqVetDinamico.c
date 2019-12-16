/* Enunciado
   Leia um arquivo texto contendo um numero inteiro em cada
   linha. Os numeros lidos devem ser carregados em um vetor
   dinimico. Calcule a soma de todos os valores do vetor e
   apresente na tela
*/
#include<stdio.h>
#include<stdlib.h>

int main(void) {
  FILE *Arq;
  int *V;
  int Qtde;
  int X, Soma, i;
  
  // Leitura do arquivo e carga do vetor
  V = NULL;
  Qtde = 0;
  Arq = fopen("Dados.txt", "r");
  while (fscanf(Arq, "%d\n", &X) != EOF)  {
    Qtde++;
    V = (int *)realloc(V, sizeof(int) * Qtde);
    V[Qtde-1] = X;
  }
  fclose(Arq);
  
  // Exibicao do vetor na tela e Totalizacao dos valores
  printf("Dados lidos\n");
  Soma = 0;
  for(i = 0; i < Qtde; i++) {
    printf("  elemento %d = %d\n", i, V[i]);
    Soma = Soma + V[i];
  }
  
  // Exibicao do total na tela
  printf("\nTotal dos dados lidos = %d\n", Soma);
  
  printf("\n\nFim do Programa\n");
  system("pause");
  return(0);
}











