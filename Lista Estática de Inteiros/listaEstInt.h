#ifndef _LISTESTINT_H_

#define  _LISTESTINT_H_

#include <stdlib.h>

typedef struct _listEstInt_ {
	int *itens;
	int tam;	
	int pos;
} TlstEstInt;

/* Cria uma lista estática de inteiros */
TlstEstInt *lstEstInt_Cria(int tam);

/* Apaga uma lista estática de inteiros */
void lstEstInt_Apaga(TlstEstInt **lista);

int lstEstInt_Insere(TlstEstInt *lista, int item);

int lstEstInt_Remove(TlstEstInt *lista, int item);

int lstEstInt_EhCheia(TlstEstInt *lista);

int lstEstInt_EhVazia(TlstEstInt *lista);

int lstEstInt_Procura(TlstEstInt *lista, int item);

int lstEstInt_NumItens(TlstEstInt *lista);

#endif 