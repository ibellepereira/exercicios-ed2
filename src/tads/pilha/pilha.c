#include "pilha.h"

#include <stdio.h>
#include <stdlib.h>

void criaPilhaVazia(TipoPilha *pilha) {
	pilha->topo = (TipoCelula *) malloc(sizeof(TipoCelula));
	pilha->fundo = pilha->topo;
	pilha->topo->proximo = NULL;
}

int testaPilhaVazia(TipoPilha *pilha) {
	return (pilha->topo == pilha->fundo);
}

void inserePilha(TipoPilha *pilha, TipoItem item) {
	TipoCelula *aux = (TipoCelula *) malloc(sizeof(TipoCelula));
	pilha->topo->item = item;
	aux->proximo = pilha->topo;
	pilha->topo = aux;
}

void removePilha(TipoPilha *pilha, TipoItem *item) {
	if (testaPilhaVazia(pilha)) {
		printf("Erro: pilha vazia\n");
		return;
	}
	TipoCelula *q = pilha->topo;
	pilha->topo = q->proximo;
	*item = q->proximo->item;
	free(q);
}

void imprimePilha(TipoPilha *pilha) {
	TipoCelula *aux = pilha->topo->proximo;
	while (aux != NULL) {
		printf("%i ", aux->item.chave);
		aux = aux->proximo;
	}
}
