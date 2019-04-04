#include "main.h"

int main(void) {

/*	TipoLista *lista = criaListaPopulada(20);
	imprimeLista(lista);

	printf("\n");

	TipoPilha *pilha = criaPilhaPopulada(20);
	imprimePilha(pilha);

	printf("\n");*/

	TipoFila *fila = criaFilaPopulada(20);
	imprimeFila(fila);
	printf("\n");
	imprimeFila(inverteFila(fila));

	return 1;
}
