#include "../main.h"

/*
22 - Escreva uma função para inverter os nós de uma fila usando uma pilha.
*/

TipoFila* inverteFila(TipoFila* fila){
	TipoFila* filaInvertida = clonaFila(fila);
	TipoPilha* pilha = criaPilhaPopulada(0);

	TipoItem item;

	while(!testaFilaVazia(filaInvertida)){
		removeFila(filaInvertida, &item);
		inserePilha(pilha, item);
	}

	while(!testaPilhaVazia(pilha)){
		removePilha(pilha, &item);
		insereFila(filaInvertida, item);
	}

	free(pilha);

	return filaInvertida;
}

int execute22(void) {
	const int QTD_ITEMS = 10;

	printf("==== EXERCÍCIO 22 ====\n");
	TipoFila* fila = criaFilaPopulada(QTD_ITEMS);
	TipoFila* filaInvertida = inverteFila(fila);

	printf("Fila:\n");
	imprimeFila(fila);
	printf("\nFila Invertida: \n");
	imprimeFila(filaInvertida);


	free(fila);
	free(filaInvertida);

	return EXIT_SUCCESS;
}
