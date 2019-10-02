#include "pergunta.h"

Pergunta::Pergunta(std::string _enunciado, std::string _alternativas[4], int _correta, int _dificuldade) {
    enunciado = _enunciado;
    alternativas[0] = _alternativas[0];
    alternativas[1] = _alternativas[1];
    alternativas[2] = _alternativas[2];
    alternativas[3] = _alternativas[3];
    correta = _correta;
    dificuldade = _dificuldade;
}

void Pergunta::printarPergunta(int posicao) {

	std::string linhas[4];

    linhas[0] = "A) " + alternativas[0] + "\n";
	linhas[1] = "B) " + alternativas[1] + "\n";
	linhas[2] = "C) " + alternativas[2] + "\n";
	linhas[3] = "D) " + alternativas[3] + "\n";


	linhas[posicao] = "->  " + linhas[posicao];

    std::cout << "----------------------------------------------" << std::endl;

    std::cout << "\n" + enunciado + "\n" << std::endl;

    std::cout << "----------------------------------------------" << std::endl;
	
	std::cout << linhas[0] << std::endl;
	std::cout << linhas[1] << std::endl;
	std::cout << linhas[2] << std::endl;
	std::cout << linhas[3] << std::endl;

	std::cout << "----------------------------------------------" << std::endl;

}

int Pergunta::escolherAlternativa(SistemaLinux sistema) {

	int teclaPressionada = 0;
	int posicaoSelecionada = 0;
	printarPergunta(0);

	while(true) {
		
		sistema.limparTela();

		teclaPressionada = 0;

        switch( teclaPressionada=getch() ) {

        case KEY_UP_:

        	if (posicaoSelecionada > 0) {
	        	posicaoSelecionada--;
        	}

            printarPergunta(posicaoSelecionada);
        
            break;

        case KEY_DOWN_:

        	if (posicaoSelecionada < 3) {
	        	posicaoSelecionada++;
        	}

            printarPergunta(posicaoSelecionada);
        
            break;

        case KEY_ENTER_:

        	return posicaoSelecionada;
		}
	}
}

int Pergunta::getCorreta() {
	return correta;
}