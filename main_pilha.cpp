#include <iostream>
#include "pilha.h"

int main(){
	pilha pilha1;
	TipoItem item;
	int opcao;
	
	 std::cout <<"Programa gerador de pilha: \n";
	
	do{
		 std::cout << "Digite 0 para parar o programa!\n";
	     std::cout << "Digite 1 para inserir um elemento!\n";
		 std::cout << "Digite 2 para remover um elemente!\n";
		 std::cout << "Digite 3 para imprimir a pilha!\n";
		 std::cin >> opcao;
		if(opcao == 1){
			std::cout << "Digite o elemento a ser inserido:\n";
			std::cin >> item;
			pilha1.inserir(item);
		}
		else if(opcao == 2){
			item = pilha1.remover();
			std::cout << "Elemento Removido: " << item << std::endl;
		}else if(opcao ==  3){
			pilha1.imprimir();
		}
		
	}while(opcao != 0);
	
	return 0;
}
