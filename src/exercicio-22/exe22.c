#include "../main.h"
/*
22 - Escreva uma função para inverter os nós de uma fila usando uma pilha.
*/

TipoFila* inverteFila(TipoFila* fila){
	TipoFila* filaInvertida = criaFilaPopulada(0);
	TipoPilha* pilha = criaPilhaPopulada(0);

	TipoItem item;

	while(!testaFilaVazia(fila)){
		removeFila(fila, &item);
		inserePilha(pilha, item);
	}

	while(!testaPilhaVazia(pilha)){
		removePilha(pilha, &item);
		insereFila(filaInvertida, item);
	}

	return filaInvertida;
}
