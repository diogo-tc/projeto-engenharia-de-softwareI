#ifndef CONSULTA_H
#define CONSULTA_H
#include <string>
#include "paciente.h"
#include "medico.h"

class Consulta {
private:
    Paciente* paciente;
    Medico* medico;
    std::string data;
    std::string diagnostico;

public:
    Consulta(Paciente* p, Medico* m, std::string data);
    void setDiagnostico(std::string diag);
    std::string getResumo();
};
#endif
