/* Criando módulos com funções */ 

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "modulo.h"

/* ************************************************************ */ 
/* ************************************************************ */ 
/* **                                                        ** */ 
/* ************************************************************ */ 
/* ************************************************************ */ 

int main() {

int numV = MAX,
	numP = MAX / 2,
	numQ = 3 * MAX / 5; 

int V[numV],
	P[numP],
	Q[numQ];	

	std::cout << "Criando vetor de valores aleatorios...." << std::endl;  	
	preencheVetorAleatorio(V, numV);
	std::cout << "Vetor criado!" << std::endl;	
	imprimeVetor(V, numV);

	std::cout << "Criando vetor de valores em um intervalo..." << std::endl;  	
	preencheVetorIntervalo(P, numP, -100, 300);	
	std::cout << "Vetor criado!" << std::endl;  	
	imprimeVetor(P, numP);

	std::cout << "Criando vetor de valores em um intervalo..." << std::endl;  	
	preencheVetorIntervalo(Q, numQ, 0, 500);	
	std::cout << "Vetor criado!" << std::endl;  	
	imprimeVetor(Q, numQ);

	int maior, menor;

	maiorMenorValor(V, numV, maior, menor);
	std::cout << "Maior valor de V = " << maior << std::endl;  	
	std::cout << "Menor valor de V = " << menor << std::endl;  	

	return 0;
}
