#include "receita.h"

Receita::Receita(Paciente p, std::string medicoNome, std::string medicamento)
    : paciente(p), medicoNome(medicoNome), medicamento(medicamento) {}

std::string Receita::getDescricao() {
    return "Receita para " + paciente.getNome() + " emitida por " + medicoNome +
           ": " + medicamento;
}
