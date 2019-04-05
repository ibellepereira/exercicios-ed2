#include "lista-dupla.h"

#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"

void insereListaDuplamenteEncadeada(TipoLista* lista, TipoItem item) {
	TipoCelulaDupla* celula = (TipoCelulaDupla*) malloc(
			sizeof(TipoCelulaDupla));

	celula->item = item;
	celula->proximo = NULL;
	celula->anterior = lista->ultimo;

	celula->anterior->proximo = celula;
	lista->ultimo = celula;
}

TipoItem* removeListaDuplamenteEncadeada(TipoLista* lista) {
	TipoItem* item = NULL;

	if (!testaListaVazia(lista)) {
		item = (TipoItem*) malloc(sizeof(TipoItem));

		TipoCelulaDupla* celula = lista->primeiro->proximo;
		*item = celula->item;

		celula->anterior->proximo = celula->proximo;

		if (celula->proximo != NULL) {
			celula->proximo->anterior = celula->anterior;

		} else {
			lista->ultimo = lista->primeiro;
		}

		free(celula);
	}
	return item;
}
