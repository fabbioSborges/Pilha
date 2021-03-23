#include <stdio.h>
#include <stdlib.h>
#define INICIO 0
#define MAXTAM 5

typedef struct {
 int num;
}TItem;

typedef struct {
 TItem itens[MAXTAM];
 int quant;
} TPilha;


/* procedimentos e funcoes da TAD */
TPilha* TPilha_Criar();
int TPilha_Vazia(TPilha *pPilha);
int TPilha_Cheia(TPilha *pPilha);
int TPilha_Tamanho(TPilha *pPilha);
int TPilha_Insere(TPilha *pPilha, TItem x);
int TPilha_Remove(TPilha *pPilha);
int TPilha_Topo(TPilha *pPilha, TItem *elem);