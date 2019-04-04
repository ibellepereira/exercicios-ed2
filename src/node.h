#ifndef NODE
#define NODE "node.h"
typedef struct {
	int chave;
} TipoItem;

typedef struct celula {
	TipoItem item;
	struct celula *anterior;
	struct celula *proximo;
} TipoCelula;

#endif
