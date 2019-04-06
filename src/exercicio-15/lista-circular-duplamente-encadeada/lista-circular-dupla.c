#include "lista-circular-dupla.h"

#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"

void insereListaCircularDuplamenteEncadeada(TipoLista* lista, TipoItem item) {
	TipoCelulaDupla* celula = (TipoCelulaDupla*) malloc(
			sizeof(TipoCelulaDupla));
	celula->item = item;

	if (testaListaVazia(lista)) {
		celula->anterior = celula;
		celula->proximo = celula;

		lista->primeiro->proximo = celula;
	} else {
		celula->anterior = lista->ultimo;
		celula->proximo = lista->primeiro->proximo;

		celula->anterior->proximo = celula;
		celula->proximo->anterior = celula;
	}
	lista->ultimo = celula;
}

TipoItem* removeListaCircularDuplamenteEncadeada(TipoLista* lista) {
	TipoItem* item = NULL;

	if (!testaListaVazia(lista)) {
		item = (TipoItem*) malloc(sizeof(TipoItem));

		TipoCelulaDupla* celula = lista->primeiro->proximo;
		*item = celula->item;

		celula->anterior->proximo = celula->proximo;
		celula->proximo->anterior = celula->anterior;

		lista->primeiro->proximo = celula->proximo;

		if (celula->proximo == celula)
			lista->ultimo = lista->primeiro;

		free(celula);
	}
	return item;
}

TipoItem* removeListaCircularDuplamenteEncadeadaPorPos(TipoLista* lista,
		int pos) {
	TipoItem* item = NULL;

	TipoCelulaDupla* celula, *celulaRm;
	int i;
	for (i = -1, celula = lista->primeiro; i <= pos && celula != lista->ultimo;
			i++, celula = celula->proximo) {
		if (i + 1 == pos) {
			celulaRm = celula->proximo;

			item = (TipoItem*) malloc(sizeof(TipoItem));
			*item = celula->proximo->item;

			celula->proximo = celulaRm->proximo;
			celulaRm->proximo->anterior = celula;

			if(celulaRm == lista->ultimo)
				lista->ultimo = celula;

			if(celulaRm == celulaRm->proximo)
				lista->ultimo = lista->primeiro;

			free(celulaRm);
		}

	}

	return item;
}
