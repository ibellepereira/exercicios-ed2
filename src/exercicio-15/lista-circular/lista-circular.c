#include "lista-circular.h"

void insereListaCircular(TipoLista* lista, TipoItem item) {
	TipoCelula *celula = (TipoCelula*) malloc(sizeof(TipoCelula));
	celula->item = item;

	lista->ultimo->proximo = celula;
	celula->proximo = lista->primeiro->proximo;

	lista->ultimo = celula;
}

TipoItem* removeListaCircular(TipoLista* lista) {
	TipoItem* item = NULL;
	if (!testaListaVazia(lista)) {
		item = (TipoItem*) malloc(sizeof(TipoItem));
		TipoCelula* celula = lista->primeiro->proximo;
		*item = celula->item;

		lista->primeiro->proximo = celula->proximo;

		if (celula->proximo == celula)
			lista->ultimo = lista->primeiro;

		free(celula->proximo);
	}
	return item;
}

TipoItem* removeListaCircularPorPos(TipoLista* lista, int pos) {
	TipoItem* item = NULL;

	TipoCelula* celula;
	int i;
	for (i = -1, celula = lista->primeiro; i < pos && celula != lista->ultimo;
			i++, celula = celula->proximo) {
		if (i + 1 == pos) {
			TipoCelula* celulaRm = celula->proximo;
			item = (TipoItem*) malloc(sizeof(TipoItem));
			*item = celulaRm->item;

			celula->proximo = celulaRm->proximo;

			if(celulaRm == lista->ultimo){
				lista->ultimo = celula;
			}

			if(celulaRm->proximo == celulaRm){
				lista->ultimo = lista->primeiro;
			}
			free(celulaRm);
		}
	}

	return item;
}


