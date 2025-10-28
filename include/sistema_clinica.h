#ifndef SISTEMA_CLINICA_H
#define SISTEMA_CLINICA_H
#include "paciente.h"
#include "medico.h"
#include "consulta.h"


class SistemaClinica {
private:
    std::vector<Paciente> pacientes;
    std::vector<Medico> medicos;
    std::vector<Consulta> consultas;
public:
    void cadastrarPaciente(Paciente p);
    void cadastrarMedico(Medico m);
    void listarConsultas();
};
#endif
