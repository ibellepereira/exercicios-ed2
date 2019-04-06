#include "../main.h"

/*
15 - Escreva funções para inserir e excluir elementos em listas dos seguintes
tipos:
- lista circular;
- lista duplamente encadeada;
- lista circular duplamente encadeada.
*/

void imprimeListaEncadeada(TipoLista* lista) {
	TipoCelula* celula;

	if (!testaListaVazia(lista)) {
		celula = lista->primeiro;

		do {
			celula = celula->proximo;
			printf("%i ", celula->item.chave);
		} while (celula != lista->ultimo);
	}
}

