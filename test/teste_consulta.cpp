#include <cassert>
#include "../src/paciente.h"
#include "../src/medico.h"
#include "../src/consulta.h"

int main() {
    Paciente p("João", "123.456.789-00");
    Medico m("Dra. Ana", "Cardiologia");
    Consulta c(&p, &m, "27/10/2025");
    c.setDiagnostico("Pressão Alta");

    assert(p.getNome() == "João");
    assert(c.getResumo().find("Pressão Alta") != std::string::npos);
}
