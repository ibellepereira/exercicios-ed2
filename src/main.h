#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "lista/lista.h"

TipoLista* criaListaPopulada(int);
TipoLista* clonaLista(TipoLista*);

TipoLista* divideLista(TipoLista*, int);
TipoLista* inverterCelulas(TipoLista*, int, int );
