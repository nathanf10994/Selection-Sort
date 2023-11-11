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
					
						nodo *tempAnterior = menor->anterior;
						nodo *tempProximo = atual->proximo;
						atual->proximo = menor->proximo;
						menor->anterior = atual->anterior;
							if(atual->anterior) atual->anterior->proximo = menor;
							if(menor->proximo) menor->proximo->anterior = atual;
							
							if(tempAnterior == atual){ //verifica se atual e menor são sequenciais
								atual->anterior = menor;
								menor->proximo = atual;
							} else {
								atual->anterior = tempAnterior;
								menor->proximo = tempProximo;
								tempAnterior->proximo = atual;
								tempProximo->anterior = menor;
							}
						
						if(l->primeiro == atual) l->primeiro = menor; //Atualiza o início da lista
					
					print(l, c); //imprime a lista para exibir as mudanças passo a passo
					cout<<"-------------------\n";
					cout<<"Troca: "<<++trocas;
					cout<<"\n===================\n\n";
				}
			
			atual= menor->proximo;	
		}
}