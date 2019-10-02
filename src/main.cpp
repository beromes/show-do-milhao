#include "main.h"


// Construtor
Main::Main() {
	progresso = 0;
}

// Métodos privados
void Main::definirSistema() {

	sistema = SistemaLinux();

}

void Main::printarMensagemDerrotado() {

	sistema.limparTela();
	std::cout << "Você perdeu" << std::endl;
	
}


// Método principal
void Main::iniciar() {

	definirSistema();

	LeitorPerguntas l = LeitorPerguntas(); 

	while(true) {

		int dificuldade = progresso / 3;

		Pergunta p = l.ler(dificuldade);

		int resposta = p.escolherAlternativa(sistema);


		if (p.getCorreta() == resposta) {
		
			progresso++;
		
		}else{
		
			printarMensagemDerrotado();
			break;
		
		}

	}

}
