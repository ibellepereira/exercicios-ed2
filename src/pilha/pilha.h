#ifndef PILHA_H_
#define PILHA_H_ "pilha.h"

#include "../node.h"

typedef struct {
	TipoCelula *topo;
	TipoCelula *fundo;
} TipoPilha; //tipo do TAD pilha

void criaPilhaVazia(TipoPilha*);
void imprimePilha(TipoPilha*);
void inserePilha(TipoPilha*, TipoItem);
void removePilha(TipoPilha*, TipoItem*);
int testaPilhaVazia(TipoPilha*);

#endif
