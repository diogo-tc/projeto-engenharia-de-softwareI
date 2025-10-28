#ifndef EXAME_H
#define EXAME_H
#include <string>
#include "paciente.h"
#include "medico.h"

class Exame {
private:
    Paciente paciente;
    Medico medico;
    std::string tipo;
    std::string data;
    std::string resultado;
public:
    Exame(Paciente p, Medico m, std::string tipo, std::string data);
    void registrarResultado(std::string resultado);
    std::string getDescricao();
};
#endif
