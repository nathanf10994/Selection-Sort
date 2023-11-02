#include "head.h"

void push(lista *l, int v){  //insere sempre no final da lista
	nodo *aux, *novo = new nodo;
		if(novo){
			novo->valor = v;
			novo->proximo = NULL;
			
				if(l->primeiro == NULL){ //verifica se será o primeiro a entrar
					novo->anterior = NULL;
					l->primeiro = novo;
				} else{
					aux=l->primeiro;	
						while(aux->proximo){
							aux=aux->proximo;
						}
					aux->proximo = novo;
					novo->anterior = aux;	
				}
			l->tamanho++;
		} else cout<<"\nFalha na alocação de memória";
}