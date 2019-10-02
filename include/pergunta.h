#ifndef PDS2_PERGUNTA_H
#define PDS2_PERGUNTA_H

#include <string>
#include <iostream>
#include <curses.h>
#include "sistema.h"


#define KEY_UP_ 72
#define KEY_DOWN_ 80
#define KEY_ENTER_ 32

class Pergunta {
    
	std::string enunciado;
    std::string alternativas[4];
    int correta;
    int dificuldade;


	private:
        void printarPergunta(int);

    public :

    	// Construtor
        Pergunta(std::string, std::string[], int, int);
        

        // Métodos Gráficos
        int escolherAlternativa(SistemaLinux);


        // Getters & Setters
        int getCorreta();
        //std get_enunciado();
        //int get_alternativas();
};

#endif