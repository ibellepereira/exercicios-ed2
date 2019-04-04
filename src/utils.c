#include "main.h"

TipoLista* criaListaPopulada(int qtd){
	TipoLista *lista = (TipoLista*) malloc(sizeof(TipoLista));
	int i;

	//srand(time(NULL));

	criaListaVazia(lista);

	for(i = 0; i<qtd; i++){
		TipoItem item;
		item.chave = rand() % 100;
		insereLista(lista, item);
	}

	return lista;
}

TipoLista* clonaLista(TipoLista* lista){
	TipoLista* clone = (TipoLista*) malloc(sizeof(TipoLista));
	criaListaVazia(clone);

	TipoCelula* celula;
	for(celula = lista->primeiro->proximo; celula != NULL; celula = celula->proximo){
		insereLista(clone, celula->item);
	}

	return clone;
}
