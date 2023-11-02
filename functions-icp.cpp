#include "head.h"

void inicializar(lista *l){
	l->tamanho = 0;
	l->primeiro = NULL;
}

void copiaLista(lista *l, lista *c){ //Registra a ordem original para comparação
	nodo *aux = l->primeiro;
		while(aux){
			push(c, aux->valor);
			aux=aux->proximo;
		}
}

void print(lista *l, lista *c){
	nodo *aux =l->primeiro, *aux2 = c->primeiro;
		if(aux){
			cout<<"ORIGINAL | ORDENADO\n\n";
			while(aux){
				cout<<aux2->valor<<"\t | \t"<<aux->valor<<endl;
				aux = aux->proximo;
				aux2 = aux2->proximo;
			}
		} 
}