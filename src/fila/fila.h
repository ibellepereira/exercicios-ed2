#ifndef FILA_H_
#define FILA_H_ "fila.h"

#include "../node.h"

typedef struct {
	TipoCelula *frente;
	TipoCelula *tras;
} TipoFila; //tipo do TAD fila

void criaFilaVazia(TipoFila*);
void imprimeFila(TipoFila*);
void insereFila(TipoFila*, TipoItem);
void removeFila(TipoFila*, TipoItem*);
int testaFilaVazia(TipoFila*);

#endif
