#include "../main.h"

/*
18 - Escreva uma função que imprima o conteúdo dos nós de uma pilha na
mesma ordem em que foram inseridos. O conteúdo da pilha deve ser o mesmo
antes e depois da execução da função.
*/

void imprimePilhaPorInsercao(TipoPilha* pilha){
	TipoPilha* aux = criaPilhaPopulada(0);

	TipoItem item;
	while(!testaPilhaVazia(pilha)){
		removePilha(pilha, &item);
		inserePilha(aux, item);
	}

	while(!testaPilhaVazia(aux)){
		removePilha(aux, &item);
		printf("%i ", item.chave);
		inserePilha(pilha, item);
	}

	free(aux);
}


int execute18(void) {
	const int QTD_ITEMS = 10;

	printf("==== EXERCÍCIO 18 ====\n");
	TipoPilha* pilha = criaPilhaPopulada(QTD_ITEMS);
	printf("Pilha:\n");
	imprimePilha(pilha);
	printf("\nPilha ordenada por inserção: \n");
	imprimePilhaPorInsercao(pilha);

	free(pilha);

	return EXIT_SUCCESS;
}

