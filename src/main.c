#include "main.h"

int main(void) {

	TipoLista *lista = criaListaPopulada(20);

	TipoLista *clone = clonaLista(lista);
	TipoLista *segundaLista = divideLista(clone, 58);

	imprimeLista(lista);
	printf("\n");
	imprimeLista(clone);
	printf("\n");
	imprimeLista(segundaLista);


	return testaListaVazia(lista);
}
