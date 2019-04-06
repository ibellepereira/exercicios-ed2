#include "main.h"

int main(void) {
	const int QTD_ITEMS = 10;
	const int RANGE = 50;

	 // |
	 // | EXERCICIO 09
	 // |

	 printf("==== EXERCÍCIO 9 ====\n");
	 TipoLista* lista = criaListaPopulada(QTD_ITEMS);
	 printf("Lista:\n");
	 imprimeLista(lista);
	 printf("\nSegunda Lista: \n");
	 imprimeLista(divideLista(lista, 0));

	 printf("\n\n\n");


	 srand(time(NULL));


	 // |
	 // | EXERCICIO 14
	 // |

	 printf("==== EXERCÍCIO 14 ====\n");
	 TipoLista* lista2 = criaListaPopulada(QTD_ITEMS);
	 printf("Lista:\n");
	 imprimeLista(lista2);
	 printf("\nLista com nós invertidos: \n");
	 imprimeLista(inverteCelulas(lista2, rand()%RANGE, rand()%RANGE));

	 printf("\n\n\n");

	// |
	// | EXERCICIO 15
	// |
		printf("==== EXERCÍCIO 15 ====\n");
	 int i;

	 printf("-- lista circular --\n\n");
	 TipoLista* listaCircular = criaListaPopulada(0);

	 for (i = 0; i < QTD_ITEMS; i++) {
	 insereListaCircular(listaCircular, criaItem());
	 }

	 printf("Lista:\n");
	 imprimeListaEncadeada(listaCircular);

	 printf("\nLista após remoção: \n");
	 removeListaCircularPorPos(listaCircular, rand()%RANGE);
	 imprimeListaEncadeada(listaCircular);

	 printf("\n\n");

	 printf("-- lista duplamente encadeada --\n\n");
	 TipoLista* listaDupla = criaListaPopulada(0);

	 for (i = 0; i < QTD_ITEMS; i++) {
	 insereListaDuplamenteEncadeada(listaDupla, criaItem());
	 }

	 printf("Lista:\n");
	 imprimeListaEncadeada(listaDupla);
	 removeListaDuplamenteEncadeadaPorPos(listaDupla, rand()%RANGE);
	 printf("\nLista após remoção: \n");
	 imprimeListaEncadeada(listaDupla);

	 printf("\n\n");

	printf("-- lista circular duplamente encadeada --\n\n");
	 TipoLista* listaCircularDupla = criaListaPopulada(0);
	 for (i = 0; i < QTD_ITEMS; i++) {
	 insereListaCircularDuplamenteEncadeada(listaCircularDupla, criaItem());
	 }

	 printf("Lista:\n");
	 imprimeListaEncadeada(listaCircularDupla);
	 removeListaCircularDuplamenteEncadeadaPorPos(listaCircularDupla, rand()%RANGE);
	 printf("\nLista após remoção: \n");
	 imprimeListaEncadeada(listaCircularDupla);
	 printf("\n\n\n");


	 // |
	 // | EXERCICIO 15
	 // |


	 printf("==== EXERCÍCIO 18 ====\n");
	 TipoPilha* pilha = criaPilhaPopulada(QTD_ITEMS);
	 printf("Pilha:\n");
	 imprimePilha(pilha);
	 printf("\nPilha ordenada por inserção: \n");
	 imprimePilhaPorInsercao(pilha);

	 printf("\n\n\n");

	 // |
	 // | EXERCICIO 22
	 // |


	 printf("==== EXERCÍCIO 22 ====\n");
	 TipoFila* fila = criaFilaPopulada(QTD_ITEMS);
	 printf("Fila:\n");
	 imprimeFila(fila);
	 printf("\nFila Invertida: \n");
	 imprimeFila(inverteFila(fila));

	 printf("\n\n\n");


	 return 1;
}
