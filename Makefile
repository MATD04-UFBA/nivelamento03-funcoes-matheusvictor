.cpp.o:	$*.h
	g++	-c $*.cpp

all:	ParametrosValorRef FuncoesEscopo FuncoesParametros FuncoesModulos

ParametrosValorRef:  ParametrosValorRef.o 
	g++ -o $@ $^

FuncoesEscopo:  FuncoesEscopo.o 
	g++ -o $@ $^

FuncoesParametros:  FuncoesParametros.o 
	g++ -o $@ $^

FuncoesModulos:  FuncoesModulos.o modulo.o
	g++ -o $@ $^

clean:
	rm *.o ParametrosValorRef FuncoesEscopo FuncoesParametros FuncoesModulos