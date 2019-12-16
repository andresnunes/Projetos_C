#include <stdio.h>
#include <stdlib.h>

int int main(void) {
  FILE *Arq;

  char arq[], chave[40];
  char tipo;

  printf("Digite o arquivo:");
  scanf("%c\n", &arq);

  printf("Digite o tipo de conversão:")
  tipo = getchar();
  if (arq == C){
    printf("Digite uma senha:");
    scanf("%c\n", &chave);
  }
  else{
    chave = NULL;
  }
  Arq = fopen(arq,"r");
  if (Arq ==  NULL)
    printf("Não foi possível abrir o arquivo");
  else
      FORMARQ (tipo, chave[]);
  return 0;
}


int FORMARQ (char Tipo_arq, char Chave_arq[]){
  char chEntrada, chInvertido, chEmbaralhado;
  if (Tipo_arq == I){
    while((chEntrada = fgetc(Arq)) != EOF){
      chEntrada = fgetc(Arq);
      chInvertido = ~chEntrada;

    }
  }
  if (Tipo_arq == C){
    int i;
    while (chEntrada = fgetc(Arq) != EOF){
      chEntrada = fgetc(Arq);
      chEmbaralhado = chEntrada ^ Chave_arq[i];
      if (Chave_arq != "\n")
        i++;
    }
  }
  if (Tipo_arq == D){

  }
  if (Tipo_arq == U){

  }
}
