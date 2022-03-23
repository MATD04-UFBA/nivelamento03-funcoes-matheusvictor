#include <iostream>
#include <cstdlib>
#include <ctime>

#include "modulo.h"

/* ************************************************************ */ 
/* **                                                        ** */ 
/* ************************************************************ */ 

void preencheVetorAleatorio(int v[], int n) {

	srand(time(NULL));
	
	for (int i = 0 ; i < n ; i++) 
		v[i] = rand() % 100;
		
}

/* ************************************************************ */ 
/* **                                                        ** */ 
/* ************************************************************ */ 

void imprimeVetor(int v[], int n) {

	std::cout <<  "       VETOR" << std::endl;  
	std::cout <<  "===================" << std::endl;  
	
	for (int i = 0 ; i < n ; i++) 
		std::cout << "[ " << i << " ] = " << v[i] << std::endl;

	std::cout <<  "===================" << std::endl;  			
}

/* ************************************************************ */
/* i = valor inicial do intervalo                               */
/* f = valor final do intervalo                                 */
/* ************************************************************ */

void preencheVetorIntervalo(int v[], int n, int i, int f) {
	
}

/* ************************************************************ */
/* ************************************************************ */

void maiorMenorValor(int v[], int n, int &maior, int &menor) {

}
