/* Enunciado
   Leia um arquivo texto contendo um número inteiro em cada
   linha. Os números lidos devem ser carregados em um vetor
   dinâmico. Calcule a soma de todos os valores do vetor e
   apresente na tela
*/
#include<stdio.h>
#include<stdlib.h>

int main(void) {
  FILE *Arq;
  int *VA, *VC;
  float *VB;
  int Qtde;
  int Soma, i;
  int A, C;
  float B;
  
  // Leitura do arquivo e carga do vetor
  VA = NULL;
  VB = NULL;
  VC = NULL;
  Qtde = 0;
  Arq = fopen("Entrada.txt", "r");
  while (fscanf(Arq, "%d;%f;%d\n", &A, &B, &C) != EOF)  {
    Qtde++;
    VA = (int *)realloc(VA, sizeof(int) * Qtde);
    VB = (int *)realloc(VB, sizeof(int) * Qtde);
    VC = (int *)realloc(VC, sizeof(int) * Qtde);
    VA[Qtde-1] = A;
    VB[Qtde-1] = B;
    VC[Qtde-1] = C;
  }
  fclose(Arq);
  
  // Exibição do vetor na tela
  printf("Dados lidos\n");
  Soma = 0;
  for(i = 0; i < Qtde; i++) {
    printf("  linha %d = inteiro A: %4d - real B: %6.2f - inteiro C: %4d\n", i, VA[i], VB[i], VC[i]);
  }
  
  // Gravação do vetor em um arquivo
  printf("Gravação do arquivo\n");
  Arq = fopen("Saida.txt", "w");
  for(i = 0; i < Qtde; i++) {
    fprintf(Arq, "  linha %d = inteiro A: %4d - real B: %6.2f - inteiro C: %4d\n", i, VA[i], VB[i], VC[i]);
  }
  fclose(Arq);
 
  printf("\n\nFim do Programa\n");
  system("pause");
  return(0);
}











