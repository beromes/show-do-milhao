#include "sistema.h"

// Linux
SistemaLinux::SistemaLinux() {}

void SistemaLinux::limparTela() {
    system("clear");
}

// Windows
SistemaWindows::SistemaWindows(){}

void SistemaWindows::limparTela() {
    system("cls");
}
