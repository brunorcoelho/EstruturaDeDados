#include <stdio.h>
#include "listaEstInt.h"

int main() {
	TlstEstInt *myList;
	int op, item, p;
	
	myList = lstEstInt_Cria(20);
	printf("Tamanho %d\n", myList->tam);
	printf("Posição %d\n", myList->pos);
	printf("*Itens %p\n", myList->itens);
	
	do {
		printf("0 - Sair\n");
		printf("1 - Inserir item\n");
		printf("2 - Remover item\n");
		printf("3 - Procurar item\n");
		printf("4 - Eh Vazia\n");
		printf("5 - Eh Cheia\n");
		printf("6 - Quantos itens tem?\n");		
		printf("Opcao: "); scanf("%d", &op);
		
		switch(op) {
			case 1:
				printf("Digite um item: "); scanf("%d", &item);
				if (!lstEstInt_Insere(myList, item))
					printf("<<<< Erro ao inserir item >>>>>\n\n");
				else
					printf("Item '%d' inserido\n\n", item);
				break;
			case 2:
				printf("Digite um item: "); scanf("%d", &item);
				if (!lstEstInt_Remove(myList, item))
					printf("<<<< Erro ao remover item >>>>>\n\n");
				else
					printf("Item '%d' removido\n\n", item);
				break;
			case 3:
				printf("Digite um item: "); scanf("%d", &item);
				p = lstEstInt_Procura(myList, item);
				if (p < 0)
					printf("Item '%d' não encontrado\n\n", item);
				else
					printf("Item '%d' encontrado na %d\a. posição.\n\n", item, p+1);
				break;
			case 4:
				if (lstEstInt_EhVazia(myList))
					printf("A lista está vazia.\n\n");
				else
					printf("A lista não está vazia.\n\n");
				break;
			case 5:
				if (lstEstInt_EhCheia(myList))
					printf("A lista está cheia.\n\n");
				else
					printf("A lista não está cheia.\n\n");
				break;
			case 6:
				printf("A lista possui %d elementos.\n\n", lstEstInt_NumItens(myList));
		}
	} while (op != 0);

	lstEstInt_Apaga(&myList);
	printf("lista %p\n", myList);


	return 0;
}