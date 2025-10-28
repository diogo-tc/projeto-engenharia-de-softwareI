#ifndef RECEITA_H
#define RECEITA_H
#include <string>
#include "Paciente.h"

class Receita {
private:
    Paciente paciente;
    std::string medicoNome;
    std::string medicamento;
public:
    Receita(Paciente p, std::string medicoNome, std::string medicamento);
    std::string getDescricao();
};
#endif
