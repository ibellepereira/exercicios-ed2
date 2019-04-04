#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "node.h"
#include "lista/lista.h"
#include "fila/fila.h"
#include "pilha/pilha.h"


TipoLista* criaListaPopulada(int);
TipoLista* clonaLista(TipoLista*);

TipoLista* divideLista(TipoLista*, int);
TipoLista* inverterCelulas(TipoLista*, int, int);
TipoFila* inverteFila(TipoFila*);
