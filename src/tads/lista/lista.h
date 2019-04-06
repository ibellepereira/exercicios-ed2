#ifndef LISTA_H_
#define LISTA_H_ "lista.h"

#include <stdio.h>
#include <stdlib.h>
#include "../node.h"

typedef struct {
	TipoCelula *primeiro;
	TipoCelula *ultimo;
} TipoLista; //tipo do TAD lista

void criaListaVazia(TipoLista*);
int testaListaVazia(TipoLista*);
void insereLista(TipoLista*, TipoItem);
void removeLista(TipoLista*, TipoItem*, TipoCelula*);
void imprimeLista(TipoLista*);

#endif
