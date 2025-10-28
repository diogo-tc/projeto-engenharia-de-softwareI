#ifndef MEDICO_H
#define MEDICO_H
#include <string>
#include "paciente.h"
#include "receita.h"

class Medico {
private:
    std::string nome;
    std::string especialidade;
public:
    Medico(std::string nome, std::string esp);
    void registrarConsulta(Paciente& p, std::string diagnostico);
    void emitirReceita(Paciente& p, std::string medicamento);
};
#endif
