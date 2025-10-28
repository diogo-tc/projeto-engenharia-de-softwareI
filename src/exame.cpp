#include "exame.h"

Exame::Exame(Paciente p, Medico m, std::string tipo, std::string data)
    : paciente(p), medico(m), tipo(tipo), data(data), resultado("Pendente") {}

void Exame::registrarResultado(std::string resultado) {
    this->resultado = resultado;
}

std::string Exame::getDescricao() {
    return "Exame: " + tipo + " | Paciente: " + paciente.getNome() +
           " | Médico: " + medico.getNome() +
           " | Data: " + data + " | Resultado: " + resultado;
}
