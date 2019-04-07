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

int execute15(void) {
	const int QTD_ITEMS = 10;
	const int RANGE = 11;

	int pos1 = rand() % RANGE;
	int pos2 = rand() % RANGE;
	int pos3 = rand() % RANGE;

	printf("==== EXERCÍCIO 15 ====\n");
	int i;

	printf("-- lista circular --\n\n");
	TipoLista* listaCircular = criaListaPopulada(0);

	for (i = 0; i < QTD_ITEMS; i++) {
		insereListaCircular(listaCircular, criaItem());
	}

	printf("Lista:\n");
	imprimeListaEncadeada(listaCircular);

	printf("\nLista após remoção na posicao: %i\n", pos1);
	removeListaCircularPorPos(listaCircular, pos1);
	imprimeListaEncadeada(listaCircular);

	printf("\n\n");

	printf("-- lista duplamente encadeada --\n\n");
	TipoLista* listaDupla = criaListaPopulada(0);

	for (i = 0; i < QTD_ITEMS; i++) {
		insereListaDuplamenteEncadeada(listaDupla, criaItem());
	}

	printf("Lista:\n");
	imprimeListaEncadeada(listaDupla);
	removeListaDuplamenteEncadeadaPorPos(listaDupla, pos2);
	printf("\nLista após remoção na posicao: %i\n", pos2);
	imprimeListaEncadeada(listaDupla);

	printf("\n\n");

	printf("-- lista circular duplamente encadeada --\n\n");
	TipoLista* listaCircularDupla = criaListaPopulada(0);
	for (i = 0; i < QTD_ITEMS; i++) {
		insereListaCircularDuplamenteEncadeada(listaCircularDupla, criaItem());
	}

	printf("Lista:\n");
	imprimeListaEncadeada(listaCircularDupla);
	removeListaCircularDuplamenteEncadeadaPorPos(listaCircularDupla, pos3);
	printf("\nLista após remoção na posicao: %i\n", pos3);
	imprimeListaEncadeada(listaCircularDupla);

	free(listaCircular);
	free(listaDupla);
	free(listaCircularDupla);

	return EXIT_SUCCESS;
}
