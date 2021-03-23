#include <stdio.h>
#include "pilha.h"

int main(void) {
  TPilha *minhaPilha = TPilha_Criar();
  TItem topo;
  TItem item;
  item.num = 90;
  TPilha_Insere(minhaPilha, item);

  item.num = 91;
  TPilha_Insere(minhaPilha, item);

  item.num = 92;
  TPilha_Insere(minhaPilha, item);

  item.num = 93;
  TPilha_Insere(minhaPilha, item);

  TPilha_Topo(minhaPilha, &topo);
  printf("O meu topo: %d\n", topo.num);
  
  printf("QUantidade Elementos: %d\n", TPilha_Tamanho(minhaPilha));

  TPilha_Remove(minhaPilha);
  TPilha_Remove(minhaPilha);

  TPilha_Topo(minhaPilha, &topo);
  printf("O meu topo: %d\n", topo.num);

  printf("QUantidade Elementos: %d\n", TPilha_Tamanho(minhaPilha));
  printf("Hello World\n");
  return 0;
}