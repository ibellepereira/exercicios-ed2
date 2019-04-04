#include "main.h"

int main(void) {

	TipoLista *lista = criaListaPopulada(20);
	TipoLista *segundaLista = inverterCelulas(lista, 2, 5);

	imprimeLista(lista);
	printf("\n");
	imprimeLista(segundaLista);

	return testaListaVazia(lista);
}
