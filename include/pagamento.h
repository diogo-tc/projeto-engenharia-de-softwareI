#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>
#include "paciente.h"

class Pagamento {
private:
    Paciente paciente;
    float valor;
    std::string metodo;
    std::string data;
public:
    Pagamento(Paciente p, float valor, std::string metodo, std::string data);
    std::string getResumo();
};
#endif
