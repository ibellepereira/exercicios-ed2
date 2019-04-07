#ifndef MAIN_H_
#define MAIN_H_ "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "tads/node.h"
#include "tads/lista/lista.h"
#include "exercicio-15/lista-circular/lista-circular.h"
#include "exercicio-15/lista-duplamente-encadeada/lista-dupla.h"
#include "exercicio-15/lista-circular-duplamente-encadeada/lista-circular-dupla.h"
#include "tads/fila/fila.h"
#include "tads/pilha/pilha.h"

TipoLista* criaListaPopulada(int);
TipoLista* clonaLista(TipoLista*);
TipoFila* criaFilaPopulada(int);
TipoFila* clonaFila(TipoFila*);
TipoPilha* criaPilhaPopulada(int);
TipoItem criaItem();

TipoLista** divideLista(TipoLista*, int);
TipoLista** divideListaAtPos(TipoLista*, int);
TipoLista* inverteCelulas(TipoLista*, int, int);
void imprimeListaEncadeada(TipoLista*);
TipoFila* inverteFila(TipoFila*);
void imprimePilhaPorInsercao(TipoPilha*);

int execute09(void);
int execute14(void);
int execute15(void);
int execute18(void);
int execute22(void);

#endif
