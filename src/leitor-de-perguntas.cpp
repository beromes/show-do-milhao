#include "leitor-de-perguntas.h"

// Linux
LeitorPerguntas::LeitorPerguntas() {}

Pergunta LeitorPerguntas::ler(int dificuldade) {
    	
    std::string alternativas[4];
    alternativas[0] = "3+2 = 4";
	alternativas[1] = "2+2 = 5";
	alternativas[2] = "12 = 21";
	alternativas[3] = "2+2 = 2+2";
    
    return Pergunta("Qual é certo?", alternativas, 3, dificuldade);

}
