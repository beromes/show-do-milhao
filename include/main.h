#ifndef PDS2_MAIN_H
#define PDS2_MAIN_H

#include <iostream>
#include "sistema.h"
#include "leitor-de-perguntas.h"

class Main {
    
	SistemaLinux sistema;
	int progresso;


	private:
        void definirSistema();
        void printarMensagemDerrotado();

    public:

        // Construtor vazio
        Main();
        
        // Métodos
        void iniciar();

    	// Getters & Setters
    	SistemaLinux getSistema();
    	void setSistema(SistemaLinux);
};

#endif



