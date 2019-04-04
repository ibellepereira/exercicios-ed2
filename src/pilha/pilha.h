#include "../node.h"

typedef struct {
	TipoCelula *topo;
	TipoCelula *fundo;
} TipoPilha; //tipo do TAD pilha

void criaPilhaVazia(TipoPilha*);
void imprimePilha(TipoPilha*);
void inserePilha(TipoPilha*, TipoItem);
void removePilha(TipoPilha*, TipoItem*);
int testaPilhaVazia(TipoPilha*);
