/* Funcoes e Escopo de Variaveis */ 

#include <iostream>
#include <cstdlib>
#include <ctime>

int g0 = 10,
	g1 = 30;

/**
 * Definção das funções por prótipos 
*/

void F0(int a, int b);
void F1(int &a, int b);
void F2(int &a, int &b);
void F3(int *a, int *b);

/* ************************************************************ */ 
/* ************************************************************ */ 
/* **                                                        ** */ 
/* ************************************************************ */ 
/* ************************************************************ */ 

int main() {

int m_loc0 = 55,
	m_loc1 = 32;
	
	std::cout << "*************************" << std::endl; 
	std::cout << "Antes de F0" << std::endl;
	std::cout << "g0 = " << g0 << " [ " << &g0 << " ] " << std::endl;
	std::cout << "g1 = " << g1 << " [ " << &g1 << " ] " << std::endl;
	std::cout << "m_loc0 = " << m_loc0 << " [ " << &m_loc0 << " ] " << std::endl;
	std::cout << "m_loc1 = " << m_loc1 << " [ " << &m_loc1 << " ] " << std::endl;

	F0(m_loc0, m_loc1);

	std::cout << "-------------------------" << std::endl; 
	std::cout << "Depois de F0" << std::endl;
	std::cout << "g0 = " << g0 << " [ " << &g0 << " ] " << std::endl;
	std::cout << "g1 = " << g1 << " [ " << &g1 << " ] " << std::endl;
	std::cout << "m_loc0 = " << m_loc0 << " [ " << &m_loc0 << " ] " << std::endl;
	std::cout << "m_loc1 = " << m_loc1 << " [ " << &m_loc1 << " ] " << std::endl;

	g0 = 10;
	g1 = 30;

	std::cout << "*************************" << std::endl; 
	std::cout << "Antes de F1" << std::endl;
	std::cout << "g0 = " << g0 << " [ " << &g0 << " ] " << std::endl;
	std::cout << "g1 = " << g1 << " [ " << &g1 << " ] " << std::endl;
	std::cout << "m_loc0 = " << m_loc0 << " [ " << &m_loc0 << " ] " << std::endl;
	std::cout << "m_loc1 = " << m_loc1 << " [ " << &m_loc1 << " ] " << std::endl;

	F1(m_loc0, m_loc1);

	std::cout << "-------------------------" << std::endl; 
	std::cout << "Depois de F1" << std::endl;
	std::cout << "g0 = " << g0 << " [ " << &g0 << " ] " << std::endl;
	std::cout << "g1 = " << g1 << " [ " << &g1 << " ] " << std::endl;
	std::cout << "m_loc0 = " << m_loc0 << " [ " << &m_loc0 << " ] " << std::endl;
	std::cout << "m_loc1 = " << m_loc1 << " [ " << &m_loc1 << " ] " << std::endl;

	m_loc0 = 55;

	std::cout << "*************************" << std::endl; 
	std::cout << "Antes de F2" << std::endl;
	std::cout << "g0 = " << g0 << " [ " << &g0 << " ] " << std::endl;
	std::cout << "g1 = " << g1 << " [ " << &g1 << " ] " << std::endl;
	std::cout << "m_loc0 = " << m_loc0 << " [ " << &m_loc0 << " ] " << std::endl;
	std::cout << "m_loc1 = " << m_loc1 << " [ " << &m_loc1 << " ] " << std::endl;

	F2(m_loc0, m_loc1);

	std::cout << "-------------------------" << std::endl; 
	std::cout << "Depois de F2" << std::endl;
	std::cout << "g0 = " << g0 << " [ " << &g0 << " ] " << std::endl;
	std::cout << "g1 = " << g1 << " [ " << &g1 << " ] " << std::endl;
	std::cout << "m_loc0 = " << m_loc0 << " [ " << &m_loc0 << " ] " << std::endl;
	std::cout << "m_loc1 = " << m_loc1 << " [ " << &m_loc1 << " ] " << std::endl;
	std::cout << "*************************" << std::endl; 
	
	m_loc0 = 55;
	m_loc1 = 32;
	
	std::cout << "*************************" << std::endl; 
	std::cout << "Antes de F3" << std::endl;
	std::cout << "g0 = " << g0 << " [ " << &g0 << " ] " << std::endl;
	std::cout << "g1 = " << g1 << " [ " << &g1 << " ] " << std::endl;
	std::cout << "m_loc0 = " << m_loc0 << " [ " << &m_loc0 << " ] " << std::endl;
	std::cout << "m_loc1 = " << m_loc1 << " [ " << &m_loc1 << " ] " << std::endl;

	F3(&m_loc0, &m_loc1);

	std::cout << "-------------------------" << std::endl; 
	std::cout << "Depois de F3" << std::endl;
	std::cout << "g0 = " << g0 << " [ " << &g0 << " ] " << std::endl;
	std::cout << "g1 = " << g1 << " [ " << &g1 << " ] " << std::endl;
	std::cout << "m_loc0 = " << m_loc0 << " [ " << &m_loc0 << " ] " << std::endl;
	std::cout << "m_loc1 = " << m_loc1 << " [ " << &m_loc1 << " ] " << std::endl;
	std::cout << "*************************" << std::endl; 

	return 0;
}

