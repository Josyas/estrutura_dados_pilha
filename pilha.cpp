#include <iostream>
#include "pilha.h"

pilha::pilha()
{
	tamanho = 0;
	estrutura = new TipoItem;
	
}

pilha::~pilha()
{
	delete [] estrutura;
}

void pilha::inserir(TipoItem item)
{
	if (estacheia())
	{
             std::cout << "A pilha esta cheia!\n";
             std::cout << "Nao e possivel inserir este elemento!\n";
    } 
   else
   {
            estrutura[tamanho] = item;
            tamanho++;
    }
}

pilha::remover(){
	if(estavazia()){
		 std::cout << "Não tem elemento para ser removido!\n";
		 std::cout << "A pilha esta vazia!\n";
		return 0;
	}
	else{
		tamanho--;
		return estrutura[tamanho];
   }
}

void pilha::imprimir(){
	std::cout <<"Pilha: [";
	for(int i = 0; i < tamanho; i++){
		 std::cout << estrutura[i] << " ";
	}
	 std::cout << "]\n";
}

bool pilha::estacheia()
{
	return(tamanho == max_itens);
}

bool pilha::estavazia()
{
	return(tamanho == 0);	
}

int pilha::qualtamanho()
{
	return tamanho;
}
