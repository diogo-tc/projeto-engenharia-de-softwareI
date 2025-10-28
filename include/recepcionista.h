#ifndef RECEPCIONISTA_H
#define RECEPCIONISTA_H
#include <string>
#include "paciente.h"
#include "medico.h"
#include "consulta.h"
#include "pagamento.h"

class Recepcionista {
private:
    std::string nome;
public:
    Recepcionista(std::string nome);
    Consulta agendarConsulta(Paciente& p, Medico& m, std::string data);
    Pagamento registrarPagamento(Paciente& p, float valor, std::string metodo, std::string data);
};
#endif