/* ************************************************************ */ 
/* * Passagem de parametros por valor para os dois parametros * */ 
/* * Efeito colateral para uma das variáveis globais          * */ 
/* ************************************************************ */ 

void F0(int a, int b) { 

	std::cout << "##### F0 #####" << std::endl; 

	a += 10;
	b *= 2;

	std::cout << "	 a = " << a << " [ " << &a << " ] " << std::endl;
	std::cout << "	 b = " << b << " [ " << &b << " ] " << std::endl;

	g0 = a * b;

}

/* ************************************************************ */ 
/* * Passagem por referencia para um dos parametros           * */
/* * Uso de variável local com mesmo nome da global,          * */ 
/* *   sem efeito colateral                                   * */ 
/* ************************************************************ */ 

void F1(int &a, int b) {

int g0 = 0; 

	std::cout << "##### F1 #####" << std::endl; 

	a += 10;
	b *= 2;

	std::cout << "	 a  = " << a << " [ " << &a << " ] " << std::endl;
	std::cout << "	 b  = " << b << " [ " << &b << " ] " << std::endl;
	std::cout << "	 g0 = " << g0 << " [ " << &g0 << " ] " << std::endl;

	g0 = a * b;

}

/* ************************************************************ */ 
/* * Passagem por referencia para os dois parametros.         * */
/* * Uso de variável local com mesmo nome da global,          * */ 
/* *   sem efeito colateral (escopo local prevalece)          * */ 
/* ************************************************************ */ 

void F2(int &g0, int &g1) {

	std::cout << "##### F2 #####" << std::endl; 

	g0 += 10;
	g1 *= 2;
	
	std::cout << "	g0 = " << g0 << " [ " << &g0 << " ] " << std::endl;
	std::cout << "	g1 = " << g1 << " [ " << &g1 << " ] " << std::endl;

	g0 = g0 * g1;
}

/* ************************************************************ */ 
/* * Passagem por referencia para os dois parametros.         * */
/* * Uso de variável local com mesmo nome da global,          * */ 
/* *   sem efeito colateral                                   * */ 
/* ************************************************************ */ 

void F3(int *g0, int *g1) {

	std::cout << "##### F3 #####" << std::endl; 

	*g0 += 10;
	*g1 *= 2;
	
	std::cout << "	g0 = " << *g0 << " [ " << g0 << " ] " << std::endl;
	std::cout << "	g1 = " << *g1 << " [ " << g1 << " ] " << std::endl;

	*g0 = (*g0) * (*g1);
}
