#ifndef HEAD_H
#define HEAD_H

#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

struct nodo{
	int valor;
	nodo *proximo;
	nodo *anterior;
};

struct lista{
	int tamanho;
	nodo *primeiro;
};

void inicializar(lista *l);
void push(lista *l, int v);
void copiaLista(lista *l, lista *c);
void print(lista *l, lista *c);
void selectionSort(lista *l, lista *c);

#endif