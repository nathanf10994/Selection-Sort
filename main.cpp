#include "head.h"

int main(){
	
	lista l, copia;
	int valor;
	
	inicializar(&l);
	inicializar(&copia);
	
	//Preenchimento de dados
		do{
			system("cls");
			cout<<"Insira um valor. Insira [0] ou menor para encerrar.\n-> ";
			cin>>valor;
				if(valor > 0) push(&l, valor);
			
		} while(valor > 0);
	system("cls");
		if(l.primeiro == NULL){ //verifica se foram inseridos dados
			cout<<"\nNão foram inseridos valores na Lista.\n";
			return 0;
		} 
	
	//Armazenamento da sequencia original
	copiaLista(&l, &copia);
	
	//Execução
	selectionSort(&l, &copia);

	
	//Encerramento do programa
	cout<<"\n\n";
	return 0;
}
