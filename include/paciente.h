#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>

class Paciente {
private:
    std::string nome;
    std::string cpf;
    std::string historico;
public:
    Paciente(std::string nome, std::string cpf);

    void adicionarHistorico(std::string entrada);
    
    std::string getNome();
    std::string getCPF();
    std::string getHistorico();
};
#endif
