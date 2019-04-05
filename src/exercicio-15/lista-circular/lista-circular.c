#include "lista-circular.h"

void insereListaCircular(TipoLista* lista, TipoItem item) {
	TipoCelula *celula = (TipoCelula*) malloc(sizeof(TipoCelula));
	celula->item = item;
	celula->proximo = lista->primeiro;

	lista->ultimo->proximo = celula;
	lista->ultimo = celula;
}

TipoItem* removeListaCircular(TipoLista* lista) {
	TipoItem* item = NULL;
	if (!testaListaVazia(lista)) {
		item = (TipoItem*) malloc(sizeof(TipoItem));
		TipoCelula* celula = lista->primeiro;
		*item = celula->item;

		lista->primeiro = celula->proximo;
		lista->ultimo->proximo = lista->primeiro;

		if(celula->proximo == celula) lista->ultimo = lista->primeiro;

		free(celula);
	}
	return item;
}

TipoItem* removeListaCircularPorPos(TipoLista* lista, int pos) {
	TipoItem* item = NULL;
	if (!testaListaVazia(lista)) {

		TipoCelula* celula;
		int i;
		for(i=0, celula = lista->primeiro; i<=pos && celula != NULL; i++, celula = celula->proximo){
			if(i+1 == pos){
				TipoCelula* celulaRm = celula->proximo;
				item = (TipoItem*) malloc(sizeof(TipoItem));
				*item = celulaRm->item;

				celula->proximo = celula->proximo->proximo;

				free(celulaRm);
			}
		}
	}
	return item;
}

void imprimeListaCircular(TipoLista* lista) {
	TipoCelula* celula;

	if (!testaListaVazia(lista)) {
		celula = lista->primeiro;

		do {
			celula = celula->proximo;
			printf("%i ", celula->item.chave);
		} while (celula != lista->ultimo);
	}
}
