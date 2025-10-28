#include "paciente.h"

Paciente::Paciente(std::string nome, std::string cpf) : nome(nome), cpf(cpf) {}

void Paciente::adicionarHistorico(std::string entrada) {
    historico += entrada + "\n";
}

std::string Paciente::getNome() { return nome; }
std::string Paciente::getCPF() { return cpf; }
std::string Paciente::getHistorico() { return historico; }
