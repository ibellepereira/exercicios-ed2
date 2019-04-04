typedef struct {
	int chave;
} TipoItem; //tipo dos itens que compõem a lista

typedef struct celula {
	TipoItem item;
	struct celula *proximo;
} TipoCelula; //tipo das células com os itens da lista

typedef struct {
	TipoCelula *primeiro;
	TipoCelula *ultimo;
} TipoLista; //tipo do TAD lista

void criaListaVazia(TipoLista*);
int testaListaVazia(TipoLista*);
void insereLista(TipoLista*, TipoItem);
void removeLista(TipoLista*, TipoItem*, TipoCelula*);
void imprimeLista(TipoLista*);
