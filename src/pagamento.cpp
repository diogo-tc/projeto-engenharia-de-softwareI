#include "pagamento.h"

Pagamento::Pagamento(Paciente p, float valor, std::string metodo, std::string data)
    : paciente(p), valor(valor), metodo(metodo), data(data) {}

std::string Pagamento::getResumo() {
    return "Pagamento de R$" + std::to_string(valor) +
           " realizado por " + paciente.getNome() +
           " em " + data + " via " + metodo;
}
