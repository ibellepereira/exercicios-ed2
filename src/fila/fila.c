#include "fila.h"

#include <stdio.h>
#include <stdlib.h>

void criaFilaVazia(TipoFila *fila) {
	fila->frente = (TipoCelula *) malloc(sizeof(TipoCelula));
	fila->tras = fila->frente;
	fila->frente->proximo = NULL;
}

int testaFilaVazia(TipoFila *fila) {
	return (fila->frente == fila->tras);
}

void insereFila(TipoFila *fila, TipoItem item) {
	fila->tras->proximo = (TipoCelula *) malloc(sizeof(TipoCelula));
	fila->tras = fila->tras->proximo;
	fila->tras->item = item;
	fila->tras->proximo = NULL;
}

void removeFila(TipoFila *fila, TipoItem *item) {
	if (testaFilaVazia(fila)) {
		printf("Erro: fila vazia\n");
		return;
	}
	TipoCelula *q = fila->frente;
	fila->frente = fila->frente->proximo;
	*item = fila->frente->item;
	free(q);
}

void imprimeFila(TipoFila *fila) {
	TipoCelula *aux = fila->frente->proximo;
	while (aux != NULL) {
		printf("%i ", aux->item.chave);
		aux = aux->proximo;
	}
}
