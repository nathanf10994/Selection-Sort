#include "head.h"

void selectionSort(lista *l, lista *c){
	nodo *atual = l->primeiro;
	int trocas=0;
	
		while(atual){
			nodo *menor = atual;
			nodo *proximo = atual->proximo;
				while(proximo){ //percorre a lista para encontrar o menor valor
						if(proximo->valor < menor->valor){
							menor = proximo;
						}
					proximo = proximo->proximo;
				}
				if(menor != atual){ //verifica se há necessidade para os próximos passos
					
						menor->anterior->proximo = atual; //atualiza��o dos nodos anteriores e próximos aos nodos que mudarão de posição
							if(atual->anterior) atual->anterior->proximo = menor;
							if(menor->proximo) menor->proximo->anterior = atual;
						atual->proximo->anterior = menor;
					
					nodo *tempAnterior = atual->anterior; //atualização dos nodos que mudarão de posição
					nodo *tempProximo = atual->proximo;
					atual->anterior = menor->anterior;
					atual->proximo = menor->proximo;
					menor->anterior = tempAnterior;
					menor->proximo = tempProximo;
						
						if(l->primeiro == atual) l->primeiro = menor; //Atualiza o início da lista
					
					print(l, c); //imprime a lista para exibir as mudanças passo a passo
					cout<<"-------------------\n";
					cout<<"Troca: "<<++trocas;
					cout<<"\n===================\n\n";
				}
			
			atual= menor->proximo;	
		}
}