#include "listaEstInt.h"

/* Cria uma lista estática de inteiros */
TlstEstInt *lstEstInt_Cria(int tam) {
	TlstEstInt *lista;
	
	if (tam > 0) {
		lista = (TlstEstInt *) malloc(sizeof(TlstEstInt));
		lista->tam = tam;
		lista->pos = 0;
		lista->itens = (int *) malloc(sizeof(int)*tam);
	} else {
		lista = NULL;
	}
	return lista;
}

/* Apaga uma lista estática de inteiros */
void lstEstInt_Apaga(TlstEstInt **lista) {
	if (*lista != NULL) {
		free((*lista)->itens);
		free(*lista);
		*lista = NULL;
	}
}

int lstEstInt_EhCheia(TlstEstInt *lista){
	if (lista == NULL || lista->tam == lista->pos)
		return 1;
	else
		return 0;
}

int lstEstInt_EhVazia(TlstEstInt *lista) {
	if (lista == NULL || lista->pos == 0)
		return 1;
	else
		return 0;
}

int lstEstInt_Insere(TlstEstInt *lista, int item){
	if (lstEstInt_EhCheia(lista)) 
		return 0;
	
    lista->itens[lista->pos] = item;
    lista->pos++;
    return 1;
}

int lstEstInt_NumItens(TlstEstInt *lista) {
	if (lstEstInt_EhVazia(lista))
		return 0;
		
	return lista->pos;
}

int lstEstInt_Procura(TlstEstInt *lista, int item){
	int i, n;
	
	if (lstEstInt_EhVazia(lista))
		return -1;
	
	i=0;
	n = lstEstInt_NumItens(lista);
	while ((i<n) && (lista->itens[i] != item ))
		i++;
	
	if (i<n)
		return i;
	else
		return -1;
}


int lstEstInt_Remove(TlstEstInt *lista, int item){
	int pos, i;
	
	if (lstEstInt_EhVazia(lista))
		return 0;
	
	pos = lstEstInt_Procura(lista, item);
	if (pos >= 0) {
		
		for(i=pos; i<lstEstInt_NumItens(lista); i++) {
			lista->itens[pos] = lista->itens[pos+1];
		}
		lista->pos--;
		
		return 1;
	} else
		return 0;
}