#include "recepcionista.h"
#include <iostream>

Recepcionista::Recepcionista(std::string nome) : nome(nome) {}

Consulta Recepcionista::agendarConsulta(Paciente& p, Medico& m, std::string data) {
    std::cout << "Consulta agendada para " << p.getNome() << " em " << data << "\n";
    return Consulta(&p, &m, data);
}

Pagamento Recepcionista::registrarPagamento(Paciente& p, float valor, std::string metodo, std::string data) {
    std::cout << "Registrando pagamento de R$" << valor << " via " << metodo << "...\n";
    return Pagamento(p, valor, metodo, data);
}
#include "Recepcionista.h"
#include <iostream>

Recepcionista::Recepcionista(std::string nome) : nome(nome) {}

Consulta Recepcionista::agendarConsulta(Paciente& p, Medico& m, std::string data) {
    std::cout << "Consulta agendada para " << p.getNome() << " em " << data << "\n";
    return Consulta(&p, &m, data);
}

Pagamento Recepcionista::registrarPagamento(Paciente& p, float valor, std::string metodo, std::string data) {
    std::cout << "Registrando pagamento de R$" << valor << " via " << metodo << "...\n";
    return Pagamento(p, valor, metodo, data);
}
