#include "core/Aplicacion.h"
#include <iostream>
#include <exception>

int main() {
    try {
        Aplicacion app(1280, 720, "Escuela de Informática - Proyecto U3");
        app.ejecutar();
    } catch (const std::exception& e) {
        std::cerr << "Error fatal: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}