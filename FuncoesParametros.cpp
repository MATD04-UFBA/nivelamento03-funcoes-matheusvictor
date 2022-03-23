/* Funcoes, Passagem de Parametros e Escopo de Variaveis */ 

#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX 1000

/// ***********************************************************************

/* ************************************************************ */ 
/* **                                                        ** */ 
/* ************************************************************ */ 

void preencheVetorAleatorio(int v[], int n) {

	srand(time(NULL));
	
	for (int i = 0 ; i < n ; i++) {
		v[i] = rand() % 100;
		}
}

/* ************************************************************ */ 
/* **                                                        ** */ 
/* ************************************************************ */ 

void imprimeVetor(int v[], int n) {

	std::cout << "===================" << std::endl;
	std::cout << "|      VETOR      |" << std::endl; 
	std::cout << "===================" << std::endl;
	
	for (int i = 0 ; i < n ; i++) 
		std::cout << "V[ " << i << " ] = " << v[i] << std::endl;

	std::cout << "*******************" << std::endl; 			
}

/* ************************************************************ */ 
/* ************************************************************ */ 
/* **                                                        ** */ 
/* ************************************************************ */ 
/* ************************************************************ */ 

int main(int argc, char** argv) {

int v[MAX],
    numElem=MAX;

    if (argc > 1) {
        numElem = atoi(argv[1]);
        if (numElem > MAX)
        	numElem = MAX;
    	}
	
	std::cout <<  "Criando vetor de valores aleatorios...." << std::endl;
	
	preencheVetorAleatorio(v, numElem);
	
	std::cout <<  "Vetor criado!" << std::endl;
	
	imprimeVetor(v, numElem);
		
	return 0;
}
