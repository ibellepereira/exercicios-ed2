#include "main.h"

TipoLista* criaListaPopulada(int qtd) {
	TipoLista *lista = (TipoLista*) malloc(sizeof(TipoLista));
	int i;

	criaListaVazia(lista);

	for (i = 0; i < qtd; i++) {
		insereLista(lista, criaItem());
	}

	return lista;
}

TipoLista* clonaLista(TipoLista* lista) {
	TipoLista* clone = (TipoLista*) malloc(sizeof(TipoLista));
	criaListaVazia(clone);

	TipoCelula* celula;
	for (celula = lista->primeiro->proximo; celula != NULL;
			celula = celula->proximo) {
		insereLista(clone, celula->item);
	}

	return clone;
}

TipoPilha* criaPilhaPopulada(int qtd) {
	TipoPilha* pilha = (TipoPilha*) malloc(sizeof(TipoPilha));

	criaPilhaVazia(pilha);

	int i;
	for (i = 0; i < qtd; i++) {
		inserePilha(pilha, criaItem());
	}

	return pilha;
}

TipoFila* criaFilaPopulada(int qtd) {
	TipoFila* fila = (TipoFila*) malloc(sizeof(TipoFila));

	criaFilaVazia(fila);

	int i;
	for (i = 0; i < qtd; i++) {
		insereFila(fila, criaItem());
	}

	return fila;
}

TipoFila* clonaFila(TipoFila* fila){
	TipoFila* clone = (TipoFila*) malloc(sizeof(TipoFila));
	criaFilaVazia(clone);

	TipoCelula* celula;
	for (celula = fila->frente->proximo; celula != NULL;
			celula = celula->proximo) {
		insereFila(clone, celula->item);
	}

	return clone;
}

TipoItem criaItem() {
	TipoItem item;
	item.chave = rand() % 100;
	return item;
}
