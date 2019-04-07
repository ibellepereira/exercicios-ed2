#include "../main.h"

/*
09 - Escreva uma função que receba uma lista encadeada e um valor n e divida
a lista em duas, de forma que a segunda comece no primeiro nó logo após a
primeira ocorrência de n na lista original.
*/

TipoLista** divideLista(TipoLista* lista, int valor){
	TipoLista** listasDividas = (TipoLista**) malloc(sizeof(TipoLista*)*2);

	TipoLista* primeiraLista = clonaLista(lista);
	TipoLista* segundaLista = criaListaPopulada(0);

	TipoCelula* celula;
	for(celula = primeiraLista->primeiro->proximo; celula != NULL; celula = celula->proximo){
		if(celula->item.chave == valor){
			segundaLista->primeiro->proximo = celula->proximo;
			celula->proximo = NULL;
			primeiraLista->ultimo = celula;
			break;
		}
	}

	listasDividas[0] = primeiraLista;
	listasDividas[1] = segundaLista;

	return listasDividas;
}

TipoLista** divideListaAtPos(TipoLista* lista, int pos) {
	TipoLista** listasDividas = (TipoLista**) malloc(sizeof(TipoLista*) * 2);

	TipoLista* primeiraLista = clonaLista(lista);
	TipoLista* segundaLista = criaListaPopulada(0);

	TipoCelula* celula;
	int i;
	for (i = 0, celula = primeiraLista->primeiro->proximo; i<=pos && celula != NULL; i++, celula = celula->proximo) {
		if (i == pos) {
			segundaLista->primeiro->proximo = celula->proximo;
			celula->proximo = NULL;
			primeiraLista->ultimo = celula;
			break;
		}
	}

	listasDividas[0] = primeiraLista;
	listasDividas[1] = segundaLista;

	return listasDividas;
}
