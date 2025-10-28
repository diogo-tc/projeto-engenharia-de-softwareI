#include "consulta.h"

Consulta::Consulta(Paciente* p, Medico* m, std::string data)
    : paciente(p), medico(m), data(data) {}

void Consulta::setDiagnostico(std::string diag) {
    diagnostico = diag;
}

std::string Consulta::getResumo() {
    return "Consulta em " + data + " - Paciente: " + paciente->getNome() +
           " - Diagnóstico: " + diagnostico;
}
