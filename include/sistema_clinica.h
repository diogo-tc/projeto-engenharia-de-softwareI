#ifndef SISTEMACLINICA_H
#define SISTEMACLINICA_H
#include <vector>
#include "src/paciente.h"
#include "src/medico.h"
#include "src/consulta.h"

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
