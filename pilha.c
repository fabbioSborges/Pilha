#include "pilha.h"

TPilha* TPilha_Criar(){
  TPilha *novaPilha = (TPilha*) malloc(sizeof(TPilha));
  if(novaPilha != NULL){
    novaPilha->quant = 0;
  }
  return novaPilha;
}


int TPilha_Vazia(TPilha *pPilha){
  if(pPilha->quant == 0){
    return 1;
  }else{
    return 0;
  }
}

int TPilha_Cheia(TPilha *pPilha){

  if(pPilha->quant >= MAXTAM){
    return 1;
  }else{
    return 0;
  }
}

int TPilha_Tamanho(TPilha *pPilha){
  
  if(pPilha == NULL){
    return -1;
  }else{
    return pPilha->quant;
  }
}

int TPilha_Remove(TPilha *pPilha){
  if(pPilha == NULL)
    return 0;
  if(TPilha_Vazia(pPilha))
    return 0;
  pPilha->quant --;
  return 1;    
}

int TPilha_Insere(TPilha *pPilha, TItem x){
  if(pPilha == NULL)
    return 0;
  if(TPilha_Cheia(pPilha))
    return 0;
  pPilha->itens[pPilha->quant] = x;
  pPilha->quant ++;
  return 1;    
}

int TPilha_Topo(TPilha *pPilha, TItem *elem){
  if(pPilha == NULL)
    return 0;
  if(TPilha_Vazia(pPilha))
    return 0;
 
  *elem = pPilha->itens[(pPilha->quant)-1];
  return 1;
}