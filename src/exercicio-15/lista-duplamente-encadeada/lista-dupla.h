#ifndef LISTA_DUPLA_H_
#define LISTA_DUPLA_H_

#include "../../lista/lista.h"

typedef struct celulaDupla {
	TipoItem item;
	struct celulaDupla *proximo;
	struct celulaDupla *anterior;
} TipoCelulaDupla;

void insereListaDuplamenteEncadeada(TipoLista*, TipoItem);
TipoItem* removeListaDuplamenteEncadeada(TipoLista*);
TipoItem* removeListaDuplamenteEncadeadaPorPos(TipoLista*, int);

#endif
