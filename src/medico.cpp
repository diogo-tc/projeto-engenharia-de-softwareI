#include "medico.h"
#include <iostream>

Medico::Medico(std::string nome, std::string esp)
    : nome(nome), especialidade(esp) {}

void Medico::registrarConsulta(Paciente& p, std::string diagnostico) {
    p.adicionarHistorico("Consulta: " + diagnostico);
}

void Medico::emitirReceita(Paciente& p, std::string medicamento) {
    p.adicionarHistorico("Receita: " + medicamento);
}
