#include "lista.h"

#include <stdio.h>
#include <stdlib.h>

void criaListaVazia(TipoLista *lista) {
	lista->primeiro = (TipoCelula *) malloc(sizeof(TipoCelula));
	lista->ultimo = lista->primeiro;
	lista->primeiro->proximo = NULL;
}

int testaListaVazia(TipoLista *lista) {
	return (lista->primeiro == lista->ultimo);
}

void insereLista(TipoLista *lista, TipoItem item) {
	lista->ultimo->proximo = (TipoCelula *) malloc(sizeof(TipoCelula));
	lista->ultimo = lista->ultimo->proximo;
	lista->ultimo->item = item;
	lista->ultimo->proximo = NULL;
}

void removeLista(TipoLista *lista, TipoItem *item, TipoCelula *pt){
	if (testaListaVazia(lista) || pt == NULL || pt->proximo == NULL) {
		printf("Erro: lista vazia ou posição inexistente\n");
		return;
	}
	TipoCelula *q = pt->proximo;
	*item = q->item;
	pt->proximo = q->proximo;
	if (pt->proximo == NULL)
		lista->ultimo = pt;
	free(q);
}

void imprimeLista(TipoLista *lista) {
	TipoCelula *aux = lista->primeiro->proximo;
	while (aux != NULL) {
		printf("%i ", aux->item.chave);
		aux = aux->proximo;
	}
}
