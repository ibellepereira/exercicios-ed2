#include "../main.h"
/*
 14 - Escreva uma função que inverta a posição de dois nós de uma lista
 encadeada.
 */

TipoLista* inverteCelulas(TipoLista* lista, int pos1, int pos2) {
	TipoLista* nova = clonaLista(lista);

	TipoCelula* anteriorCelulaPos1 = NULL;
	TipoCelula* anteriorCelulaPos2 = NULL;

	int i;
	TipoCelula* celula;
	for (i = -1, celula = nova->primeiro; celula->proximo != NULL ; i++, celula = celula->proximo) {
		if (i + 1 == pos1 || i+1 == pos2){
			if(anteriorCelulaPos1 == NULL) anteriorCelulaPos1 = celula;
			else anteriorCelulaPos2 = celula;
		}

		if(i + 1 >= pos1 && i + 1 >= pos2)
			break;
	}

	if (anteriorCelulaPos1 != NULL && anteriorCelulaPos2 != NULL) {
		celula = (TipoCelula*) malloc(sizeof(TipoCelula));
		celula->item = anteriorCelulaPos1->proximo->item;
		celula->proximo = anteriorCelulaPos2->proximo->proximo;

		if(abs(pos1-pos2) == 1)
			anteriorCelulaPos2->proximo->proximo = celula;
		else
			anteriorCelulaPos2->proximo->proximo = anteriorCelulaPos1->proximo->proximo;

		anteriorCelulaPos1->proximo = anteriorCelulaPos2->proximo;

		if(abs(pos1-pos2) != 1)
			anteriorCelulaPos2->proximo = celula;

		free(anteriorCelulaPos1->proximo);
	}

	return nova;
}
