#include "sistema_clinica.h"
#include <iostream>

void SistemaClinica::cadastrarPaciente(Paciente p) {
    pacientes.push_back(p);
}

void SistemaClinica::cadastrarMedico(Medico m) {
    medicos.push_back(m);
}

void SistemaClinica::listarConsultas() {
    for (auto& c : consultas)
        std::cout << c.getResumo() << "\n";
}
