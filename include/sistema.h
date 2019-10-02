#ifndef PDS2_SISTEMA_H
#define PDS2_SISTEMA_H

#include <cstdlib>

class SistemaLinux {
    

    public:

        // Construtor vazio
        SistemaLinux();
        

        // Métodos Gráficos
        void limparTela();
};


class SistemaWindows {
    

    public:

        // Construtor vazio
        SistemaWindows();
        

        // Métodos Gráficos
        void limparTela();
};

#endif