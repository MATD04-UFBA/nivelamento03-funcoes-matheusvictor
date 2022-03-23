/* Funcoes e Escopo de Variaveis */ 

#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX 10

int v[MAX];

/* ************************************************************ */ 
/* **                                                        ** */ 
/* ************************************************************ */ 

void preencheVetorAleatorio() {

	srand(time(NULL));
	
	for (int i = 0 ; i < MAX ; i++) {
		v[i] = rand() % 100;
		}
}

/* ************************************************************ */ 
/* **                                                        ** */ 
/* ************************************************************ */ 

void imprimeVetor() {

	std::cout << "===================" << std::endl;
	std::cout << "|      VETOR      |" << std::endl; 
	std::cout << "===================" << std::endl;
	
	for (int i = 0 ; i < MAX ; i++) 
		std::cout << "V[ " << i << " ] = " << v[i] << std::endl;

	std::cout << "*******************" << std::endl; 			
}

/* ************************************************************ */ 
/* ************************************************************ */ 
/* **                                                        ** */ 
/* ************************************************************ */ 
/* ************************************************************ */ 

int main() {
	
	std::cout << "Criando vetor de pontos aleatorios...." << std::endl;
	
	preencheVetorAleatorio();
	
	std::cout << "Vetor criado!" << std::endl; 
	
	imprimeVetor();
		
	return 0;
}
