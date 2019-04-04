#include "../main.h"

/*
09 - Escreva uma função que receba uma lista encadeada e um valor n e divida
a lista em duas, de forma que a segunda comece no primeiro nó logo após a
primeira ocorrência de n na lista original.
*/

TipoLista* divideLista(TipoLista* lista, int valor){
	TipoLista* segundaLista = criaListaPopulada(0);

	TipoCelula* celula;
	for(celula = lista->primeiro->proximo; celula != NULL; celula = celula->proximo){
		if(celula->item.chave == valor){
			segundaLista->primeiro->proximo = celula->proximo;
			/*celula->proximo = NULL;
			lista->ultimo = celula;*/
			break;
		}
	}

	return segundaLista;
}
