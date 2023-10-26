#include <iostream>
#include <windows.h>

using namespace std;

void selectionSort(int v[], int tam);

int main(){
	
	int *vetor, *vetorCopia, tam;
	
	// Tamanho para o vetor
	cout<<"\nInforme o tamanho para o vetor: ";
	cin>>tam;
	
	//Alocação de memória
	vetor = new int[tam];
	vetorCopia = new int[tam];
	
	//Preenchimento de dados	
		for(int i=0; i<tam; i++){
			cout<<"\nInforme o valor "<<i+1<<" para o vetor ->";
			cin>>vetor[i];
		}
	
	//Armazenamento da ordenaçãoo original
	vetorCopia = vetor;
		
	system("cls");
	
	//Execução da função
	selectionSort(vetor, tam);
	
	//Impressão dos dados
	cout<<"\tORIGINAL | ORDENADO\n\n";
	
		for(int i=0; i<tam; i++){
			cout<<"\t"<<vetorCopia[i]<<"\t | \t"<<vetor[i]<<endl;
		}
	
	//Encerramento do programa
	cout<<"\n\n";
	delete[] vetor;
	delete[] vetorCopia;
	return 0;
}

//Função de ordenação
void selectionSort(int v[], int tam) {
    for (int i = 0; i<tam; i++) {
        int menor = i;
        for (int proximo = i+1; proximo<tam; proximo++) {
            if (v[proximo] < v[menor]) {
                menor = proximo;
            }
        }
        int aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}
